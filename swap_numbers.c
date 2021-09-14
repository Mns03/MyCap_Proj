#include<stdio.h>
int main()
{
	int a,b,swap;
	printf("Enter a value and b value respectively\n");
	scanf("%d",&a);
	scanf("%d",&b);
	printf("Before Swapping Numbers\n ");
	printf( "a = %d b = %d\n" ,a,b);
	swap=a;
	a=b;
	b=swap;
	printf("After Swapping Numbers\n ");
	printf("a = %d b = %d",a,b);
	return 0;
}
