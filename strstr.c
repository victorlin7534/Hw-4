#include <stdlib.h>
#include <stdio.h>
#include <string.h>

int main(){
	char x[] = "goodbye";
	char y[] = "bye";
	char *z = strstr(x,y);
	printf("address: %x\n",z);
	printf("string: %s\n",x);
	printf("first substring occurence: %s\n",z);
	return 0;
}