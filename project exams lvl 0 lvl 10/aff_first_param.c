#include <unistd.h>

int main(int argc, char **argv)
{
    if (argc > 1)
    {
        int len;
        
        len = 0;
        while (argv[1][len])
            len++;
        write(1, argv[1], len);
    }
	write(1, "\n", 1);
}

#include <unistd.h>

int	ft_strlen(char *str)
{
	int len;

	len = 0;
	while (str[len])
	{
		len++;
	}
	return (len);
}

int 	main(int argc, char **argv)
{
	if (argc > 1)
	{
		write(1, argv[1], ft_strlen(argv[1]));
		write(1, "\n", 1);
	}
	else
	{
		write(1, "\n", 1);
	}
	return (0);
}
