#include<stdio.h>
#include<math.h>
int main(){
	float SI,P,R,T,A;
	char need;
	SI=(P*R*T)/100;
	A=P+SI;
	
	printf("Enter the Pricipal ,Rate of interest ,Time:-");
	scanf("%f%f%F",&P,&R,&T);
	printf("SI is %f",SI);
	printf("Amount is %f",A);
	
	printf("What do you need Simple Interest or Amount?");
	scanf("%c",&need);
	
	if(need=='d'){
		printf("Simple interest is Rupees:",SI);
	}
	else if(need=='p'){
		printf("Amount is %f+%f=%f",A);
	}
	else if(need=='k'){
		printf("Simple Interest is %f \n A is %f",SI,A);
	}
	else{printf("No match found!!");
	}
	
	return 0;
	}
