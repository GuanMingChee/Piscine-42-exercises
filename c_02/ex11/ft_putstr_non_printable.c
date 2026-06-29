#include <unistd.h>

void	ft_putstr_non_printable(char *str);

void	ft_putstr_non_printable(char *str)
{
	int				i;
	int				h;
	unsigned char	s;

	i = 0;
	while (str[i])
	{
		s = (unsigned char) str[i];
		if (str[i] < 32 || str[i] > 126)
		{
			write(1, "\\", 1);
			h = s / 16;
			write(1, &"0123456789abcdef"[h], 1);
			h = s % 16;
			write(1, &"0123456789abcdef"[h], 1);
		}
		else
			write(1, &str[i], 1);
		i++;
	}
}
