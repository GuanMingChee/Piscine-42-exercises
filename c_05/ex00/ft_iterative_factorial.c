//#include <stdio.h>

int	ft_iterative_factorial(int nb);

/*int main(){
printf("%d\n",ft_iterative_factorial(0));
return 0;
}*/

int	ft_iterative_factorial(int nb)
{
	int	res;
	int	i;

	res = 1;
	i = 1;
	if (nb < 0)
		return (0);
	while (i <= nb)
	{
		res *= i;
		i++;
	}
	return (res);
}
