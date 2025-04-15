#ifndef __MICROSHELL_H__
# define __MICROSHELL_H__

# include <unistd.h>
# include <stdlib.h>
# include <sys/wait.h>
# include <sys/types.h>
# include <string.h> 

#endif

int	tmp;

int	ft_strlen(char *s)
{
	int	i = 0;
	while (s[i])
		i++;
	return (i);
}

int	ft_error(char *s)
{
	write(2, s, ft_strlen(s));
	return (1);
}

int	exec_cd(char **argv, int i)
{
	if (i != 2)
		return (ft_error("error: cd: bad arguments\n"));
	if (chdir(argv[1]) == -1)
	{
		ft_error("error: cd: cannot change dir to ");
		ft_error(argv[1]);
		return (ft_error("\n"));
	}
	return (0);
}

int	exec_child(char **argv, int i, char **envp, int *fd)
{
	argv[i] = 0;
	if (dup2(tmp, 0) == -1 || close(tmp) == -1)
		return (ft_error("error: fatal\n"));
	if (fd && (dup2(fd[1], 1) == -1 || close(fd[0]) == -1 || close(fd[1]) == -1))
		return (ft_error("error: fatal\n"));
	execve(*argv, argv, envp);
	ft_error("error: cannot execute ");
	ft_error(*argv);
	return (ft_error("\n"));
}

int	exec_cmd(char **argv, int i, char **envp)
{
	int	pid;
	int	fd[2];
	int	ret;
	int	has_pipe = (argv[i] && !strcmp(argv[i], "|"));

	if (has_pipe && pipe(fd) == -1)
		return (ft_error("error: fatal\n"));
	pid = fork();
	if (pid == -1)
		return (ft_error("error: fatal\n"));
	if (pid == 0)
		exit(exec_child(argv, i, envp, has_pipe ? fd : NULL));
	if (!has_pipe && dup2(0, tmp) == -1)
		return (ft_error("error: fatal\n"));
	if (has_pipe && (dup2(fd[0], tmp) == -1 || close(fd[1]) == -1 || close(fd[0]) == -1))
		return (ft_error("error: fatal\n"));
	if (waitpid(pid, &ret, 0) == -1)
		return (ft_error("error: fatal\n"));
	return (WIFEXITED(ret) ? WEXITSTATUS(ret) : 1);
}

int	main(int argc, char **argv, char **envp)
{
	int	ret = 0;
	int	i = 0;

	(void)argc;
	tmp = dup(0);
	if (tmp == -1)
		return (ft_error("error: fatal\n"));
	while (argv[i] && argv[++i])
	{
		argv += i;
		i = 0;
		while (argv[i] && strcmp(argv[i], "|") && strcmp(argv[i], ";"))
			i++;
		if (!strcmp(*argv, "cd"))
			ret = exec_cd(argv, i);
		else if (i)
			ret = exec_cmd(argv, i, envp);
	}
	if (close(tmp) == -1 || dup2(0, tmp) == -1)
		return (ft_error("error: fatal\n"));
	return (ret);
}
