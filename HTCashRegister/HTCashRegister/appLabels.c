#include <stdio.h>
#include "appsMenu.h"

    int no, pasword[4], control1,control2,control3,control4,control5;
    int newPasword[4];
	int cashierPasword1[4]={1111};
	int cashierPasword2[4]={2222};
	int cashierPasword3[4]={3333};
	int cashierPasword4[4]={4444};
	int cashierPasword5[4]={5555};
	

	
	
int appLabels ()
{
	
	printf("KASIYER NO:");
    scanf("%d",&no);
	system("cls");
	printf("SIFRE:");
	scanf("%d",&pasword);
	control1=strcmp(cashierPasword1,pasword);
	control2=strcmp(cashierPasword2,pasword);
	control3=strcmp(cashierPasword3,pasword);
	control4=strcmp(cashierPasword4,pasword);
	control5=strcmp(cashierPasword5,pasword);
	

	if(control1==0 && no==1)
	{
		printf("KASIYER:%d\n",no);
		system("cls");
		appsMenu();
		
	}
	if(control2==0 && no==2)
	{
		printf("KASIYER:%d\n",no);
		system("cls");
		appsMenu();
		
	}
	if(control3==0 && no==3)
	{
		printf("KASIYER:%d\n",no);
		system("cls");
		appsMenu();
		
	}
	if(control4==0 && no==4)
	{
		printf("KASIYER:%d\n",no);
		system("cls");
		appsMenu();
		
	}
	if(control5==0 && no==5)
	{
		printf("KASIYER:%d\n",no);
		system("cls");
		appsMenu();
		
	}
		else
	{
		printf("Pasword incorrect");
		sleep(2);
		system("cls");
     	appLabels ();
     	
		
	}
	



	return 0;
}

int cashierId()
{
	appLabels();
}

int cashierPasword()
{
	
	if(no==1)
	{
	
    printf("KASIYER NO:%d\n",no);
	printf("SIFRE:");
	scanf("%d",&pasword);
	if(control1==0)
	{
	printf("YENI SIFRE:");
	scanf("%d",&newPasword);
	system("cls");
	appsMenu();
	}

		
	}

		
	
	
}

