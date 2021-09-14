#include <stdio.h>
#include "appsMenu.h"

int appReceipt ()

{
	int select6;
	printf("----SIPARIS MENU----\n");
	printf("1 ->CIKIS\n");
	printf("SECIM:");
	scanf("%d",&select6);
	
	switch(select6)
	{
		case 1:
		system("cls") ;
		appsMenu(); 
		break;
	}
	
}
