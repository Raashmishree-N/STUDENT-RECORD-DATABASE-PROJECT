#include"student.h"
#include<string.h>
void modify(struct st*);
void mod(struct st **ptr)
{
	struct st *temp;
	struct st *t1,*t2,*t3;
	temp=*ptr;
	t1=*ptr;
	t2=*ptr;
	t3=*ptr;
	int r,rn1,rn2;
	printf(" ----------------------------------------\n");
	printf("|    Enter record to search for modify   |\n");
	printf("-----------------------------------------\n");
	printf("|       R:To search rollnumber           |\n");
        printf("|       N:To search name                 |\n");
        printf("|       P:To search percentage           |\n");
	printf("-----------------------------------------\n");
	printf("\n");
	char ch;
        printf("enter your search option:\n");
	scanf(" %c",&ch);
	if(ch=='R')
	{
		printf("Enter rollnum\n");
		scanf("%d",&r);
		while(temp)
		{
		if(temp->roll==r)
		{
			printf("%d %s %.2f",temp->roll,temp->n,temp->p);
		}
		temp=temp->next;
		}
	        while(t3)
                {
                if(t3->roll==r)
                {
                     modify(t3);
                }
                t3=t3->next;
                }

	}
	else if(ch=='N')
	{
		char searchname[20];
		printf("Enter name\n");
		scanf("%s",searchname);
		while(temp)
		{
		if(strcmp(temp->n,searchname)==0)
		{
			printf("ROLL NO     NAME        PERCENTAGE\n");
			printf("%d          %s          %.2f",temp->roll,temp->n,temp->p);
		}
		temp=temp->next;
		}
		printf("Enter rollnum\n");
		scanf("%d",&rn1);
                while(t1)
		{
		if(t1->roll==rn1)
		{
		     modify(t1);
		}
		t1=t1->next;
		}
	}
	else
	{
		float per;
		printf("Enter percentage\n");
		scanf("%f",&per);
		                 printf("---------------------------------------\n");
                                 printf("ROLL NO     NAME        PERCENTAGE     \n");
                                 printf("---------------------------------------\n");
		while(temp)
		{
			if(temp->p==per)
			{
				printf("%d          %s          %.2f\n",temp->roll,temp->n,temp->p);
			}
			temp=temp->next;
		}
		printf("Enter rollnum to modify\n");
                scanf("%d",&rn2);
                while(t2)
                {
                if(t2->roll==rn2)
                {
                     modify(t2);
                }
                t2=t2->next;
                }

	}
}

void modify(struct st *temp)
{
			char choice;
			float percent;
			char name[20];
			printf("----------------------------------\n");
			printf("|    Enter record to Modify        |\n");
			printf("-----------------------------------\n");
			printf("|    N:To search name              |\n");
			printf("|    P:To search percentage        |\n");
			printf("---------------------------------\n");
			printf("enter your modify method\n");
			scanf(" %c",&choice);
			if(choice=='N')
			{
				printf("enter new name\n");
				scanf("%s",temp->n);;
			}
			else if(choice=='P')
			{
				float percent;
				printf("enter new percentege\n");
				scanf("%f",&percent);
				temp->p=percent;
			}
			else 
				printf("invalid option\n");
}	
