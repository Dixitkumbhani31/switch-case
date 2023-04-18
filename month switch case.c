#include<stdio.h>

main()

{
	int choice;
	printf("1 January\n");
	printf("2 February\n");
	printf("3 March\n");
	printf("4 April\n");
	printf("5 May\n");
	printf("6 Jun\n");
	printf("7 July\n");
	printf("8 August\n");
	printf("9 September\n");
	printf("10 October\n");
	printf("11 November\n");
	printf("12 December\n");
	printf("Chose any number of above=");
	scanf("%d",&choice);
	switch(choice)
	{
		
		case 1 :
		    	printf("January");
			    break;
			
		case 2 :
			    printf("February");
			    break;
			
		case 3 :
			    printf("March");
		    	break;
			
		case 4 :
		    	printf("April");
		    	break;
			
		case 5 :
		     	printf("May");
		    	break;
			
		case 6 :
		    	printf("Jun");
		    	break;
			
	    case 7 :
		    	printf("July");
		    	break;
			
		case 8 :
		    	printf("August");
		    	break;
			
		case 9 :
		    	printf("September");
		    	break;
			
		case 10 :
		    	printf("october");
		    	break;
			
		case 11 :
		    	printf("November");
		    	break;
			
		case 12 :
		    	printf("December");
		    	break;
				
		default :
		        printf("Plz Enter Valid Choice");											
	}
}
