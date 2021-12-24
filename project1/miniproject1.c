#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>
#include<string.h>


//functions

void clear(void);
void men(void);
void signin(void);
void signup(void);
void signout(void);
void options(void);
void end(void);
void del(void);
void cart (void);
int add(int );
void loadcart(void);

//items
struct item{
	      int itemID;
	      char itemName[20];
	      int discount,price;
	      int gst;
	      float buyPrice;
};

//login
struct book{
	char ch[20];
	char email[20];
	char user[20];
	char pass[8];
};

struct incart
{  
	   int itemId;
	   char itemName[20];
	   float buyprice;
};

//global;
 int sign = 0;
 int signned = 0;
 struct item items[50];
 struct incart c[50];
 int id,j;
 float total_bill;
 
void men()
{   
    system("CLS");
    FILE *ptr;
    ptr = fopen("item.txt","r");
    int i = 0;
     
    printf("\nITEM ID\t\tNAME\t    PRICE(Rs.)\t  DISCOUNT(%)\t    GST(%)\t BUY PRICE(Rs.)\n");
    printf("==========================================================================================\n\n");
    
       while(!feof(ptr)){    
            fscanf(ptr, "%d %s %d %d", &items[i].itemID, items[i].itemName, &items[i].price, &items[i].discount);

        if(items[i].price > 500)
            items[i].gst=18;
        else
            items[i].gst=0;

        items[i].buyPrice = (items[i].price * (100+items[i].gst) / 100.0) * (100 - items[i].discount) / 100;  
      
     printf("%d\t\t%s\t\t%d\t\t%d\t\t%d\t%.2f\n", items[i].itemID, items[i].itemName, items[i].price, items[i].discount, items[i].gst, items[i].buyPrice);
      i++;
       }
       
        
	char y ;
    fclose(ptr);
      if(sign == 0)
         {
     	printf("* represents cost is printed on Boot\n\nplease login to enter item in bag!!\npress any key to continue...");
     	getch();
	    options();}
	else
	    {    
		    do{
			  printf("enter the id od item you want to buy  : ");
	          scanf("%d",&id);
	           add(id);
	      
	          fflush(stdin);
 
 	         printf("do u want to continu shopping : y/n :  ");
	         scanf("%c",&y);
	         if(y == 'n')
		     {options(); break;}
			 
			 }while(y=='y');
           }
}

void loadcart()
{
     j=0;
	
    FILE *orders;
    orders = fopen("orders.txt","r");
    
      while(fscanf(orders, "%d %s %f", &c[j].itemId, c[j].itemName, &c[j].buyprice)!=EOF){
        ++j;
    }
    fclose(orders);
}
int add(int id)
{    
    int i=0;
	
    FILE *orders;
    orders = fopen("orders.txt","a+");
    
     
     	  while(items[i].itemID){
		if(items[i].itemID == id)
          {
		        fprintf(orders,"%d\t\t%s\t\t\t%.2f\n", items[i].itemID, items[i].itemName, items[i].buyPrice);

	       fclose(orders);     
		   loadcart();
	      } i++;
		
	  }	
	fclose(orders);
      return 0;
	  }
	  
 void back(){
	options();
    }
void del()
{ 
    int i=0;

	FILE *fp;
	fp = fopen("orders.txt","w");
	fflush(stdin);
	printf("enter the item id u want to delete : ");
	scanf("%d",&id);
	
	while(i<j){
        if(c[i].itemId != id)
            fprintf(fp, "%d %s %.2f \n", c[i].itemId, c[i].itemName, c[i].buyprice);
        i++;
    }
    fclose(fp);
    loadcart();
    
    
}

void clear(){
	 total_bill = 0;
	 FILE *fp;
	 fp = fopen("orders.txt","w");
	 fclose(fp);
	 loadcart();
	system("CLS");
	
	
	
	 printf("\n\nYOUR ORDER HAS BEEN PLACED SUCCESSFULLY ...!!!!!\n\n");
	 printf("for more information >>>>>\n\n");
	 printf("************************************\n");
	 printf("*****       CONTACT US       *******\n");
	 printf("*****                        *******\n");
	 printf("*****       9999988888       *******\n");
	 printf("*****     xyz@gmail.com      *******\n");
	 printf("*****      CHD , SEC-17 B    *******\n");
	 printf("************************************\n");
	 
	 printf("PRESS ANY KEY T GO BACK TO MAIN MENU ...>>>>");
	 getch();
		       
}

void cart()
{   system("CLS");
    int i=0,option;
    float total_bill =0;
	printf("**********************************\n");
    printf("**********************************\n");
    printf("**                              **\n");
    printf("**  Our Collections             **\n");
    printf("**                              **\n");
    printf("**********************************\n");
    printf("**********************************\n\n");

    printf("\nITEM ID		 ITEM NAME			BUY PRICE(Rs.)\n");
    printf("==========================================================================================\n\n");
    
    while(i<j)
            {
			printf("%d 		 %s 	 %.2f\n", c[i].itemId, c[i].itemName, c[i].buyprice);
                  total_bill += c[i].buyprice;i++;}
    
    
     printf("\n\n TOTAL BILL : %.1f\n\n",total_bill)  ;
 
     printf("***************************\n");
	 printf("**       1.place order   **\n");
	 printf("**       2.add item      **\n");
     printf("**       3.delete item   **\n");
	 printf("**       4.back          **\n");
	 printf("**  CNTACT-9999988888    **\n");
	 printf("***************************\n");
	
  	printf("-------CHOOSE OPTION-------\n");
	scanf("%d",&option);

   switch(option)
   {
   	    case 1: clear();
		        options(); break;
   	    case 2: men(); break;
   	    case 3: del();
		        options(); break;
   	    case 4: back();break;
   }
 }
 
 void signup()
{
	 system("CLS");
	 printf("************************\n");
	 printf("**                    **\n");
	 printf("**       SIGNUP       **\n");
	 printf("**                    **\n");
	 printf("**  CNTACT-9999988888 **\n");
	 printf("************************\n");
	 
		FILE *fp;
	
	struct book b ;
	 fp = fopen("login.txt","w");
	 
	 fflush(stdin);
	 printf("ENTER YOUR NAME : ");
	 gets(b.ch);
	 printf("enter email : ");
	 gets(b.email);
	 printf("enter username : ");
	 gets(b.user);
	 printf("enter password : ");
	 gets(b.pass);
	 
	 fwrite(&b,sizeof(struct book),1,fp);
	 fclose(fp);
	 
	
    sign = 1;
    
	printf(" registration successful   >>>>   PRESS ANY KEY TO CONTINUE........");
	getch();
	options();
}

void signin()
{  
     system("CLS");
	 printf("*********************************\n");
	 printf("******          signin      *****\n");
	 printf("*********************************\n\n");
 
    char username[20], password[8];
    FILE *fp1;
 
    fp1 = fopen("login.txt","r");
    struct book c;

    printf("Enter your login credentials below \n")	;
    printf("\nEnter username : ");
    scanf("%s",&username);
 
    printf("\nEnter password : ");
    scanf("%s",&password);

 

    while(fread(&c,sizeof(struct book ),1,fp1))
    {
	  printf("%s",c.user);
	  
	 if((strcmp(username,c.user)==0) && (strcmp(password,c.pass)==0))
	 {
		 printf("\n\nlogin successful ....!!!!!!!");
	 }
	 else
	 {printf("\n\nlogin  Credentials are in correct ..!!! ");}
      }
     fclose(fp1);
     signned = 1;
     printf("press any key to continue .....!!!!!!!!!!!!");
    getch();
   options();
 }

void signout()
{
	signned = 0;
	options();
	
 }
 
void end(){
    	system("CLS");
	exit;
}

	
int main()
{   printf("-------     *********   --------\n-------   SARI-SHOPPING --------\n********************************\n*******  A PLACE TO BUY ********\n                              \n-------  SAREEEEEEEEEEE --------\n");
	printf("-------  && JUTEEEEEE   --------\n");
	printf("                                \n");
	printf("********************************\n");
	printf("-------     **********  --------\n");
	printf("                                \n");
	
	printf("PRESS ANY KEY TO CONTINUE .....\n");
   	getch();
	 options();
	return 0;
}

void options()
{ 


	system("CLS");
	int option;	
	
	printf("********************************\n");
	printf("*** options - Functions    *****\n");
	printf("****      1.MEN            *****\n");
if(signned == 0)
{
	printf("****      2.SIGN IN        *****\n");
	printf("****      3.SIGNUP         *****\n");}
else 
{  	printf("****      2.cart           *****\n");
	printf("****      3.SIGNOUT        *****\n");

	}	
	printf("****      4.EXIT           *****\n");
	printf("****                       *****\n");
	printf("** Customer Care:-9999988888  **\n");
	printf("********************************\n");
	printf("                                \n");
	
	struct book b;
	FILE *fp;
	fp = fopen("login.txt","r");
	
   if(signned==1)
   {
		while(fread(&b,sizeof(struct book ),1,fp))
	  {  
		printf("%s",b.ch);
		printf("\n");
		printf("%s\n\n",b.email);
       }  
	}	
	printf("-------CHOOSE OPTION-------\n");
	scanf("%d",&option);
 
if(signned==0){
	switch(option)
	{
		case 1 :  men(); break;
		
		case 2 : signin(); break;
		case 3 : signup(); break;
		case 4 : end(); break;
	}
}
else
{ 
	struct book b;
	FILE *fp;
	fp = fopen("login.txt","r");
    
        
	switch(option)
	{
		case 1 : men(); break;
		
	    case 2 : cart(); break;
		case 3 : signout(); break;
		case 4 : end(); break;
	}

 
	}
}
