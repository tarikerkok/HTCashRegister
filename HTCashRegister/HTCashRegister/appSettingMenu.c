#include <stdio.h>
#include "appsMenu.h"

int appSettingMenu ()

{
	int select1;
	printf("----AYARLAR----\n");
	printf("1 ->CIKIS\n");
	printf("SECIM:");
	scanf("%d",&select1);
	
	switch(select1)
	{
		case 1:
		system("cls") ;
		appsMenu(); 
		break;
	}
	
}
