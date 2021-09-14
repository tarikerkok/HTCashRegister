#include <stdlib.h>
#include "appsMenu.h"
#include "appLabels.h"

int appZReportsMenu()
{
	int select4;
	printf("-----Z RAPORLARI----\n");
	printf("1 -> M. BELLEK (Z NO)\n");
	printf("2 -> M. BELLEK (TARIH)\n");
	printf("3 -> M. B. DETAY (Z NO)\n");
	printf("4 -> M. B. DETAY (TARIH)\n");
	printf("5 ->CIKIS\n");
	printf("SECINIZ:");
	scanf("%d",&select4);
	switch(select4)
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
