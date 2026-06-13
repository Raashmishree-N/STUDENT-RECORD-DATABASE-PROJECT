#include"student.h"
int rollnum();
void add_end(struct st **ptr)
{
struct st *temp=(struct st*)malloc(sizeof(struct st));
//printf("enter roll\n");
int rn=rollnum();
temp->roll= rn;
printf("Roll No: %d\n",temp->roll);
printf("Enter Name  Percentage\n");
scanf("%s %f",temp->n, &temp->p);
if(*ptr==0)
{
	temp->next=0;
	*ptr=temp;
}
else
{
	struct st *last=*ptr;
	while(last->next!=0)
		last=last->next;
	temp->next=0;
	last->next=temp;
}
}
/*void print(struct st *ptr)
{
	while(ptr !=0)
	{
		printf("roll:%d name:%s per:%.2f\n",ptr->roll,ptr->n,ptr->p);
		ptr=ptr->next;
	}
}*/

int rollnum()
{
	static int r=0;
	r++;
	return r;
}

