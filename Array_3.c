#include<stdio.h>
void main()
{
	int arr[10],i,j=0,s=0;
	printf("Enter 10 numbers\n");
	for(i=0;i<10;i++)
	{
	  scanf("%d\n",&arr[i]);
	  if(arr[i]%2==0)
	  {
	  	s=s+arr[i];
	  }
	  else if(arr[i]%2!=0)
	  {
	  	j=j+arr[i];
	  }
	}printf("Sum of all even numbers is %d\n",s);
	printf("Sum of all odd numbers is %d\n",j);
}
