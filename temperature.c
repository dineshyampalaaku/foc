#include<stdio.h>
#include<conio.h>
#define con 1.8
int main()
{
	float c,f;
	printf("enter the celcius value:");
	scanf("%f",&c);
	f=(con*c)+32;
	printf("the fahrenheit value is %f",f);
	getch();
	return(0);
}
