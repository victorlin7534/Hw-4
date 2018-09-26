#include <stdlib.h>
#include <stdio.h>
#include <string.h>

int main(){
	char x[] = "goodbye";
	char y = 'd';
	char *z = strchr(x,y);
	printf("address: %x\n",z);
	printf("string: %s\n",x);
	printf("first char occurence: %c\n",*z);
	return 0;
}