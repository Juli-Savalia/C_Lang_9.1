#include<stdio.h>

void main()
{
	int i;
	char a[]={'h','e','l','l','o'};
	
	for(i=0;i<5;i++){
		a[i]=a[i]-32;
		printf("%c",a[i]);
	}
}
