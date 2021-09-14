#include <stdlib.h>
#include "appsMenu.h"
#include "appLabels.h"

int appEkuReportsMenu()
{
	int select5;
	printf("----EKU RAPORLARI----\n");
	printf(" 1 -> EKU DETAY RAPORU\n");
	printf(" 2 -> Z RAPORU KOPYASI\n");
	printf(" 3 -> TEK FIS (Z,FIS)\n");
	printf(" 4 -> TEK FIS (TARIH)\n");
	printf(" 5 -> DONEM (Z,FIS)\n");
	printf(" 6 -> DONEM (TARIH)\n");
	printf(" 7 -> DONEM (GUN) (Z,FIS)\n");
	printf("SECINIZ:");
	scanf("%d",&select5);
	switch(select5)
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
		         printf("SERVIS DISI\n");
		         sleep(3);
		         system("cls");		
		         appXReportsMenu();
		         break;
		case 6 : 
		         printf("SERVIS DISI\n");
		         sleep(3);
		         system("cls");		
		         appXReportsMenu();
		         break;
		case 7 : 
		         printf("SERVIS DISI\n");
		         sleep(3);
		         system("cls");		
		         appXReportsMenu();
		         break;
		case 8 : 
		        system("cls") ;
		        appsMenu(); 
		        break;
	 	         
	}
}
