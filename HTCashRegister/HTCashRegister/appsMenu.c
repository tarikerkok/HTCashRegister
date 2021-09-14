#include <stdio.h>
#include "appLabels.h"
#include "appsMenu.h"

 int appsMenu(){
 	
 	int select;
 	printf("------ANA MENU------\n");
 	printf("1 ->AYARLAR\n");
 	printf("2 ->KASIYER\n");
 	printf("3 ->X RAPOR\n");
 	printf("4 ->Z RAPOR\n");
 	printf("5 ->EKU RAPOR\n");
 	printf("6 ->ORTAK POS\n");
 	printf("7 ->SIPARIS\n");
 	printf("8 ->KASIYER CIKIS\n");
 	printf("11 ->DEPT 1\n");
 	printf("12 ->DEPT 2\n");
 	printf("13 ->DEPT 3\n");
 	printf("14 ->DEPT 4\n");
 	printf("SECIM:");
 	scanf("%d",&select);
 	system("cls");
 	
 	switch(select)
 	
 	{
 		case 1:appSettingMenu();     break;
 		case 2:appCashierMenu();     break;
 		case 3:appXReportsMenu();    break;
 		case 4:appZReportsMenu();    break;
 		case 5:appEkuReportsMenu();  break;
 		case 6:appReceipt ();        break;
 		case 7:appOrderMenu ();      break;
 		
 	
 			
	 }
 	
 	
 }
