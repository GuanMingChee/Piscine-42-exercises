#include <unistd.h>

void ft_putnbr(int nb);

int main(){
//ft_putnbr(15675);
//ft_putnbr(147);
//ft_putnbr(0);
ft_putnbr(-2147483648);
return 0;
}

void ft_putnbr(int nb){
if(nb<0 && nb>-10){
write(1,"-",1);
nb*=(-1);
}
//get last digit
int moddy=nb%10;
//+'0';
int p_nb=nb/10;
if(p_nb!=0){
//pass everything excluding last digit
ft_putnbr(p_nb);
}
if(moddy<0 && moddy>-10){
moddy*=(-1);}
moddy+='0';

//print digit after recursion (from left to right)
write(1,&moddy,1);
}
