#include"student.h"
#include<string.h>
void sort_name(struct st *ptr)
{
	struct st *i;
	                      printf("---------------------------------------\n");
                              printf("ROLL NO     NAME        PERCENTAGE     \n");
                              printf("---------------------------------------\n");
 
	for(char ch='A';ch<='Z';ch++)
	{
		for(i=ptr;i!=NULL;i=i->next)
		{
			if(i->n[0]==ch ||i->n[0]==ch+32)
			{
				printf("%d          %s          %.2f\n",i->roll,i->n,i->p);
			}
		}
	}
}
void sort_percentage(struct st *ptr)
{
        struct st *i;
	                        printf("---------------------------------------\n");
                                printf("ROLL NO     NAME        PERCENTAGE     \n");
                                printf("---------------------------------------\n");
        for(int per=0;per<=100;per++)
        {
                for(i=ptr;i!=NULL;i=i->next)
                {
                        if(i->p==per)
                        {
                                 printf("%d          %s          %.2f\n",i->roll,i->n,i->p);
                        }
                }
        }
}

/*void print(struct st *);
void sort_name(struct st *ptr)
{
	struct st *i,*j;
	struct st *temp;
        temp=*ptr;
	int temp_roll;
	char temp_name[20];
	float temp_per;
	for(i=*ptr;i!=NULL;i=i->next)
	{
		for(j=i->next;j!=NULL;j=j->next)
		{
			if(strcmp(i->n,j->n)>0)
			{
				temp_roll=i->roll;
				i->roll=j->roll;
				j->roll=temp_roll;
				 
				strcpy(temp_name,i->n);
				strcpy(i->n,j->n);
				strcpy(j->n,temp_name);

				temp_per=i->p;
				i->p=j->p;
				j->p=temp_per;
			}
		}
	}
	print(temp);
}

void sort_percentage(struct st *ptr)
{
        struct st *i,*j;
	struct st *temp;
	temp=*ptr;
        int temp_roll;
        char temp_name[20];
        float temp_per;
        for(i=*ptr;i!=NULL;i=i->next)
        {
                for(j=i->next;j!=NULL;j=j->next)
                {
                        if(i->p > j->p)
                        {
                                temp_roll=i->roll;
                                i->roll=j->roll;
                                j->roll=temp_roll;

                                strcpy(temp_name,i->n);
                                strcpy(i->n,j->n);
                                strcpy(j->n,temp_name);

                                temp_per=i->p;
                                i->p=j->p;
                                j->p=temp_per;
                        }
                }
        }
	print(temp);
}
void print(struct st *ptr)
{
	while(ptr!=0)
	{
		printf("rollno   name    percntage\n");
		printf("  %d      %s        %.2f\n",ptr->roll,ptr->n,ptr->p);
		ptr=ptr->next;
	}
}*/
