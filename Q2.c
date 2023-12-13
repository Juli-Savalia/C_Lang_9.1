#include<stdio.h>

void main()
{
	int i;
	char a[]={'H','E','L','L','O'};
	
	for(i=0;i<5;i++){
		a[i]=a[i]+32;
		printf("%c",a[i]);
	}
}
