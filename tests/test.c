#include "libft.h"

int	ft_sc(char	**str)
{
	int	i;

	if (str == NULL)
		return (0);
	i = 0;
	while (str[i])
		i++;
	return (i);
}

int ft_add_strs(char **strsjoined, char **strs, int i)
{
    int j;
    
    if  (strs == NULL)
        return (i);
    j = 0;
    while(strs[j] != NULL)
    {
        strsjoined[i] = strs[j];
        i++;
        j++;
    }
    free(strs);
    return (i); 
}

char	**ft_array_str_join(char **strsa, char **strsb)
{
	int		counter;
	int		i;
	char	**strsjoined;

    counter = ft_sc(strsa) + ft_sc(strsb) + 1;
	strsjoined = malloc(sizeof(char *) * counter);
    if (strsjoined == NULL)
        return (NULL);
	i = 0;
    i = ft_add_strs(strsjoined, strsa, i);
    i = ft_add_strs(strsjoined, strsb, i);
	strsjoined[i] = NULL;
	return (strsjoined);
}

int main(void)
{
    char    str1[] = "444";
    char    str2[] = "3333";
    char    str3[] = "222";
    char    str4[] = "Hello fun";
    char    **strs1;

    strs1 = malloc(sizeof(char *)*(4 + 1));
    strs1[0] = str1;
    strs1[1] = str2;
    strs1[2] = str3;
    strs1[3] = str4;
    strs1[4] = NULL;

    // char    **strs1 = NULL;

    char    stra[] = "1111";
    char    strb[] = "999";
    char    strc[] = "888";
    char    strd[] = "6665";
    char    **strs2;

    strs2 = malloc(sizeof(char *)*(4 + 1));
    strs2[0] = stra;
    strs2[1] = strb;
    strs2[2] = strc;
    strs2[3] = strd;
    strs2[4] = NULL;

    char    **new_array_of_strs;
    new_array_of_strs = ft_array_str_join(strs1, strs2);
    
	int f = 0;
	while (new_array_of_strs[f])
	{
		ft_printf("str number %d is: %s\n", f, new_array_of_strs[f]);
		f++;
	}
    free(new_array_of_strs);
    return(0);
}