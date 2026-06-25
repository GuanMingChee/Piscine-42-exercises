#include <unistd.h>

void	ft_putstr_non_printable(char *str);

void	ft_putstr_non_printable(char *str)
{
	int	i;
	int	h;

	i = 0;
	while (str[i])
	{
		if (str[i] < 32 || str[i] > 126)
		{
			write(1, "\\", 1);
			h = str[i] / 16;
			write(1, &"0123456789abcdef"[h], 1);
			h = str[i] % 16;
			write(1, &"0123456789abcdef"[h], 1);
		}
		else
			write(1, &str[i], 1);
		i++;
	}
}
