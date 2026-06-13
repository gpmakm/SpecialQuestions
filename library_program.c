#include<stdio.h>
#include<string.h>
char username[20];
char studname[25];
int book;
int sem,i,k,a,b,c,d,e,f,g,h,i;

struct Branch{
	//code for books
	int bookACode,bookBCode,bookCCode,booDCode,bookECode,bookFCode,
	bookGCode,bookHCode,bookICode,bookJCode;

	//to store quantity of books
	int Phy1,Phy2,Maths1,Maths2,Chem,ComSkill,FEEE,ITS,EG,EM;
	
	int dm,wt,coa,dem,cptc;

	//to store book names
	char bookA[25],bookB[25],bookC[25],bookD[25],bookE[25],
	bookF[25],bookG[25],bookH[25],bookI[25],bookJ[25];

	//to store author names
	char writter1[25],writter2[25],writter3[25],writter4[25],writter5[25],
	writter6[25],writter7[25],writter8[25],writter9[25],writter10[25];
};
int main()
{   //void sem;
	 //line();

	//

	printf("GOVERNMENT POLYTECHNIC MUZAFFARPUR\n");
	star();
	printf("\n\nDepartment:-Library\n");


	printf("\nEnter username or librarian name: ");
	scanf("%s",&username);

	Data_Stud();
	printf("Enter your semester: ");
	scanf("%d",&sem);
	//endli();

switch(sem){
	case 1: Year_1();
	break;
	case 2: Year_1();
	break;
	case 3: cse3rsem();
	break;
}
	//endl();
	//Year_1();
	seek();

	if(book==2001101||book==2001102||book==2001103||book==2001104||book==
	2001105){
		if(book==2001101)
		{
		a-=1;;
			print("%d\n",a);
		}

		printf("Book is available!");
	}

  else{
	printf("**Check your book name,this book is unavailable**\n\n ");
   }

	receipt();





return 0;
}

//void star()
//{
//
//	for(i=0;i<=0;i++)
//	{
//		for(k=0;k<=167;k++)
//		{
//			printf("*");
//		}
//		printf("\n");
//	}
//}

void data_Stud()
{    char studname[30];

	printf("Enter the student name: ");
	scanf("%s",&studname);


}
void Seek()
{    //char book[25];
	printf("Enter your book name:");
	scanf("%d",&book);


}

int Year_1()// Function of strucure to store data i.e books name, quantity,etc.
{
	struct Branch Gen;//Starting data entry
	strcpy(Gen.bookA,"Applied Physics1");
	strcpy(Gen.bookB,"Applied Physics2");
	strcpy(Gen.bookC,"Applied Chemistry");
	strcpy(Gen.bookD,"Applied Mathematics1");
	strcpy(Gen.bookE,"Applied Mathematics2");
	strcpy(Gen.bookF,"FEEE");
	strcpy(Gen.bookG,"IT System");
	strcpy(Gen.bookH,"Engineering Graphics");
	strcpy(Gen.bookI,"Engineering Mechanics");
	strcpy(Gen.bookJ,"Communication Skills");

	a=Gen.Phy1=60;
	b=Gen.Phy2=60;
	c=Gen.Maths1=60;
	d=Gen.Maths2=65;
	e=Gen.ITS=25;
	f=Gen.EG=22;
	g=Gen.EM=80;
	h=Gen.Chem=47;
	i=Gen.FEEE=54;
	g=Gen.ComSkill=15;
	printf("\nBook Name\t\tAvailable books");
	printf("\n%s \t%d\n",Gen.bookA,Gen.Phy1);
	printf("\n%s \t%d\n",Gen.bookB,Gen.Phy2);
	printf("\n%s \t%d\n",Gen.bookC,Gen.Chem);
	printf("\n%s \t%d\n",Gen.bookD,Gen.Maths1);
	printf("\n%s \t%d\n",Gen.bookE,Gen.Maths2);
	printf("\n%s \t\t\t%d\n",Gen.bookF,Gen.FEEE);
	printf("\n%s \t\t%d\n",Gen.bookG,Gen.ITS);
	printf("\n%s \t%d\n",Gen.bookH,Gen.EM);
	printf("\n%s \t%d\n",Gen.bookI,Gen.EG);
	printf("\n%s \t%d\n\n",Gen.bookJ,Gen.ComSkill);
}
void Receipt()
{
	//char username[25],studname[25],book[25];
	printf("Book taken by %s \nin the presence of %s and the book was %s\n",
	studname,username,book);
}
int cse3rsem()
{
	struct Branch cse3;
	strcpy(cse3.bookA,"Computer Organization & Architecture");
	strcpy(cse3.bookB,"Digital Electronics & Microprocessor");
	strcpy(cse3.bookC,"Discrete Mathematics");
	strcpy(cse3.bookD,"Web Technology");
	strcpy(cse3.bookE,"C Programming");
	
	a=cse3.wt=100;
	b=cse3.coa=100;
	c=cse3.cptc=100;
	cse3.dem=100;
	cse3.dm=100;
	
printf("%s\t\t %d\n ",cse3.bookA,cse3.coa);
printf("%s\t\t%d\n",cse3.bookB,cse3.dem);
printf("%s\t\t%d\n",cse3.bookC,cse3.dm);
printf("%s\t\t%d\n",cse3.bookD,cse3.wt);
printf("%s\t\t%d\n",cse3.bookE,cse3.cptc);
return 0;

}

