char	*ft_itoa(int n)
{
	char	*nbr;
	int		i;
	int		dc;

	i = n;
	dc = 0;
	while (i != 0 && ++dc)
		i /= 10;
	if (n < 0)
		i = 1;
	nbr = (char *)calloc(1, dc + i + 1);
	if (n == -2147483648)
		return ((char *)"-2147483648");
	if (n < 0)
	{
		n *= -1;
		nbr[0] = '-';
	}
	if (n == 0)
		return ((char *)"0");
	while (dc-- > 0)
	{
		nbr[dc + i] = n % 10 + '0';
		n %= 10;
	}
	return (nbr);
}