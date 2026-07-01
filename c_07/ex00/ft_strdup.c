#include <stdlib.h>
//#include <stdio.h>
//#include <string.h>
#include <stddef.h>

char	*ft_strdup(char *src);

/*int main(){
char src[]="hellow";
printf("%s\n",ft_strdup(src));
printf("%s\n",strdup(src));
return 0;
}*/

char	*ft_strdup(char *src)
{
	int		i;
	int		j;
	char	*arr;

	if (!src)
		return (NULL);
	i = 0;
	while (src[i])
		i++;
	arr = malloc((i + 1) * sizeof(char));
	if (arr == NULL)
		return (NULL);
	j = 0;
	while (j < i)
	{
		arr[j] = src[j];
		j++;
	}
	arr[j] = '\0';
	return (arr);
}
