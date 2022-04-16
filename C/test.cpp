#include<stdio.h>
int main()
{
int arr[20],min,max,n,i;
printf("\n Enter the number of elements in array: ");
scanf("%d",&n);
printf("\n Enter Elements of Array: \n");
for(i=0;i<n;i++)
scanf("%d",&arr[i]);

printf("\n Enter Elements of Array: \n");
for(i=0;i<n;i++)
printf("%d" ,arr[i]);
min=max=arr[0];
for (i=0;i<n;i++)
{
	if(arr[i]>max)
	max=arr[i];
	if(arr[i]<min)
	min=arr[i];
	
}
printf("\n smallest Element of array: %d",min);
printf("\n largest Element of array:%d",max);
return 0;
		
}
