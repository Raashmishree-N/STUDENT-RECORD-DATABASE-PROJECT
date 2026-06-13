#include"student.h"
void show(struct st *ptr)
{
                printf("---------------------------------------\n");
	        printf("ROLL NO     NAME        PERCENTAGE     \n");
		printf("---------------------------------------\n");
	while(ptr!=0)
	{
	        printf("%d          %s	        %.2f\n",ptr->roll,ptr->n,ptr->p);
		ptr=ptr->next;
	}
}

