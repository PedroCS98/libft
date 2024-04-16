
// testar

// lstclear
// lstiter


// check output - do all mains
// meter 42 headers
// take out unnecessary makefile rules and save them somewhere else
// norminette
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

//substituir pela original depois de entregar o libft
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
	return (ft_strlen(src) + dst_len);
}

//substituir pela original depois de entregar o libft
char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*substr;
	size_t	i;
	size_t	j;

	substr = (char *)calloc(len + 1, 1);
	if (!s || !substr)
		return (0);
	i = 0;
	j = start;
	while (j < ft_strlen(s) && i < len)
		substr[i++] = s[j++];
	substr[i] = '\0';
	return (substr);
}