#include<stdio.h>
#include <stdlib.h>
#include<windows.h>

		struct Info{
		char name[20];
		int age;
		char choice;
		int num[10];
		char suc;
	};
void customerInfo();
void display();
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
	printf("\n\tEnter 10 - To select RECORDS");
	printf("\n\tEnter 11-To Exit\n");

	printf("\nEnter your choice:");
	scanf("%d",&ch);
	
	switch(ch){
		
		case 1:
			{
				printf("\nYou have choosed Hyundai Car\n");
				printf("\nSPECIFICATION :\n");
				printf("\n80kwh and 90kwh\n");
				printf("\n--------------------|--------------------------------------------------------");
				printf("\nRANGE :\t\t\t\t EPA: 139 mi 224 km \t EPA: 210 mi 340 km\n");
				printf("--------------------|--------------------------------------------------------");
				printf("\nMax. power, motor : \t\t 302 hp 285kw |\t 562 hp 285 kw\n");
				printf("--------------------|--------------------------------------------------------");
				printf("\nMax.power,battery :\t\t 265 hp 175kw |\t 902 hp 225 kw\n");
				printf("--------------------|--------------------------------------------------------\n");
				printf("\nAVAILABLE CAR: \n\n1.WB20A4896 \n\n2.WB50A4545\n\n3.WB20B4849");
				
				break;
			}
				case 2:
			{
				printf("\nYou have choosed Hyundai Car\n");
				printf("\nSPECIFICATION :\n");
				printf("\n80kwh and 90kwh\n");
				printf("\n--------------------|--------------------------------------------------------");
				printf("\nRANGE :\t\t\t\t EPA: 139 mi 224 km \t EPA: 210 mi 340 km\n");
				printf("--------------------|--------------------------------------------------------");
				printf("\nMax. power, motor : \t\t 302 hp 285kw |\t 562 hp 285 kw\n");
				printf("--------------------|--------------------------------------------------------");
				printf("\nMax.power,battery :\t\t 265 hp 175kw |\t 902 hp 225 kw\n");
				printf("--------------------|--------------------------------------------------------\n");
				printf("\nAVAILABLE CAR: \n\n1.WB20A4896 \n\n2.WB50A4545\n\n3.WB20B4849");
				
				break;
			}
				case 3:
			{
				printf("\nYou have choosed Hyundai Car\n");
				printf("\nSPECIFICATION :\n");
				printf("\n80kwh and 90kwh\n");
				printf("\n--------------------|--------------------------------------------------------");
				printf("\nRANGE :\t\t\t\t EPA: 139 mi 224 km \t EPA: 210 mi 340 km\n");
				printf("--------------------|--------------------------------------------------------");
				printf("\nMax. power, motor : \t\t 302 hp 285kw |\t 562 hp 285 kw\n");
				printf("--------------------|--------------------------------------------------------");
				printf("\nMax.power,battery :\t\t 265 hp 175kw |\t 902 hp 225 kw\n");
				printf("--------------------|--------------------------------------------------------\n");
				printf("\nAVAILABLE CAR: \n\n1.WB20A4896 \n\n2.WB50A4545\n\n3.WB20B4849");
				
				break;
			}
				case 4:
			{
				printf("\nYou have choosed Hyundai Car\n");
				printf("\nSPECIFICATION :\n");
				printf("\n80kwh and 90kwh\n");
				printf("\n--------------------|--------------------------------------------------------");
				printf("\nRANGE :\t\t\t\t EPA: 139 mi 224 km \t EPA: 210 mi 340 km\n");
				printf("--------------------|--------------------------------------------------------");
				printf("\nMax. power, motor : \t\t 302 hp 285kw |\t 562 hp 285 kw\n");
				printf("--------------------|--------------------------------------------------------");
				printf("\nMax.power,battery :\t\t 265 hp 175kw |\t 902 hp 225 kw\n");
				printf("--------------------|--------------------------------------------------------\n");
				printf("\nAVAILABLE CAR: \n\n1.WB20A4896 \n\n2.WB50A4545\n\n3.WB20B4849");
				
				break;
			}
				case 5:
			{
					printf("\nYou have choosed Hyundai Car\n");
				printf("\nSPECIFICATION :\n");
				printf("\n80kwh and 90kwh\n");
				printf("\n--------------------|--------------------------------------------------------");
				printf("\nRANGE :\t\t\t\t EPA: 139 mi 224 km \t EPA: 210 mi 340 km\n");
				printf("--------------------|--------------------------------------------------------");
				printf("\nMax. power, motor : \t\t 302 hp 285kw |\t 562 hp 285 kw\n");
				printf("--------------------|--------------------------------------------------------");
				printf("\nMax.power,battery :\t\t 265 hp 175kw |\t 902 hp 225 kw\n");
				printf("--------------------|--------------------------------------------------------\n");
				printf("\nAVAILABLE CAR: \n\n1.WB20A4896 \n\n2.WB50A4545\n\n3.WB20B4849");
				
				break;
			}
				case 6:
			{
				printf("\nYou have choosed Hyundai Car\n");
				printf("\nSPECIFICATION :\n");
				printf("\n80kwh and 90kwh\n");
				printf("\n--------------------|--------------------------------------------------------");
				printf("\nRANGE :\t\t\t\t EPA: 139 mi 224 km \t EPA: 210 mi 340 km\n");
				printf("--------------------|--------------------------------------------------------");
				printf("\nMax. power, motor : \t\t 302 hp 285kw |\t 562 hp 285 kw\n");
				printf("--------------------|--------------------------------------------------------");
				printf("\nMax.power,battery :\t\t 265 hp 175kw |\t 902 hp 225 kw\n");
				printf("--------------------|--------------------------------------------------------\n");
				printf("\nAVAILABLE CAR: \n\n1.WB20A4896 \n\n2.WB50A4545\n\n3.WB20B4849");
				
				break;
			}
				case 7:
			{
					printf("\nYou have choosed Hyundai Car\n");
				printf("\nSPECIFICATION :\n");
				printf("\n80kwh and 90kwh\n");
				printf("\n--------------------|--------------------------------------------------------");
				printf("\nRANGE :\t\t\t\t EPA: 139 mi 224 km \t EPA: 210 mi 340 km\n");
				printf("--------------------|--------------------------------------------------------");
				printf("\nMax. power, motor : \t\t 302 hp 285kw |\t 562 hp 285 kw\n");
				printf("--------------------|--------------------------------------------------------");
				printf("\nMax.power,battery :\t\t 265 hp 175kw |\t 902 hp 225 kw\n");
				printf("--------------------|--------------------------------------------------------\n");
				printf("\nAVAILABLE CAR: \n\n1.WB20A4896 \n\n2.WB50A4545\n\n3.WB20B4849");
				
				break;
			}
				case 8:
			{
				printf("\nYou have choosed Hyundai Car\n");
				printf("\nSPECIFICATION :\n");
				printf("\n80kwh and 90kwh\n");
				printf("\n--------------------|--------------------------------------------------------");
				printf("\nRANGE :\t\t\t\t EPA: 139 mi 224 km \t EPA: 210 mi 340 km\n");
				printf("--------------------|--------------------------------------------------------");
				printf("\nMax. power, motor : \t\t 302 hp 285kw |\t 562 hp 285 kw\n");
				printf("--------------------|--------------------------------------------------------");
				printf("\nMax.power,battery :\t\t 265 hp 175kw |\t 902 hp 225 kw\n");
				printf("--------------------|--------------------------------------------------------\n");
				printf("\nAVAILABLE CAR: \n\n1.WB20A4896 \n\n2.WB50A4545\n\n3.WB20B4849");
				
				break;
			}
				case 9:
			{
				printf("\nYou have choosed Hyundai Car\n");
				printf("\nSPECIFICATION :\n");
				printf("\n80kwh and 90kwh\n");
				printf("\n--------------------|--------------------------------------------------------");
				printf("\nRANGE :\t\t\t\t EPA: 139 mi 224 km \t EPA: 210 mi 340 km\n");
				printf("--------------------|--------------------------------------------------------");
				printf("\nMax. power, motor : \t\t 302 hp 285kw |\t 562 hp 285 kw\n");
				printf("--------------------|--------------------------------------------------------");
				printf("\nMax.power,battery :\t\t 265 hp 175kw |\t 902 hp 225 kw\n");
				printf("--------------------|--------------------------------------------------------\n");
				printf("\nAVAILABLE CAR: \n\n1.WB20A4896 \n\n2.WB50A4545\n\n3.WB20B4849");
				
				break;
			}
				case 10:
			{
				printf("\nYou have choosed Hyundai Car\n");
				printf("\nSPECIFICATION :\n");
				printf("\n80kwh and 90kwh\n");
				printf("\n--------------------|--------------------------------------------------------");
				printf("\nRANGE :\t\t\t\t EPA: 139 mi 224 km \t EPA: 210 mi 340 km\n");
				printf("--------------------|--------------------------------------------------------");
				printf("\nMax. power, motor : \t\t 302 hp 285kw |\t 562 hp 285 kw\n");
				printf("--------------------|--------------------------------------------------------");
				printf("\nMax.power,battery :\t\t 265 hp 175kw |\t 902 hp 225 kw\n");
				printf("--------------------|--------------------------------------------------------\n");
				printf("\nAVAILABLE CAR: \n\n1.WB20A4896 \n\n2.WB50A4545\n\n3.WB20B4849");
				
				break;
			}
			case 11:{
				   display();
				break;
			}
			case 12:
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

void display(){
	
	struct Info s;
	FILE *fp;
	printf("\nRECORD");
	fp=fopen("Record1.6.txt","r");
	fread(&s,sizeof(s),1,fp);
	printf("\nNAME:%s",s.name);
	printf("\nAGE:%d",s.age);
	printf("\nPHONE NUMBER:%d",s.num);
	printf("\nLICENSE:%s",s.choice);
	fread(&s,sizeof(s),1,fp);
	fclose(fp);
}


// Car Available Information (Section-II)
int carAv(int no ,int day){
	printf("\n------------------------------------------------------------");
	printf("\nPLEASE PROVIDE CAR INFORMATION\n");
	printf("\nENTER NUMBER OF RENTAL DAYS:");
	scanf("%d",&day);
	printf("\nPLEASE ENTER CAR NO :");
	scanf("%d",&no);
	printf("------------------------------------------------------------");
}

//Customer Information (Section III)

void customerInfo(){
	
	struct Info s;
	FILE *fp;
	printf("\nPLEASE PROVIDE SOME PERSONAL INFORMATION\n");
	
	printf("\nENTER YOUR NAME:");
	scanf("%s",s.name);
	printf("\nENTER YOUR AGE:");
	scanf("%d",&s.age);
	if(s.age>=18)
	{
		printf("\nWE ARE ALLOW TO RENT A CAR");
	}
	else {
		printf("\nWE ARE NOT ALLOW TO RENT A CAR BECAUSE YOU'R UNDER 18");	
		
		exit(0);
	}
	printf("\nENTER YOUR CORRECT PHONE NUMBER:");
	scanf("%d",&s.num);
	
	printf("\nYOU HAVE DRIVING LICENSE(Y/N):");
	scanf("%s",&s.choice);
	if(s.choice=='y'|| s.choice=='Y')
	{
		printf("\nALLOW");
	}
	else if(s.choice=='n'|| s.choice=='N')
	{
		printf("\nNOT ALLOW");
		exit(0);
	}
	
	fp= fopen("Record1.6.txt","a");
	fwrite(&s,sizeof(s),1,fp);
	fclose(fp);
	
	printf("\nYOUR ALL INFORMATION IS CORRECT(Y/N):");
	scanf("%s",&s.suc);
	if(s.suc=='y'||s.suc=='Y'){
		
		printf("\nYOUR RECORD STORED SUCCESSFULLY......");
	}
	else if(s.suc=='n'||s.suc=='N'){
		
		printf("\nYOUR RECORD NOT STORED SUCCESSFULLY....");
		
	}
	
}
	payOpt(int choice2,char payment){                  //SECTION IV
	
	printf("\n=======================================================");
		printf("\nPAYMENT OPTION");
		printf("\n1.CASH\n2.ONLINE");
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
				
				}
			printf("\nYOUR PAYMENT IS DONE(Y/N):");
			scanf("%s",&payment);
			
			if(payment=='y'|| payment=='Y'){
				
				
				printf("\nYOUR PAYMENT ARE SUCESSFULLY DONE.. ");
			}
			else{
				
				printf("\nYOUR PAYMENT ARE FAIL...TRY AGAIN");
			}
				
	}
	}
int main()
{
		system("COLOR 02");
	int ch,no,day,age,num[10],found=0,pass,choice2;
	char name[20],choice,suc,n[10],payment;
	
	loginIn(name,pass); //Function information about login (section 0)
	
	while(1){
	printf("\n==========================================================");
	printf("\n\t\t NEXTGEN VEHICLE RENTAL SYSTEM");
	
	printf("\n\tWELCOME TO OUR COMPANY  CHOOSE FROM THE MENU :");
	
	printf("\n==========================================================");
	
	carName(ch); //Function section I
	carAv(no,day); //function section II
	
	customerInfo();//function section III

	payOpt(choice2,payment);//section IV
}


	return 0;
}
