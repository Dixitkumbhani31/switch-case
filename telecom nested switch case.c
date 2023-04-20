#include<stdio.h>

main()

{
	int num,choice1,choice2,cho2,choice3;
	
	printf("Welcome to Jio\n\n");
	printf("select your language\n\n");
	printf("press 1 for mobile recharge\n");
	printf("press 2 for Jio fiber connection\n");
	printf("Press 3 to speak to our salesman\n");
	printf("Enter your choice=");
	scanf("%d",&num);
	
	switch(num)
	{
	
		case 1 :
			   printf("press 1 for get 1GB data Rs.209 per day and 28 days validity\n");
			   printf("press 2 for get 1.5GB data Rs.479 per day and 56 days validity \n");
			   printf("press 3 for get 2GB data Rs.719 per day and 84 days validity\n");
			   printf("Enter your choice=");
			   scanf("%d",&choice1);
			   switch(choice1)
			   {
			   	  case 1 :
			   	  	     printf("Rs.209 recharge has successfully\n");
			   	  	     break;
			   	  	    
			   	  case 2 :
			   	  	     printf("Rs.479 recharge has successfully\n");
			   	  	     break;
							 
				  case 3 :
			   	  	     printf("Rs.719 recharge has successfully\n");
			   	  	     break;
			   	  	    
			   	  default :
		                 printf("Plz Enter Valid Choice\n");		    
			    }
			   
			   
		case 2 :
			   printf("\n\nPress 1 to get Jio Fiber connection\n");
			   printf("Press 2 to know Jio Fiber plans\n");
			   printf("Press 3 to cancel  WiFi connection\n");
			   printf("Enter your choice=");
			   scanf("%d",&choice2);
			   switch(choice2)
			   {
			   	  case 1 :
			   	  	     printf("Thank You for get jio fiber connection\n");
			   	  	     break;
			   	  	     
			   	  case 2 :
			   	  	     printf("press 1 to get 6 months validity of 60 Mbps unlimited data at Rs.999\n");
			   	  	     printf("press 2 to get 12 month validity of 120 Mbps unlimited data at Rs.4999\n");
			   	  	     printf("Enter your choice=");
			             scanf("%d",&cho2);
			             switch(cho2)
			   	  	      {
							  
			                case 1 :
			   	  	                printf("Rs.999 rechage your wifi has succesfully\n");
			   	  	                break;
			   	  	     		   
			   	            case 2 :
			   	  	                printf("Rs.4999 rechage your wifi has succesfully\n");
			   	  	                break;	
					      }
					     
				  case 3 :
			   	  	     printf("WiFi connection can be canceled from My Jio app\n");
			   	  	     break;		
							  
				  default :
		                 printf("Plz Enter Valid Choice\n");				  	  	     
			   	  	    
			   }
			   
	   	case 3 :
		        printf("\n\nPress 1 to speak to our salesman\n");
		        printf("Enter your choice=");
			    scanf("%d",&choice3);
			    switch(choice3)
			    {
			    	case 1 : 
			    	       printf("Please wait for a while our salesman is join\n");
			    	       break;
			    	       
			        default :
		                   printf("Plz Enter Valid Choice\n");       
				}
    }
}
