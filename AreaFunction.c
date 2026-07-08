#include<stdio.h>
#include<math.h>
float AreaRectangle();
float AreaSquare();
void Nline();

void main(){
//AreaSquare();
Nline();
//AreaRectangle();	
}
float AreaSquare(){
	float side,area;
printf("Enter side of square:-");
scanf("%f\n",&side);
area=pow(side,2);
printf("Area of square will be:%f\n",area);
printf("Well thanks for using\n");
	
}

void Nline(){
	int i,j;
	for(i=0;i<2;i++){
		for(j=0;j<25;j++){
			printf("_");
		}
		printf("\n");
	}
}
