#include <stdio.h>
#include "appsMenu.h"

int appOrderMenu ()

{
	int select7;
	printf("----SIPARIS MENU----\n");
	printf("1 ->CIKIS\n");
	printf("SECIM:");
	scanf("%d",&select7);
	
	switch(select7)
	{
		case 1:
		system("cls") ;
		appsMenu(); 
		break;
	}
	
}
