#include<stdio.h>
#include<string.h>
int main(){
	int i,c=0,d=0,p; //declaration
	char word[20];
	
	printf("Enter your word-");
	scanf("%s",&word);// Entering word
	
	p=strlen(word);
	printf("%d",p);
	
	//condition starts here
	for(i=0;i<=p+1;i++) {
		if(word[i]!="z" || word[i]!="Z" || word[i]!="O" || word[i]!="o"){
	printf("\nEnter carefully");
	break;
		if(word[i]=="Z" || word[i]=="z")
		{
			c+=1;
		}
		if(word[i]=="O" || word[i]=="o")
		{
			d+=1;
		}
		
}
}
if(2*c==d)
{
	printf("\nYes");
}

else{
	printf("\nNo");
}

return 0;}

