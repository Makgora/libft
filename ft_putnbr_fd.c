#include "libft.h"

void	putnbr_fd_aux(long int n, int fd)
{
	if (n < 0)
	{
		ft_putchar_fd('-', fd);
		putnbr_fd_aux(n * -1, fd);
	}
	else if (n % 10 != 0)
	{
		putnbr_fd_aux(n / 10, fd);
		ft_putchar_fd(n % 10 + '0', fd);
	}
}

void	ft_putnbr_fd(int n, int fd)
{
	if (n == 0)
		ft_putchar_fd('0', fd);
	else
		putnbr_fd_aux((long int)n, fd);
}
