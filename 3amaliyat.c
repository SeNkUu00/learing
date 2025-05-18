#include<stdio.h>
#include<unistd.h>


int main(){

char b [10] = "5x3";
write(1,b,3);
write(1,"\n",1);

char a [10] = "5+2x3-5";
write(1,a,7);
write(1,"\n",1);

char c [10] = "7x5+(5+4)";
write(1,c,8);
write(1,"\n",1);

	return 0;
}