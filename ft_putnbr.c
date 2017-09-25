#include "libft.h"

void	ft_putnbr(int n)
{
	if (n < 0)
		ft_putchar('-');
	while (n != 0)
	{
		ft_putchar(n );
	}
		
}
