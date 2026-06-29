//#include <stdio.h>

int	ft_is_prime(int nb);

/*int main(){
printf("%d\n",ft_is_prime(1));
return 0;
}*/

int	ft_is_prime(int nb)
{
	int	i;

	if (nb <= 1)
		return (0);
	i = 2;
	while (i <= nb)
	{
		if (i != nb && nb % i == 0)
			return (0);
		i++;
	}
	return (1);
}
