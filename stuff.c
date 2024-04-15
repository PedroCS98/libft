
// tem main

// strtrim
// substr


// nao tem main

// lists
// fd's
// striteri
// strmapi
// strncmp


// how to test fd
// how to test striteri
// how to test strmapi


// check output - do all mains
// take out unnecessary makefile rules and save them somewhere else
// check if all casts are needed
// delete stuff.c

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

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	j;
	size_t	dst_len;

	dst_len = ft_strlen(dst);
	if (size == 0 || size <= dst_len)
		return (ft_strlen(src) + size);
	i = 0;
	j = dst_len;
	while (src && i < size - dst_len - 1)
		dst[j++] = src[i++];
	dst[j] = '\0';
	printf("%zu\n", j);
	return (ft_strlen(src) + dst_len);
}