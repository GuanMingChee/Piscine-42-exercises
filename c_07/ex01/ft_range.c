#include <stdlib.h>
#include <stdio.h>

int	*ft_range(int min, int max);

/*int main(){
int min=-2;
int max=345;
//printf("%ls\n",
int *res=ft_range(min,max);
//);
int i = 0;

printf("[");
while (i < (max-min))
{
    printf("%d", res[i]);
    if (i < max-min - 1)
        printf(", "); // Adds commas between numbers, but not at the very end
    i++;
}
printf("]\n");
return 0;
}*/

int	*ft_range(int min, int max)
{
	long		size;
	int			i;
	int			*res;

	if (min >= max)
		return (NULL);
	size = max - min;
	i = 0;
	res = malloc(size * sizeof(int));
	if (res == NULL)
		return (NULL);
	while (i < size)
	{
		res[i] = min;
		min++;
		i++;
	}
	return (res);
}
