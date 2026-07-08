#include<stdio.h>
int main()
{
	int n=1,i,F_constant[85];
	
	for(i=0;i<n;i++){
		F_constant[n]=F_constant[n-i]+F_constant[n-i-1];
	printf("Value of series is %d\n",F_constant[n]);	
	}
	
	
	//series[1]=series[n-1]
	
	
	
	
	
	
	
	
	
	return 0;
}

