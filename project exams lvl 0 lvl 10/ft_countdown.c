#include <unistd.h>

int	main()
{
	write(1, "9876543210\n", 11);
}

#include <unistd.h>

int	main()
{
	int	i;

	i = '9';
	while (i >= '0')
	{
		write(1, &i, 1);
		i--;
	}
	write(1, "\n", 1);
	return (0);
}
