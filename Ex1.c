#include<stdio.h>
#include<string.h>
int main()
{
	char name[]="Hello";
	// char name[]={'H','e','l','l','o','\0'};
	printf("%d\n", strlen(name)); // 5
	printf("%d Bytes\n", sizeof(name)); // 6 Bytes
	return 0;
}