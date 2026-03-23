#include<stdio.h>
void insertion_sort(int[],int);
main()
{
	int a[23],n,i,k;
	printf("how many no you want");
	scanf("%d",&n);
	printf("enter number in array element");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	insertion_sort(a,n);
	printf("\nsorted element are:\n");
	for(k=0;i<n;i++)
	{
		printf("\t%d",a[k]);
	}
}
void insertion_sort(int a[],int n)
{
	int i,j,temp;
	for(i=1;i<n;i++)
	{
		temp=a[i];
		for(j=i-1;j>=0 && a[j]>temp;j--)
		{
			a[j+1]=a[j];
		}
		a[j+1]=temp;
	}
}
