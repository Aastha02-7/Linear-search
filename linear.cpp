#include<conio.h>
#include<stdio.h>
int main()
{
	int a[100],n,i,item,loc=-1;
	printf("Enter the number of element: ");
	scanf("%d",&n);
	printf("Enter the numbers:\n");
	for(i=0;i<=n-1;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("Enter the number to be search: ");
	scanf("%d",&item);
	for(i=0;i<=n-1;i++)
	{
		if(item==a[i])
		{
			loc=i;
			break;
		}
	}
	if(loc>=0)
		printf("\n%d is found in position %d",item,loc+1);
	else
		printf("\nItem does not exits");
	return 0;
}
