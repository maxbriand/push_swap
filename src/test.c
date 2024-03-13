#include "push_swap.h"

// size_t	ft_strlen(const char *s)
// {
// 	int	i;

// 	i = 0;
// 	while (s[i])
// 		i++;
// 	return (i);
// }

// static int	digit_counter(int n)
// {
// 	int	i;

// 	i = 0;
// 	if (n == 0)
// 		i++;
// 	if (n < 0)
// 		i++;
// 	while (n >= 1 || n <= -1)
// 	{
// 		n = n / 10;
// 		i++;
// 	}
// 	return (i);
// }

// static char	*recursive(char *pt, int n)
// {
// 	if (n == -2147483648)
// 	{
// 		ft_strlcpy(pt, "-2147483648", 12);
// 		return (pt);
// 	}
// 	if (n < 0)
// 	{
// 		pt[0] = '-';
// 		recursive(pt + 1, n *= -1);
// 		n = 0;
// 	}
// 	if (n >= 10)
// 	{
// 		pt = recursive(pt, n / 10);
// 		pt[0] = (n % 10) + 48;
// 	}
// 	if (n > 0)
// 		pt[0] = (n % 10) + 48;
// 	return (pt + 1);
// }

// char	*ft_itoa(int n)
// {
// 	char	*pt;
// 	int		lenght;

// 	lenght = digit_counter(n);
// 	pt = malloc(sizeof(char) * digit_counter(n) + 1);
// 	if (!pt)
// 		return (NULL);
// 	if (n == 0)
// 	{
// 		ft_strlcpy(pt, "0\0", 2);
// 		return (pt);
// 	}
// 	recursive(pt, n);
// 	pt[lenght] = '\0';
// 	return (pt);
// }

// // handle 0 case?
// int	len_int(long d)
// {
// 	int	i;

// 	i = 0;
// 	while (d != 0)
// 	{
// 		d /= 10;
// 		i++;
// 	}
// 	return (i);
// }

// long	over_long(char *s)
// {
// 	int 	lenght_max;
// 	int 	digit;
// 	char	*store;

// 	store = s;
// 	if (*s == '-' || *s == '+')
// 		s++;
// 	lenght_max = INT_MAX;
// 	digit = 0;
// 	while (s)
// 	{
// 		digit = INT_MAX / (10 * lenght_max);
// 		if (digit - '0' > s)
// 		s++;
// 	}
// 	return (0);
// }

// convert ascii to long


// if (len_int(LONG_MAX) < (int) ft_strlen(s) && *store != '-')
// 	return ((LONG_MAX));
// if (len_int(LONG_MAX) < (int) ft_strlen(s) && *store == '-')
// 	return ((LONG_MIN));
// if (len_int(LONG_MAX) == (int) ft_strlen(s) && over_long(store) != 0)
// 	return (over_long(store));

// int main(int ac, char **av) 
// {
// 	long	nbr;

// 	nbr = ft_atol(av[1]);
// 	printf("%ld\n", nbr);

// 	long nbr2;
// 	nbr2 = atol(av[1]);
// 	printf("%ld\n", nbr2);
// 	return (0);
// }
