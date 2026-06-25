#include <unistd.h>

void ft_print_comb(void);

int main(){
	ft_print_comb();
	return 0;
}

void ft_print_comb(){
	char digits[3];
	char comma=',';
	char space=' ';

	digits[0]='0';
	while(digits[0]<='7'){
		digits[1]=digits[0]+1;
		while(digits[1]<='8'){
			digits[2]=digits[1]+1;
			while(digits[2]<='9'){
				write(1,&digits[0],1);
				write(1,&digits[1],1);
				write(1,&digits[2],1);
				if(!(digits[0]=='7' && digits[1]=='8' && digits[2]=='9')){
					write(1,&comma,1);
					write(1,&space,1);
				}
				digits[2]++;
			}
			digits[1]++;
			//digits[2]=digits[1]+1;
		}
		digits[0]++;
		//digits[1]=digits[0]+1;
	}
}
