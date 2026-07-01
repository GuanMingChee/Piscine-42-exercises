#include <stdlib.h>
//#include <stdio.h>

int	ft_ultimate_range(int **range, int min, int max);

/*int main(){
int *range;
int min=-17;
int max=45;
int size=ft_ultimate_range(&range, min, max);
if (size <= 0)
        return (0); 

    // Now it is 100% safe to print and free because size MUST be positive
    int i = 0;
    while (i < size)
    {
        printf("%d ", range[i]);
        i++;
    }
    free(range);
return 0;
}*/

int	ft_ultimate_range(int **range, int min, int max)
{
	long	size;
	int		i;

	if (min >= max)
	{
		*range = NULL;
		return (0);
	}
	size = max - min;
	*range = malloc(size * sizeof(int));
	if (*range == NULL)
		return (-1);
	i = 0;
	while (i < size)
	{
		(*range)[i] = min;
		min++;
		i++;
	}
	return (size);
}
