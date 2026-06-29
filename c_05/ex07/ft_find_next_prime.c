#include <stdio.h>

int	ft_find_next_prime(int nb);

int main(){
printf("%d\n",ft_find_next_prime(2147483647));
return 0;
}

int	ft_find_next_prime(int nb)
{
	int	i;

	if (nb <= 2)
		return (2);
	while (nb > 0)
	{
		i = 2;
		while (i < nb)
		{
			if (nb % i == 0)
				break;
			i++;
		}
		if (i == nb)
			break;
		nb++;
	}
	return (i);
}
