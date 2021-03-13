#include<stdio.h>
int prime(int,int);
int main()
{
	int num,find;
	printf("Enter any number:");
	scanf("%d",&num);
	find=prime(num,num/2);
	if(find==1)
	{
		printf("%d is a prime number.\n",num);
	}
	else
	{
		printf("%d is not a prime number.\n",num);
	}
	return 0;
}
int prime(int num,int i)
{
	if(i==1)
	{
		return 1;
	}
	else
	{
		if(num%i==0)
		{
			return 0;
		}
		else
		{
			return prime(num,i-1);
		}
	}
}
