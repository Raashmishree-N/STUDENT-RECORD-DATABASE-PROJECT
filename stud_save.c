#include"student.h"
int save(struct st *ptr)
{

	FILE *fp=fopen("Student.dat","w");
	if(fp==NULL)
	{
		printf("FIle not open\n");
		return 0;
	}
	
	while(ptr!=0)
	{
		fprintf(fp,"Rolln0:%d Name:%s Percentage:%.2f\n",ptr->roll,ptr->n,ptr->p);
		ptr=ptr->next;
	}
	fclose(fp);
	printf("file successfully saved\n");
}

