#include <stdio.h>
#include <stdlib.h>
#include "appsMenu.h"
#include "appLabels.h"

int appXReportsMenu()
{
	int select2;
	printf("-----X RAPORLARI----\n");
	printf("1 ->X RAPORU\n");
	printf("2 ->X PLU RAPORU\n");
	printf("3 ->SATISLARI GONDER\n");
	printf("4 ->FIS TOPLAMLARI\n");
	printf("5 ->CIKIS\n");
	printf("SECINIZ:");
	scanf("%d",&select2);
	switch(select2)
	{
		case 1 : 
		         printf("SERVIS DISI\n");
		         sleep(3);
		         system("cls");		
		         appXReportsMenu();
		         break;
		case 2 : 
		         printf("SERVIS DISI\n");
		         sleep(3);
		         system("cls");		
		         appXReportsMenu();
		         break;
		case 3 : 
		         printf("SERVIS DISI\n");
		         sleep(3);
		         system("cls");		
		         appXReportsMenu();
		         break;
		case 4 : 
		         printf("SERVIS DISI\n");
		         sleep(3);
		         system("cls");		
		         appXReportsMenu();
		         break;
		case 5 : 
		         system("cls") ;
		         appsMenu(); 
		         break;
	 	         
	}
}
