#include"student.h"
void add_end(struct st **);
void roll_del(struct st **);
void name_del(struct st **);
void show(struct st *);
void mod(struct st **);
void sort_name(struct st *);
void sort_percentage(struct st *);
int save(struct st *);
int main()
{       
	struct st *hptr;
	char option,z;
//	printf("     L/l :Delete all the records\n");
//	printf("     R/r :Reverse teh list\n");
	printf("\n");
	do
	{
		 printf("-------------------------------\n");
	         printf("      STUDENT RECORD MENU      \n");
       		 printf("-------------------------------\n");
        	 printf("     A/a :Add new record\n");
        	 printf("     D/d :Delete a record\n");
        	 printf("     S/s :Show the list\n");
        	 printf("     M/m :Modify a record\n");
        	 printf("     V/v :Save\n");
        	 printf("     E/e :Exit\n");
        	 printf("     T/t :Sort teh list\n");

		printf("For do operation enter Y\n");
		scanf(" %c",&z);
		if(z=='Y')
		{
	 		printf("Choose your menu\n");
			scanf(" %c",&option);
			if(option=='A' ||option=='a')
			{
				char op;
				do
				{
					add_end(&hptr);
					printf("If you want to add more student data Enter y\n");
					scanf(" %c",&op);
				}while(op=='y');
			}
		        else if(option=='D'||option=='d')
			{
		 		int r;
		 		char ch;
		 		char name[20];
				printf("-------------------------------\n");
				printf("|        DELETE MENU           |\n");
				printf(" -------------------------------\n");
				printf("|      R:based on rollnum      |\n");
				printf("|      N:based on name         |\n");
				printf("-------------------------------\n");
		 		scanf(" %c",&ch);
				 if(ch=='R')
				 {
                        		 roll_del(&hptr);
                       			 printf("Successfully deleted \n");
                 		 }
                 		 else if(ch=='N')
                 		 {
        				name_del(&hptr);
					printf("Successfully deleted\n");
		   		 }
	 		}
			else if(option=='S'||option=='s')
			{
				show(hptr);
			}
			else if(option=='M'||option=='m')
			{
				mod(&hptr);
			}
			else if(option=='T'||option=='t')
			{
				  printf("-------------------------------\n");
				  printf("|    Enter sorting method      |\n");
				  printf("-------------------------------\n");
				  printf("|        N:name                |\n");
				  printf("|        P:percent             |\n");
				  printf("-------------------------------\n");
				  char sch;
				  printf("Enter Your Sorting Method\n");
				  scanf(" %c",&sch);
				  if(sch=='N')
					sort_name(hptr);
				  else if(sch=='P')
					sort_percentage(hptr);
			}
			else if(option=='V'||option=='v')
			{
				char sa;
                                printf("------------------------\n");
                                printf(" Enter                  \n");
                                printf("  S:Save and Exit       \n");
                                printf("  E:Exit withput save   \n");
                                printf("enter your choice\n");
                                scanf(" %c",&sa);
				if(sa=='S')
				{
                                     save(hptr);
				     break;
				}
				if(sa=='E')
				{
				      printf("exited without saving\n");
				      break;
				}


			}
		}
	  }while(z=='Y');
}

