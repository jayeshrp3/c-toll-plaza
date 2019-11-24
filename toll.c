#include<stdio.h>
#include<stdlib.h>
struct car
{
	struct car *next;
	int data;

};
struct car *head;

struct truck
{
	struct truck *nextt;
	int datat;

};
struct truck *headt;

struct bus
{
	struct bus *nextb;
	int datab;

};
struct bus *headb;




 int create() 
{
	int nc=0,journey;
	struct car *new,*temp;
	new=(struct car *)malloc(sizeof(struct car));
	new->next=NULL;
	printf("Enter car number\n");
	scanf("%d",&new->data);
	if(head==NULL)
	{
		head=new;
		
		new->next=head;

	}
	else
	{
		temp=head;
		
		while(temp->next!=head)
		{
		temp=temp->next;
		}
			new->next=head;
			temp->next=new;
			
	}
	printf("Enter 1 for Single journey & 2 for Return\n");
		scanf("%d",&journey);
		if(journey==1)
		{
			printf("Toll = 140 Rs.\n");
			nc=nc+1;
		}
		else
		{
			printf("Toll = 280 Rs.\n");
			nc=nc+2;
		}
	
	return nc;

}


void search(int ele)
{
        struct car *new,*temp;
           int c=1,flag=0;
        if(head==NULL)
        {
        printf("No car has passed today\n");

        }
        else
        {
         temp=head;
          do
           {
            if(temp->data==ele)
             {
              flag=1;
               break;
             }
              temp=temp->next;
              c++;
           }while(head->next!=NULL);
         
            if(flag==1)
              {
                printf("Vehicle found at Position %d\n",c);
              }
            else
             {
                printf("Vehicle not found\n");
            }
        }


}

void display()
{
	
	struct car *temp;
	 if(head==NULL)
 	{
	 printf("No car has passed\n");
          exit(0);
        }
        else
        {
         temp=head;
          do
          {
            printf("\t<%d>",temp->data);
            
             temp=temp->next;
            
          }while(temp!=head);

        }
       

}


//truck//

int create1()
{
	int nt=0,journey;
	struct truck *newt,*tempt;
	newt=(struct truck *)malloc(sizeof(struct truck));
	newt->nextt=NULL;
	printf("Enter number\n");
	scanf("%d",&newt->datat);
	if(headt==NULL)
	{
		headt=newt;
		
		newt->nextt=headt;

	}
	else
	{
		tempt=headt;
		while(tempt->nextt!=headt)
		{
			tempt=tempt->nextt;
			
		}
			newt->nextt=headt;
			tempt->nextt=newt;
			
	}
	printf("Enter 1 for Single journey & 2 for Return\n");
		scanf("%d",&journey);
		if(journey==1)
		{
			printf("Toll = 200 Rs.\n");
			nt=nt+1;
		}
		else
		{
			printf("Toll = 400 Rs.\n");
			nt=nt+2;
		}
	return nt;
}
		
		
		
void search1(int ele1)
{
        struct truck *tempt;
           int t=1,flag=0;
        if(headt==NULL)
        {
        printf("No truck has passed today\n");

        }
        else
        {
         tempt=headt;
          do
           {
            if(tempt->datat==ele1)
             {
              flag=1;
               break;
             }
              tempt=tempt->nextt;
              t++;
           }while(headt->nextt!=NULL);
         
            if(flag==1)
              {
                printf("Vehicle found at Position: %d\n",t);
              }
            else
             {
                printf("Vehicle not found\n");
            }
        }


}



void display1()
{	
	
	struct truck *tempt;
	 if(headt==NULL)
 	 {
		printf("No Truck has passed\n");
            exit(0);
       }
       else
       {
         	tempt=headt;
         	do
            {
            	printf("\t<%d>",tempt->datat);
            
             tempt=tempt->nextt;
            }while(tempt!=headt);

        }
       

}


//bus//

int create2()
{
	int nb=0,journey;
	struct bus *newb,*tempb;
	newb=(struct bus *)malloc(sizeof(struct bus));
	newb->nextb=NULL;
	printf("Enter number\n");
	scanf("%d",&newb->datab);
	if(headb==NULL)
	{
		headb=newb;
		
		newb->nextb=headb;

	}
	else
	{
		tempb=headb;
		while(tempb->nextb!=headb)
		{
			tempb=tempb->nextb;
			
		}
			newb->nextb=headb;
			tempb->nextb=newb;
			
	}
	printf("Enter 1 for Single journey & 2 for Return\n");
		scanf("%d",&journey);
		if(journey==1)
		{
			printf("Toll = 170 Rs.\n");
			nb=nb+1;
		}
		else
		{
			printf("Toll = 340 Rs.\n");
			nb=nb+2;
		}
	return nb;

}


void search2(int ele2)
{
        struct bus *tempb;
           int b=1,flag=0;
        if(headb==NULL)
        {
        printf("No bus has passed today\n");

        }
        else
        {
         tempb=headb;
          do
           {
            if(tempb->datab==ele2)
             {
             	flag=1;
             
                  break;
             }
             tempb=tempb->nextb;
             b++;
           }while(headb->nextb!=NULL);
         
            if(flag==1)
              {
                printf("Vehicle found at Position:%d \n",b);
              }
            else
             {
                printf("Vehicle not found\n");
            }
        }


}
void display2()
{

	struct bus *tempb;
	 if(headb==NULL)
 	{
	 printf("No Bus has passed\n");
          exit(0);
        }
        else
        {
         tempb=headb;
          do
          {
            printf("\t<%d>",tempb->datab);
        
             tempb=tempb->nextb;
          }while(tempb!=headb);

        }
      
}


void main()
{
	int choice,n,n1,n2,n3,n4,c1,c2,c3,t1,t2,t3,tot;
	c1=c2=c3=t1=t2=t3=0;
        do
        {
    
	printf("                                             \n");
	printf("     ==================================================           \n");
	printf(">>>>>>>>>>      WELCOME TO MUMBAI TOLL PLAZA       <<<<<<<<<<<<<<\n");
	printf("    ===================================================          \n");
	printf("                                            \n");
		printf("Enter 1 for Car\n");
		printf("Enter 2 for Truck\n");
		printf("Enter 3 for Bus\n");
		printf("\nEnter 4 to Search the car passed\n");
		printf("Enter 5 to Search the truck passed\n");
		printf("Enter 6 to Search the bus passed\n");
		printf("\nEnter 7 to Display the car passed\n");
		printf("Enter 8 to Display the truck passed\n");
		printf("Enter 9 to Display the bus passed\n");
		printf("Enter 10 for total collection\n");
		printf("Enter 11 to Exit\n");
		printf("\nEnter Your choice\n");
		
        scanf("%d",&choice);
                switch(choice)
                {
                        case 1:
	                            t1=create();
	                            c1=c1+t1;
	                            break;
	                
	                  case 2:
	      			    t2=create1();
	      			    c2=c2+t2;
		                      break;
		                      
		          	case 3:
	                
		                      t3=create2();
		                      c3=c3+t3;
		               
		                      break;
		            
		            case 4:
			                printf("Enter car number to be Searched\n");
			                scanf("%d",&n2);
			                search(n2);
			                break;
			    	case 5:
			                printf("Enter truck number to be Searched\n");
			                scanf("%d",&n3);
			                search1(n3);
			                break;
			      case 6: 
			                printf("Enter bus number to be Searched\n");
			                scanf("%d",&n4);
			                search2(n4);
			                break;
	                  case 7:
	                            display();
		                      break;
		                
		            case 8:
	                           display1();
		                     break;
		                
		            case 9:
	                           display2();
		                     break;
		                
		            case 10: printf("\nTotal Car Fare collected:\t%d\n\n",(140*c1));
		            	   printf("\nTotal TruckFare collected:\t%d\n\n",(200*c2));
		            	   printf("\nTotal Bus Fare collected:\t%d\n\n",(170*c3));
		            	   printf("\nTotal Fare collected:\t\t%d\n\n",(140*c1+200*c2+170*c3));
	                           break;
		            
		                
	                  case 11: exit(1);
		                     break;
		
                }
          }while(1);
          
          
 }
 
 /*Output
 mandar@mandar-Inspiron-5570:~/Desktop$ gcc 11.c -o 11
mandar@mandar-Inspiron-5570:~/Desktop$ ./11


    ==================================================           
>>>>>>>>>>      WELCOME TO MUMBAI TOLL PLAZA       <<<<<<<<<<<<<<
    ===================================================          
			


Enter 1 for Car
Enter 2 for Truck
Enter 3 for Bus

Enter 4 to Search the car passed
Enter 5 to Search the truck passed
Enter 6 to Search the bus passed

Enter 7 to Display the car passed
Enter 8 to Display the truck passed
Enter 9 to Display the bus passed
Enter 10 for total collection
Enter 11 to Exit

Enter Your choice
1
Enter car number
1234
Enter 1 for Single journey & 2 for Return
1
Toll = 140 Rs.


     ==================================================           
>>>>>>>>>>      WELCOME TO MUMBAI TOLL PLAZA       <<<<<<<<<<<<<<
    ===================================================          
						


Enter 1 for Car
Enter 2 for Truck
Enter 3 for Bus

Enter 4 to Search the car passed
Enter 5 to Search the truck passed
Enter 6 to Search the bus passed

Enter 7 to Display the car passed
Enter 8 to Display the truck passed
Enter 9 to Display the bus passed
Enter 10 for total collection
Enter 11 to Exit

Enter Your choice
2
Enter number
3456
Enter 1 for Single journey & 2 for Return
2
Toll = 400 Rs.


     ==================================================           
>>>>>>>>>>      WELCOME TO MUMBAI TOLL PLAZA       <<<<<<<<<<<<<<
    ===================================================          
			


Enter 1 for Car
Enter 2 for Truck
Enter 3 for Bus

Enter 4 to Search the car passed
Enter 5 to Search the truck passed
Enter 6 to Search the bus passed

Enter 7 to Display the car passed
Enter 8 to Display the truck passed
Enter 9 to Display the bus passed
Enter 10 for total collection
Enter 11 to Exit

Enter Your choice
3
Enter number
7890
Enter 1 for Single journey & 2 for Return
2
Toll = 340 Rs.


     ==================================================           
>>>>>>>>>>      WELCOME TO MUMBAI TOLL PLAZA       <<<<<<<<<<<<<<
    ===================================================          
			


Enter 1 for Car
Enter 2 for Truck
Enter 3 for Bus

Enter 4 to Search the car passed
Enter 5 to Search the truck passed
Enter 6 to Search the bus passed

Enter 7 to Display the car passed
Enter 8 to Display the truck passed
Enter 9 to Display the bus passed
Enter 10 for total collection
Enter 11 to Exit

Enter Your choice
10

Total Car Fare collected:	140


Total TruckFare collected:	400


Total Bus Fare collected:	340


Total Fare collected:		880



     ==================================================           
>>>>>>>>>>      WELCOME TO MUMBAI TOLL PLAZA       <<<<<<<<<<<<<<
    ===================================================          
			


Enter 1 for Car
Enter 2 for Truck
Enter 3 for Bus

Enter 4 to Search the car passed
Enter 5 to Search the truck passed
Enter 6 to Search the bus passed

Enter 7 to Display the car passed
Enter 8 to Display the truck passed
Enter 9 to Display the bus passed
Enter 10 for total collection
Enter 11 to Exit

Enter Your choice
7
	<1234>

     ==================================================           
>>>>>>>>>>      WELCOME TO MUMBAI TOLL PLAZA       <<<<<<<<<<<<<<
    ===================================================          
			


Enter 1 for Car
Enter 2 for Truck
Enter 3 for Bus

Enter 4 to Search the car passed
Enter 5 to Search the truck passed
Enter 6 to Search the bus passed

Enter 7 to Display the car passed
Enter 8 to Display the truck passed
Enter 9 to Display the bus passed
Enter 10 for total collection
Enter 11 to Exit

Enter Your choice
8
	<3456>

     ==================================================           
>>>>>>>>>>      WELCOME TO MUMBAI TOLL PLAZA       <<<<<<<<<<<<<<
    ===================================================          
			


Enter 1 for Car
Enter 2 for Truck
Enter 3 for Bus

Enter 4 to Search the car passed
Enter 5 to Search the truck passed
Enter 6 to Search the bus passed

Enter 7 to Display the car passed
Enter 8 to Display the truck passed
Enter 9 to Display the bus passed
Enter 10 for total collection
Enter 11 to Exit

Enter Your choice
9
	<7890>

     ==================================================           
>>>>>>>>>>      WELCOME TO MUMBAI TOLL PLAZA       <<<<<<<<<<<<<<
    ===================================================          
			


Enter 1 for Car
Enter 2 for Truck
Enter 3 for Bus

Enter 4 to Search the car passed
Enter 5 to Search the truck passed
Enter 6 to Search the bus passed

Enter 7 to Display the car passed
Enter 8 to Display the truck passed
Enter 9 to Display the bus passed
Enter 10 for total collection
Enter 11 to Exit

Enter Your choice
4
Enter car number to be Searched
1234
Vehicle found at Position 1


     ==================================================           
>>>>>>>>>>      WELCOME TO MUMBAI TOLL PLAZA       <<<<<<<<<<<<<<
    ===================================================          
			


Enter 1 for Car
Enter 2 for Truck
Enter 3 for Bus

Enter 4 to Search the car passed
Enter 5 to Search the truck passed
Enter 6 to Search the bus passed

Enter 7 to Display the car passed
Enter 8 to Display the truck passed
Enter 9 to Display the bus passed
Enter 10 for total collection
Enter 11 to Exit

Enter Your choice
5
Enter truck number to be Searched
3456
Vehicle found at Position: 1


     ==================================================           
>>>>>>>>>>      WELCOME TO MUMBAI TOLL PLAZA       <<<<<<<<<<<<<<
    ===================================================          
			


Enter 1 for Car
Enter 2 for Truck
Enter 3 for Bus

Enter 4 to Search the car passed
Enter 5 to Search the truck passed
Enter 6 to Search the bus passed

Enter 7 to Display the car passed
Enter 8 to Display the truck passed
Enter 9 to Display the bus passed
Enter 10 for total collection
Enter 11 to Exit

Enter Your choice
6  
Enter bus number to be Searched
7890
Vehicle found at Position:1


     ==================================================           
>>>>>>>>>>      WELCOME TO MUMBAI TOLL PLAZA       <<<<<<<<<<<<<<
    ===================================================          
			


Enter 1 for Car
Enter 2 for Truck
Enter 3 for Bus

Enter 4 to Search the car passed
Enter 5 to Search the truck passed
Enter 6 to Search the bus passed

Enter 7 to Display the car passed
Enter 8 to Display the truck passed
Enter 9 to Display the bus passed
Enter 10 for total collection
Enter 11 to Exit

*/

