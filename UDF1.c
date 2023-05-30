#include<stdio.h>
void cube(int n1)
{
	int cube;
	cube=n1*n1*n1;
	printf("cube of entered value:-%d",cube);
}
int main()
{
	int a;
	printf("enter the value of A:-");
	scanf("%d",&a);
	cube(a);
	return 0;
}