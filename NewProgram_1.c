
#include<stdio.h>
#include<math.h>
void Calculator();
void UnitChanger();
void Quadrato();
void SInterest();

int main()
{   char command1;
	int Password;
	printf("Enter your password:-");
	scanf("%d",&Password);
	if(Password==825301){

    printf("Enter command:-\n");
    scanf("%c",&command1);
    if(command1=='C')
    {   Calculator();
        printf("Done Successfully\n");
    }
   else if(command1=='U') {
        UnitChanger();
        printf("Done ✅ Successfully\n");
    }
      else if(command1=='Q') {
        Quadrato();
        printf("Done ✅ Successfully\n");}
    else if(command1=='S'){
    	printf("Welcome to Simple interest and amount calculator\n");
    	SInterest();
    	printf("Process executed successfully\n");
	}

 else{
        printf("Not found!!");
    }
return 0;
}

void Calculator(){
    int a,b,opr;
    printf("Enter num1:-");
    scanf("%d",&a);
    printf("Enter num2:-");
    scanf("%d",&b);
    printf("Enter operation code:");
    scanf("%d",&opr);
    switch (opr) {
    case 1:
        printf("Sum is %d\n",a+b);
        break;
    case 2:
        printf("Difference is %d\n",a-b);
        break;
    case 3:
        printf("Product is %d\n",a*b);
        break;
    case 4:
        printf("Quotient is %d\t",a/b);
        break;
    case 5:
        printf("Remainder is %d\n",a%b);
        break;
    case 6:
        printf("Exponentially is %d\n",pow(a,b));
        break;
    default:
        printf("No operators found\n");
    }

}
void UnitChanger(){
    float cm,m;
    printf("Welcome To Unit Changer \n");
    printf("Enter the number in cm=  ",cm);//cm is mean to centimetre
    scanf("%f",&cm);
    m=cm/100;//appying formula
    printf("The number in m= %f m\n",m);//m is mean to metre
}
void Quadrato(){
		float a,b,c,D,x,y;
	printf("Enter the coefficient of x^2,x and constant terms:");
	scanf("%f %f %f",&a,&b,&c);//Entering data in variab;es

	if(a==0){
		printf("Invalifd equation!!!\n");

	}
	else{
		D=b*b-4*a*c;

		if(D>0){
			printf("The roots are equal and real\n");
			x=(-b-sqrt(D))/2*a;
			y=(-b+sqrt(D))/2*a;
			printf("Value of x and y are %f %f\n",x,y);		}
		else if(D==0){
				printf("Rots are real and equal \n");
				x=(-b-sqrt(D))/2*a;
			y=(-b+sqrt(D))/2*a;
			printf("Value of x and y are %f %f\n",x,y);

			}
		else{
				printf("No solution found!!\n");
			}
			}
}






