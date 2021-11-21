#include<stdio.h>

main()
{
	int a[] = {10,20,30,40,60};
int *j,*k;

j = &a[4];
k = a +4;

if(j==k)
{printf("pointers point to the sam elocation ");

}
else 
printf("pointer points to the different loc ");
}

