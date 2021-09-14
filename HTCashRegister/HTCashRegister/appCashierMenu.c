#include <stdio.h>
#include <stdlib.h>
#include "appsMenu.h"
#include "appLabels.h"

int appCashierMenu ()
{
	int select2;
	int no1;
	printf("-----KASIYER MENU-----\n");
	printf("1 ->KASIYER DEGISTIR\n");
	printf("2 ->SIFRE DEGISTIR\n");
	printf("3 ->CIKIS\n");
	scanf("%d",&select2);
	system("cls");
	 switch(select2)
	 {
	 	case 1:
	 	        cashierId();      break;
	 	        
	    case 2:
	    	    cashierPasword(); break;
	    
	    case 3:
	    	    system("cls") ;
		        appsMenu(); 
		                          break;
	    	    
	 	
	 }
	
	
	
}
