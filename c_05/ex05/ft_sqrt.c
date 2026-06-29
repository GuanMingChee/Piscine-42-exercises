//#include <stdio.h>

int	ft_sqrt(int nb);

/*int main(){
printf("%d\n",ft_sqrt(2146636000));
return 0;
}*/

long long	check_sqrt(long long num, long long low, long long high)
{
	long long	half;

	half = (low + high) / 2;
	if (low <= high)
	{
		if (half * half > num)
			return (check_sqrt(num, low, half - 1));
		else if (half * half < num)
			return (check_sqrt(num, half + 1, high));
		else
			return (half);
	}
	return (0);
}

int	ft_sqrt(int nb)
{
	if (nb <= 0)
		return (0);
	else if (nb == 1)
		return (1);
	else
		return ((int) check_sqrt(nb, 1, nb / 2));
}
