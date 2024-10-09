#include <stdlib.h>
//#include <stdio.h>

int ft_atoi(const char *str)
{
	int	i;
	int	n;
	int	result;

	i = 0;
	n = 1;
	result = 0;
	while ((str[i] >= 9 && str[i] <= 13)
		|| str[i] == ' ')
		i ++;
	while (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			n = n * -1;
		i ++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		result = result * 10 + (str[i] - 48);
		i ++;
	}
	return (result * n);
}

/*int main(void)
{
    const char  str[] = "  ++--+--++-2147483648";
    int         result;

    result = ft_atoi(str);
    printf("%d", result);
}*/