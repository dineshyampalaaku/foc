#include<stdio.h>
#include<conio.h>
#include<math.h>
int main()
{
	int a,b,c;
	char op;
	printf("calculator program\n");
	printf("+add\n-sub\n*mul\n/div");
	printf("\n enter a operating symbol");
	scanf("%c",&op);
	printf("enter the two numbers:");
	scanf("%d%d",&a,&b);
	switch(op)
	{case '+':
		c=a+b;
		break;
		case '-':
		c=a-b;
		break;
		case '*':
		break;
		case'/':
		c=a/b;
		break;
	}
	printf("/nthe result is %d",c);
	getch();
}
