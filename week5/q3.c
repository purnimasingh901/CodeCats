#include<stdio.h>
void display(int *);
main()
{
	int i, n;
	int marks[10];
	
	printf("enter the total number of subjects   :  ");
	scanf("%d",&n);
	printf("enter the subject marks : \n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&marks[i]);
	}
	for(i=0;i<n;i++)
	{
		display(&marks[i]);
	}
}

void display(int *p)
{
	printf("%d",*p);
}
