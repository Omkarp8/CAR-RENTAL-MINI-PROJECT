#include<stdio.h>
#include <stdlib.h>
#include<windows.h>

		struct Info{
		char name[20];
		int age;
		char choice;
		int long num[10];
		char suc;
	};
void customerInfo();
void display();
void billingOpt();


//Section login 
void loginIn(char n[10],int pass){
	
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
	printf("\n\tEnter 11 - To select RECORDS");
	printf("\n\tEnter 12-To Exit\n");

	printf("\nEnter your choice:");
	scanf("%d",&ch);
	
	switch(ch){
		
		case 1:
			{
				printf("\nYou have choosed Hyundai Car\n");
				printf("\nSPECIFICATION :\n");
				printf("\n80kwh and 98kwh\n");
				printf("\n--------------------|");
				printf("\nRANGE :\t\t\t\t \nEPA: \n139 mi 224 km \t \nEPA: 210 mi 340 km\n");
				printf("--------------------|");
				printf("\nMax. power, motor : \t\t \n302 hp 285kw |\t \n562 hp 285 kw\n");
				printf("--------------------|");
				printf("\nMax.power,battery :\t\t \n265 hp 175kw |\t \n902 hp 225 kw\n");
				printf("--------------------|\n");
				printf("\nAVAILABLE CAR: \n\n1.WB20A4896 \n\n2.WB50A4545\n\n3.WB20B4849");
				
				break;
			}
				case 2:
			{
				printf("\nYou have choosed BMW Car\n");
				printf("\nSPECIFICATION :\n");
				printf("\n40kwh and 210kwh\n");
				printf("\n--------------------|");
				printf("\nRANGE :\t\t\t\t \nEPA: \n239 mi 222 km \t \nEPA: 232 mi 344 km\n");
				printf("--------------------|");
				printf("\nMax. power, motor : \t\t \n102 hp 282kw |\t \n562 hp 284 kw\n");
				printf("--------------------|");
				printf("\nMax.power,battery :\t\t \n265 hpn 125kw |\t \n902 hp 222 kw\n");
				printf("--------------------| \n");
				printf("\nAVAILABLE CAR: \n\n1.WB20A4896 \n\n2.WB50A4545\n\n3.WB20B4849");
				
				break;
			}
				case 3:
			{
				printf("\nYou have choosed Mercedes Car\n");
				printf("\nSPECIFICATION :\n");
				printf("\n60kwh and 210kwh\n");
				printf("\n--------------------|");
				printf("\nRANGE :\t\t\t\t \nEPA: \n239 mi 245 km \t \nEPA: 210 mi 340 km\n");
				printf("--------------------|");
				printf("\nMax. power, motor : \t\t \n302 hp 285kw |\t \n562 hp 285 kw\n");
				printf("--------------------|");
				printf("\nMax.power,battery :\t\t \n265 hp 215kw |\t \n902 hp 225 kw\n");
				printf("--------------------|");
				printf("\nAVAILABLE CAR: \n\n1.WB20A4896 \n\n2.WB50A4545\n\n3.WB20B4849");
				
				break;
			}
				case 4:
			{
				printf("\nYou have choosed Audi Car\n");
				printf("\nSPECIFICATION :\n");
				printf("\n60kwh and 320kwh\n");
				printf("\n--------------------|");
				printf("\nRANGE :\t\t\t\t \nEPA: 139 mi 324 km \t \nEPA: 210 mi 340 km\n");
				printf("--------------------|");
				printf("\nMax. power, motor : \t\t \n302 hp 285kw |\t \n562 hp 285 kw\n");
				printf("--------------------|");
				printf("\nMax.power,battery :\t\t \n265 hp 175kw |\t \n902 hp 225 kw\n");
				printf("--------------------|\n");
				printf("\nAVAILABLE CAR: \n\n1.WB20A4896 \n\n2.WB50A4545\n\n3.WB20B4849");
				
				break;
			}
				case 5:
			{
					printf("\nYou have choosed Tesla Car\n");
				printf("\nSPECIFICATION :\n");
				printf("\n86kwh and 520kwh\n");
				printf("\n--------------------|");
				printf("\nRANGE :\t\t\t\t \nEPA: 139 mi 224 km \t \nEPA: 210 mi 340 km\n");
				printf("--------------------|");
				printf("\nMax. power, motor : \t\t \n302 hp 285kw |\t \n562 hp 285 kw\n");
				printf("--------------------|");
				printf("\nMax.power,battery :\t\t \n265 hp 175kw |\t \n902 hp 225 kw\n");
				printf("--------------------|\n");
				printf("\nAVAILABLE CAR: \n\n1.WB20A4896 \n\n2.WB50A4545\n\n3.WB20B4849");
				
				break;
			}
				case 6:
			{
				printf("\nYou have choosed Skoda Car\n");
				printf("\nSPECIFICATION :\n");
				printf("\n200kwh and 640kwh\n");
				printf("\n--------------------|");
				printf("\nRANGE :\t\t\t\t \nEPA: 139 mi 224 km \t \nEPA: 210 mi 340 km\n");
				printf("--------------------| ");
				printf("\nMax. power, motor : \t\t \n302 hp 285kw |\t \n562 hp 285 kw\n");
				printf("--------------------| ");
				printf("\nMax.power,battery :\t\t \n265 hp 175kw |\t \n902 hp 225 kw\n");
				printf("--------------------| \n");
				printf("\nAVAILABLE CAR: \n\n1.WB20A4896 \n\n2.WB50A4545\n\n3.WB20B4849");
				
				break;
			}
				case 7:
			{
					printf("\nYou have choosed Volkswagun Car\n");
				printf("\nSPECIFICATION :\n");
				printf("\n540kwh and 54kwh\n");
				printf("\n--------------------| ");
				printf("\nRANGE :\t\t\t\t \nEPA: 139 mi 224 km \t \nEPA: 210 mi 340 km\n");
				printf("--------------------| ");
				printf("\nMax. power, motor : \t\t \n302 hp 285kw |\t \n562 hp 285 kw\n");
				printf("--------------------| ");
				printf("\nMax.power,battery :\t\t \n265 hp 175kw |\t \n902 hp 225 kw\n");
				printf("--------------------| \n");
				printf("\nAVAILABLE CAR: \n\n1.WB20A4896 \n\n2.WB50A4545\n\n3.WB20B4849");
				
				break;
			}
				case 8:
			{
				printf("\nYou have choosed Toyota Car\n");
				printf("\nSPECIFICATION :\n");
				printf("\n70kwh and 57kwh\n");
				printf("\n--------------------| ");
				printf("\nRANGE :\t\t\t\t \nEPA: 139 mi 224 km \t \nEPA: 210 mi 340 km\n");
				printf("--------------------| ");
				printf("\nMax. power, motor : \t\t \n302 hp 245kw |\t \n262 hp 282 kw\n");
				printf("--------------------| ");
				printf("\nMax.power,battery :\t\t \n265 hp 125kw |\t \n902 hp 245 kw\n");
				printf("--------------------| \n");
				printf("\nAVAILABLE CAR: \n\n1.WB20A4226 \n\n2.WB50A.245\n\n3.WB20B4.29");
				
				break;
			}
				case 9:
			{
				printf("\nYou have choosed Ford Car\n");
				printf("\nSPECIFICATION :\n");
				printf("\n67kwh and 50kwh\n");
				printf("\n--------------------| ");
				printf("\nRANGE :\t\t\t\t \nEPA: 139 mi 224 km \t \nEPA: 210 mi 340 km\n");
				printf("--------------------| ");
				printf("\nMax. power, motor : \t\t \n302 hp 485kw |\t \n562 hp 282 kw\n");
				printf("--------------------| ");
				printf("\nMax.power,battery :\t\t \n265 hp 175kw |\t \n902 hp 225 kw\n");
				printf("--------------------| \n");
				printf("\nAVAILABLE CAR: \n\n1.WB20A4355 \n\n2.WB50A4545\n\n3.WB20B4835");
				
				break;
			}
				case 10:
			{
				printf("\nYou have choosed Volvo Car\n");
				printf("\nSPECIFICATION :\n");
				printf("\n86kwh and 54kwh\n");
				printf("\n--------------------| ");
				printf("\nRANGE :\t\t\t\t \nEPA: 239 mi 224 km \t \nEPA: 212 mi 340 km\n");
				printf("--------------------| ");
				printf("\nMax. power, motor : \t\t \n302 hp 245kw |\t \n562 hp 285 kw\n");
				printf("--------------------| ");
				printf("\nMax.power,battery :\t\t \n265 hp 174kw |\t \n902 hp 225 kw\n");
				printf("--------------------| \n");
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
void display(){       //display data section 
	
	struct Info s;
	FILE *fp;
	printf("\n=============================================================================");
	printf("\n\t\t\t***********RECORD*************");
	printf("\n=============================================================================");
	fp=fopen("Record1.9.txt","r");
	fread(&s,sizeof(s),1,fp);
	printf("\nNAME:%s",s.name);
	printf("\nAGE:%d",s.age);
	printf("\nPHONE NUMBER:%ld",s.num);
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
	scanf("%ld",&s.num);
	
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
	
	fp= fopen("Record1.9.txt","a");
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
	printf("\n-----------------------------------------------------------------\n\n");
}
void billingOpt(){

        struct Info a;
		printf("\n\t\t//////////////////////////////////////////////////////////////////");
		printf("\n\t\t\t\tNEXTGEN VEHICLE RENTAL BILL");
		printf("\n\t\t//////////////////////////////////////////////////////////////////");
        printf("\n\t\t|CUSTOMER NAME:---------------------------------|%s",a.name);
        printf("\n\t\t|CUSTOMER AGE :---------------------------------|%d",a.age);
//        printf("\nCUSTOMER PHONE NUMBER:-------------------------|%ld",a.num);
        printf("\n\t\t|CHARGES OF CAR:--------------------------------|3000INR");
        printf("\n\t\t|TAX GST:---------------------------------------|15 PER");
        printf("\n\t\t___________________________________________________________");
        printf("\n\t\t|TOTAL RENTAL AMOUNT IS:------------------------|INR 3450");
        printf("\n\t\t____________________________________________________________");
        printf("\n\t\tTHANK YOU FROM ALL NEXTGEN VEHICLE.........");
        printf("\n\t\t\t\tVISIT AGAIN........");
	}


	void payOpt(int choice2,char payment){                  //SECTION IV
	
	printf("\n=======================================================");
		printf("\nPAYMENT OPTION");
		printf("\n1.CASH\n2.ONLINE");
		printf("\nENTER YOUR CHOICE:");
		scanf("%d",&choice2);
		switch(choice2)
		{
			case 1:
				{
					printf("\nYOUR PAYMENT ARE SUCESSFULLY DONE...");
					printf("\nTHANK YOU..");
					break;
				}
			case 2:
				{
					printf("\nUPI:-NEXTGENVEHICLE@IBL");
					printf("\nUPI PHONE NUMBER:-9921997659");
								
				}
			printf("\nYOUR PAYMENT IS DONE(Y/N):");
			scanf("%s",&payment);
			
			if(payment=='y'|| payment=='Y'){
				
				
				printf("\nYOUR PAYMENT ARE SUCESSFULLY DONE.. ");
				printf("\nTHANK YOU..");
			}
			else{
				
				printf("\nYOUR PAYMENT ARE FAIL...TRY AGAIN");
			}
				
	}
    }
	

int main()
{
		system("COLOR 0B");
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
	
	billingOpt();
    
	payOpt(choice2,payment);//section IV
	
//	billingOpt();
}
return 0;
}
