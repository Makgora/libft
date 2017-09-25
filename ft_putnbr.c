#include "libft.h"

void	ft_putnbr_aux(long int n)
{
	if (n < 0)
	{
		ft_putchar('-');
		ft_putnbr_aux(n * -1);
	}
	else if (n % 10 != 0)
	{
		ft_putnbr_aux(n / 10);
		ft_putchar(n % 10 + '0');
	}
}

void	ft_putnbr(int n)
{
	if (n == 0)
		ft_putchar('0');
	else
		ft_putnbr_aux((long int)n);
}
