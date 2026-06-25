#include <unistd.h>
#include <stdio.h>
#include <string.h>

int length_of_string(char *str);
char *ft_strcpy(char *dest, char *src);

int main(int argc, char *argv[]){
if(argc!=2){
write(2,"Insufficient input! Please include 1 string input after calling the executable!\n",80);
return 1;
}
char d[length_of_string(argv[1])+1];
ft_strcpy(d,argv[1]);
return 0;
}

int length_of_string(char *str){
int i=0;
while(str[i]!='\0'){
i++;
}
return i;
}

char *ft_strcpy(char *dest, char *src){
int i=0;
while(src[i]!='\0'){
dest[i]=src[i];
i++;
}
dest[i]='\0';
//or write(1,&*dest,i);
write(1,dest,i);
write(1,"\n",1);
return dest;
}
