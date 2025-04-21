
int tmp;

int ft_strlen(char *s)
{
	int i;

	i = 0;
	while (s[i])
		i++;
	return (i);
}

int ft_error(char *s)
{
	write (2, s, ft_strlen(s));
	return (1);
}

int	exec_cd(char **argv, int i)
{
	if (i != 2)
		return ("error: cd: bad arguments\n");
	if (chdir(argv[1]) == -1)
	{
		ft_error("error: cd: cannot change dir to ");
		ft_error(argv[1]);
		return (ft_error("\n"));
	}
	return (0);
}

int	exec_cmd(char *argv, int i, char *envp)
{
	int fd[2];
	int ret;
	int pid;
	int has_pipe = (argv[i] && !strcmp(argv[i], "|"));

	if (has_pipe && pipe(fd) == -1)
		return (ft_error("error: fatal\n"));
	pid = fork();
	if (pid == -1)
		return (ft_error("error: fatal\n"));
	if (pid == 0)
		exit(exec_child(argv, i, envp, has_pipe ? fd : NULL))
	}

int main(int argc, char **argv, char **envp)
{
	(void)argc;

	int ret;
	int i;

	ret = 0;
	i = 0;
	tmp = dup(0);
	if (tmp = -1)
		return (ft_error("error: fatal\n"));
	while (argv[i] && argv[++i])
	{
		argv = argv + i;
		i = 0;
		while (argv[i] && strcmp(argv[i], ";") && strcmp(argv[i], "|"))
			i++;
		if (!strcmp(*argv, "cd"))
			ret = exec_cd(argv, i);
		else if (i)
			ret = exec_cmd(argv, i, envp);
	}
	close (tmp);
	return (ret);
}