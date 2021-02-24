#include "stdio.h"
#include "stdlib.h"
struct s_list{ 
int data; 
struct s_list *next;
} ;
void create_list (struct s_list **headp,int *p);
void main(void)
{
	struct s_list *head=NULL,*p;
	int s[]={1,2,3,4,5,6,7,8,0}; 
	create_list(&head,s); 
	p=head;
	while(p){
		printf("%d\t",p->data); 
		p=p->next; 
	}
	printf("\n");
}
void create_list(struct s_list **headp,int *p)
{
	struct s_list * loc_head=NULL,*tail,*temp;
	if(p[0]==0) 
		;
	else { 
		tail=(struct s_list *)malloc(sizeof(struct s_list));
		tail->data=*p++; 
		tail->next=NULL;
		loc_head=tail;
		while(*p){
			temp=(struct s_list *)malloc(sizeof(struct s_list));
			temp->data=*p++;
			temp->next=loc_head;
			loc_head=temp; 
		}
	}
	*headp=loc_head;
}

