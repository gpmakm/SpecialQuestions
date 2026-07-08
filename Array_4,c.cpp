#include<stdio.h>
int main(){
	int arr[10],j,big;
	printf("Enter 10 numbers:\n");
	for(j=0;j<10;j++)
	{
		scanf("%d\n",&arr[j]);
	}

	for(j=0;j<10;j++) {
	if(arr[j]%2==0)
	{
		big=arr[j];
	}

}
for(j=0;j<10;j++) {
	if(big<arr[j])
	{
		big=arr[j];
	}
}
printf("Greatest even number is %d",big)

;return 0;}

