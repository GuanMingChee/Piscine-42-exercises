#include <unistd.h>

char *ft_strncpy(char *dest, char *src, unsigned int n);
int char_to_int(char *c);

int main(int argc, char *argv[]){
if(argc<3){
write(2,"Please assign source to copy and size of destination after calling executable!\n",79);
return 1;
}
int size=char_to_int(argv[2]);
if(size==-1){
return 1;
}

char d[size];
ft_strncpy(d, argv[1], size);
return 0;
}

int char_to_int(char *c){
int i=0;
while(c[i]!='\0'){
if(!(c[i]>='0' && c[i]<='9')){
write(2,"Please input value >= 0\n",24);
return -1;
}
if(c[0]=='0'){
return -1;
}
i++;
}
i--;
int multy=1;
int summy=0;
while(i>=0){
summy+=((c[i]-'0')*multy);
i--;
multy*=10;
}
return summy;
}

char *ft_strncpy(char *dest, char *src, unsigned int n){
	unsigned int i;
//if src=hello, n=5; dest=hello
//if src=hello, n=3; dest=hel
//if src=hello, n=8; dest=hello\0\0\0
	i = 0;
	while (src[i] != '\0' && i < n)
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	write(1,dest,n);
	write(1,"\n",1);
	return dest;
}
