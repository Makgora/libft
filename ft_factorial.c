int	ft_iterative_factorial(int nb)
{
	int	array[13];

	array[0] = 1;
	array[1] = 1;
	array[2] = 2;
	array[3] = 6;
	array[4] = 24;
	array[5] = 120;
	array[6] = 720;
	array[7] = 5040;
	array[8] = 40320;
	array[9] = 362880;
	array[10] = 3628800;
	array[11] = 39916800;
	array[12] = 479001600;
	
	return (nb < 0 || nb > 12 ? 0 : array[nb]);
}
