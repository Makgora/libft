#include "libft.h"

void	putnbr_aux(long int n)
{
	if (n < 0)
	{
		ft_putchar('-');
		putnbr_aux(n * -1);
	}
	else if (n % 10 != 0)
	{
		putnbr_aux(n / 10);
		ft_putchar(n % 10 + '0');
	}
}

void	ft_putnbr(int n)
{
	if (n == 0)
		ft_putchar('0');
	else
		putnbr_aux((long int)n);
}
