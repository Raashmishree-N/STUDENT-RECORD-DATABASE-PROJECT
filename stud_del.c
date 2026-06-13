#include"student.h"
#include<string.h>
void roll_del(struct st **ptr)
{
	int r;
	printf("Enter RollNo to Delete\n"); 
	scanf("%d",&r);
	struct st *temp;
	struct st *prev=0;
	temp=*ptr;
	while(temp!=0)
	{
		if(temp->roll==r)
		{
			if(temp==*ptr)
				*ptr=temp->next;
			else
				prev->next=temp->next;
			free(temp);
			return;
		}
		else
		{
			prev=temp;
			temp=temp->next;
		}
	}
}
void name_del(struct st **ptr)
{
	int c=0;
	char name[20];
	printf("Enter Name to Delete\n");
	scanf("%s",name);
	struct st *temp,*t1;
	struct st *prev=0;
	temp=*ptr;
	t1=*ptr;
		       printf("---------------------------------------\n");
                       printf("ROLL NO     NAME        PERCENTAGE     \n");
                       printf("---------------------------------------\n");
        while(temp)
	{
		if(strcmp(temp->n,name)==0)
		{   
			c++;   
			printf("%d          %s          %.2f\n",temp->roll,temp->n,temp->p);
		}
		temp=temp->next;
	}
	if(c==0)
	{
		printf("name not found\n");
	}
	else if(c==1)
	{
		while(t1)
		{
			if(strcmp(t1->n,name)==0)
			{

                        if(t1==*ptr)
                                *ptr=t1->next;
                        else
                                prev->next=t1->next;
                        free(t1);
                        return;
                }
                else
                {
                        prev=t1;
                        t1=t1->next;
                }
		}
	}
	else
	{
		roll_del(ptr);
	}
}

