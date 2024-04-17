#include<stdio.h>
#include <stdlib.h>
//Section login 
loginIn(char n[10],int pass){
	
	printf("\n\t\tLOGIN");
	printf("\n=========================================");
	printf("\nEnter username:");
	scanf("%s",n);
	printf("\nEnter password:");
	scanf("%d",&pass);
	if(pass==1234||pass==4321){
		printf("\nLOGIN SUCESSFULLY.....");
	}
	else{
		
		printf("\nWRONG PASSWORD....");
		loginIn(n,pass);
	}
}
// Car Information (Section-I) 

int carName(int ch){
	printf("\n\tEnter 1 - To select Hyundai");
	printf("\n\tEnter 2 - To select BMW");
	printf("\n\tEnter 3 - To select Mercedes");
	printf("\n\tEnter 4 - To select Audi");
	printf("\n\tEnter 5 - To select Tesla");
	printf("\n\tEnter 6 - To select Skoda");
	printf("\n\tEnter 7 - To select Volkswagun");
	printf("\n\tEnter 8 - To select Toyota");
	printf("\n\tEnter 9 - To select Ford");
	printf("\n\tEnter 10 - To select Volvo");
	printf("\n\tEnter 11-To Exit\n");

	printf("\nEnter your choice:");
	scanf("%d",&ch);
	
	switch(ch){
		
		case 1:
			{
				printf("\nYou have choosed Hyundai Car\n");
				printf("\nSPECIFICATION :\n");
				printf("\n80kwh and 90kwh \t\nRANGE \t\t\t\t EPA: 139 mi 224 km \t EPA: 210 mi 340 km");
				printf("\n----------------------------------------------------------------------------");
				printf("\nMax. power, motor \t\t 302 hp 285kw \t 562 hp 285 kw");
				printf("\nMax.power,battery \t\t 265 hp 175kw \t 902 hp 225 kw\n");
				printf("\nAvaible car: \n\n1.WB20A4896 \n\n2.WB50A4545\n\n3.WB20B4849");
				printf("\n-----------------------------*-");
				break;
			}
				case 2:
			{
				printf("\nYou have choosed BMW Car\n");
				printf("\nSpecification :\n");
				printf("\n80kwh and 90kwh \t\nRange \t\t\t\t EPA: 139 mi 224 km \t EPA: 210 mi 340 km");
				printf("\nMax. power, motor \t\t 302 hp 285kw \t 562 hp 285 kw");
				printf("\nMax.power,battery \t\t 265 hp 175kw \t 902 hp 225 kw");
					printf("\nAvaible car: \n\n1.WB20A4896 \n\n2.WB50A4545\n\n3.WB20B4849");
				printf("\n-----------------------------*-");
				break;
			}
				case 3:
			{
				printf("\nYou have choosed Mercedes Car\n");
				printf("\nSpecification :\n");
				printf("\n80kwh and 90kwh \t\nRange \t\t\t\t EPA: 139 mi 224 km \t EPA: 210 mi 340 km");
				printf("\nMax. power, motor \t\t 302 hp 285kw \t 562 hp 285 kw");
				printf("\nMax.power,battery \t\t 265 hp 175kw \t 902 hp 225 kw");
				printf("\nAvaible car: \n\n1.WB20A4896 \n\n2.WB50A4545\n\n3.WB20B4849");
				printf("\n-----------------------------*-");
				break;
			}
				case 4:
			{
				printf("\nYou have choosed Audi Car\n");
				printf("\nSpecification :\n");
				printf("\n80kwh and 90kwh \t\nRange \t\t\t\t EPA: 139 mi 224 km \t EPA: 210 mi 340 km");
				printf("\nMax. power, motor \t\t 302 hp 285kw \t 562 hp 285 kw");
				printf("\nMax.power,battery \t\t 265 hp 175kw \t 902 hp 225 kw");
					printf("\nAvaible car: \n\n1.WB20A4896 \n\n2.WB50A4545\n\n3.WB20B4849");
				printf("\n-----------------------------*-");
				break;
			}
				case 5:
			{
				printf("\nYou have choosed Tesla Car\n");
				printf("\nSpecification :\n");
				printf("\n80kwh and 90kwh \t\nRange \t\t\t\t EPA: 139 mi 224 km \t EPA: 210 mi 340 km");
				printf("\nMax. power, motor \t\t 302 hp 285kw \t 562 hp 285 kw");
				printf("\nMax.power,battery \t\t 265 hp 175kw \t 902 hp 225 kw");
					printf("\nAvaible car: \n\n1.WB20A4896 \n\n2.WB50A4545\n\n3.WB20B4849");
				printf("\n-----------------------------*-");
				break;
			}
				case 6:
			{
				printf("\nYou have choosed Skoda Car\n");
				printf("\nSpecification :\n");
				printf("\n80kwh and 90kwh \t\nRange \t\t\t\t EPA: 139 mi 224 km \t EPA: 210 mi 340 km");
				printf("\nMax. power, motor \t\t 302 hp 285kw \t 562 hp 285 kw");
				printf("\nMax.power,battery \t\t 265 hp 175kw \t 902 hp 225 kw");
				printf("\nAvaible car: \n\n1.WB20A4896 \n\n2.WB50A4545\n\n3.WB20B4849");
				printf("\n-----------------------------*-");
				break;
			}
				case 7:
			{
				printf("\nYou have choosed Volkswagun Car\n");
				printf("\nSpecification :\n");
				printf("\n80kwh and 90kwh \t\nRange \t\t\t\t EPA: 139 mi 224 km \t EPA: 210 mi 340 km");
				printf("\nMax. power, motor \t\t 302 hp 285kw \t 562 hp 285 kw");
				printf("\nMax.power,battery \t\t 265 hp 175kw \t 902 hp 225 kw");
				printf("\nAvaible car: \n\n1.WB20A4896 \n\n2.WB50A4545\n\n3.WB20B4849");
				printf("\n-----------------------------*-");
				break;
			}
				case 8:
			{
				printf("\nYou have choosed Toyota Car\n");
				printf("\nSpecification :\n");
				printf("\n80kwh and 90kwh \t\nRange \t\t\t\t EPA: 139 mi 224 km \t EPA: 210 mi 340 km");
				printf("\nMax. power, motor \t\t 302 hp 285kw \t 562 hp 285 kw");
				printf("\nMax.power,battery \t\t 265 hp 175kw \t 902 hp 225 kw");
					printf("\nAvaible car: \n\n1.WB20A4896 \n\n2.WB50A4545\n\n3.WB20B4849");
				printf("\n-----------------------------*-");
				break;
			}
				case 9:
			{
				printf("\nYou have choosed Ford Car\n");
				printf("\nSpecification :\n");
				printf("\n80kwh and 90kwh \t\nRange \t\t\t\t EPA: 139 mi 224 km \t EPA: 210 mi 340 km");
				printf("\nMax. power, motor \t\t 302 hp 285kw \t 562 hp 285 kw");
				printf("\nMax.power,battery \t\t 265 hp 175kw \t 902 hp 225 kw");
				printf("\nAvaible car: \n\n1.WB20A4896 \n\n2.WB50A4545\n\n3.WB20B4849");
				printf("\n-----------------------------*-");
				break;
			}
				case 10:
			{
				printf("\nYou have choosed Volvo Car\n");
				printf("\nSpecification :\n");
				printf("\n80kwh and 90kwh \t\nRange \t\t\t\t EPA: 139 mi 224 km \t EPA: 210 mi 340 km");
				printf("\nMax. power, motor \t\t 302 hp 285kw \t 562 hp 285 kw");
				printf("\nMax.power,battery \t\t 265 hp 175kw \t 902 hp 225 kw");
				printf("\nAvaible car: \n\n1.WB20A4896 \n\n2.WB50A4545\n\n3.WB20B4849");
				printf("\n-----------------------------*-");
				break;
			}
			case 11:
				{
					exit(0);
				}
			
				default :
				{
					printf("\nEnter Correct Choice");
					break;
				}
	}

}


// Car Available Information (Section-II)
int carAv(int no ,int day){
	printf("\nPlease provide Car information\n");
	 printf("\nEnter number of rental days:");
	 scanf("%d",&day);
	 printf("\nPlease Enter car no :");
	 scanf("%d",&no);
	 printf("------------------------------------------------------------");
}

//Customer Information (Section III)

int customerInfo(char name[20],int age,char choice,int num[10],char suc){
	printf("\nPlease provide some personal Information\n");
	
	printf("\nENTER YOUR NAME:");
	scanf("%s",name);
	printf("\nENTER YOUR AGE:");
	scanf("%d",&age);
	if(age>=18)
	{
		printf("\nWe are allow to rent a car");
	}
	else {
		printf("\nWe are not allow to rent a car because you'r under 18");	
		
		exit(0);
	}
	printf("\nYou have driving license(Y/N):");
	scanf("%s",&choice);
	if(choice=='y'|| choice=='Y')
	{
		printf("\nALLOW");
	}
	else if(choice=='n'|| choice=='N')
	{
		printf("\nNOT ALLOW");
		exit(0);
	}
	printf("\nEnter your correct phone number:");
	scanf("%d",&num);
	
	printf("\nYOUR ALL INFORMATION IS CORRECT(Y/N):");
	scanf("%s",&suc);
	if(suc=='y'||suc=='Y'){
		
		printf("\nYOUR RECORD STORED SUCCESSFULLY......");
	}
	else if(choice=='n'||choice=='N'){
		
		printf("\nYOUR RECORD NOT STORED SUCCESSFULLY....");
		
	}
}
	payOpt(int choice2){                  //SECTION IV
	
	printf("\n=======================================================");
		printf("\nPAYMENT OPTION");
		printf("\n1.CASH\n 2.ONLINE");
		printf("\nENTER YOUR CHOICE");
		scanf("%d",&choice2);
		switch(choice2)
		{
			case 1:
				{
					printf("\nYOUR PAYMENT ARE SUCESSFULLY DONE...");
				}
			case 2:
				{
					printf("\nUPI:-PAKHAREINDRA@IBL");
					printf("\nUPI PHONE NUMBER:-9921997659");
					printf("\nYOUR PAYMENT ARE SUCESSFULLY DONE...");
				}
			
				
	}
	}
int main()
{
	int ch,no,day,age,num[10],found=0,pass,choice2;
	char name[20],choice,suc,n[10];
	
	loginIn(name,pass); //Function information about login (section 0)
	
	while(1){
	printf("\n==========================================================");
	printf("\n\t\t NEXTGEN WHELLES RENTAL SYSTEM");
	
	printf("\n\tWelcome to our company, choose from the menu :");
	
	printf("\n==========================================================");
	
	carName(ch); //Function section I
	carAv(no,day); //function section II
	customerInfo(name,age,choice,num,suc);//function section III

	payOpt(choice2);//section IV
}


	return 0;
}
