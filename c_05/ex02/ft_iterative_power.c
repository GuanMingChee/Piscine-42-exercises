//#include <stdio.h>

int	ft_iterative_power(int nb, int power);

/*int main(){
printf("%d\n",ft_iterative_power(-9, 4));
return 0;
}
//nb = 0, p = 0, ret 1
//nb >= 0, p < 0, ret 0
//nb != 0, p = 0, ret 1
*/

int	ft_iterative_power(int nb, int power)
{
	int	i;

	i = 1;
	if (power < 0)
		return (0);
	while (power > 0)
	{
		i *= nb;
		power--;
	}
	return (i);
}
