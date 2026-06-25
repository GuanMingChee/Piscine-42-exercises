#include <unistd.h>

void ft_print_comb2(void);

int main(){
	ft_print_comb2();
	return 0;
}

void ft_print_comb2(void){
int start_f=0;
int start_s;
char c;
while(start_f<99){
	start_s=start_f+1;
	while(start_s<100){
		c=(start_f/10)+'0';
		write(1,&c,1);
		c=(start_f%10)+'0';
		write(1,&c,1);
		write(1," ",1);
		c=(start_s/10)+'0';
		write(1,&c,1);
		c=(start_s%10)+'0';
		write(1,&c,1);
		if(start_f!=98 || start_s!=99)
			write(1,", ",2);
		start_s++;
	}
start_f++;
}
}
