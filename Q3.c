#include<stdio.h>

void main()
{
	int i;
	char a[]={'H','e','L','l','O'};
	
	for(i=0;i<5;i++){
	if(a[i]>='A' && a[i]<='Z'){
		a[i]=a[i]+32;
	}
	else if(a[i]>='a' && a[i]<='z'){
		a[i]=a[i]-32;
	}
		printf("%c",a[i]);
	}
}
