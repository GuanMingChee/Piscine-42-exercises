//#include <stdio.h>

int	ft_recursive_power(int nb, int power);

/*int main(){
printf("%d\n",ft_recursive_power(0,9));
return 0;
}
//if p < 0 : ret 0
//if p == 0 : ret 1
//others: loop*/

int	ft_recursive_power(int nb, int power)
{
	if (power < 0)
		return (0);
	if (power == 0)
		return (1);
	return (nb * ft_recursive_power(nb, power - 1));
}
