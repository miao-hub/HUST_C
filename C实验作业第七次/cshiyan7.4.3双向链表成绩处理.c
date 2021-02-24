#include "stdio.h"
#include "stdlib.h"
#include "string.h"
struct students_list{
	char id[15];
	char name[20];
	float e;
	float m;
	float p;
	float c;
	float s;
	float a;
	struct students_list *next;
	struct students_list *prior;
};
struct students_list * creat(int n);
void xiugai(char *p1,char *p2,float f,struct students_list *p);
void average(struct students_list *p);
int main()
{
	struct students_list *head,*p1,*p;
	int n,i,m;
	char c1[15],c2[20];
	float f;
	scanf("%d",&n);
	head=creat(n);
	p=head;
	printf("%-15s%-20s%-10s%-10s%-10s%-10s\n","ID","Name","English","Math","Physics","C");
	while(p!=head->prior)
	{
		printf("%-15s%-20s%-10.2f%-10.2f%-10.2f%-10.2f\n",p->id,p->name,p->e,p->m,p->p,p->c);
		p=p->next;
	}
	printf("%-15s%-20s%-10.2f%-10.2f%-10.2f%-10.2f\n",p->id,p->name,p->e,p->m,p->p,p->c);
	putchar('\n');
	p=head;
	
	scanf("%d",&m);
	for(i=0;i<m;i++)
	{
		scanf("%s",c1);
		scanf("%s",c2);
		scanf("%f",&f);
		xiugai(c1,c2,f,head);
	}
	printf("%s","Alter:\n");
	p=head;
	printf("%-15s%-20s%-10s%-10s%-10s%-10s\n","ID","Name","English","Math","Physics","C");
	while(p!=head->prior)
	{
		printf("%-15s%-20s%-10.2f%-10.2f%-10.2f%-10.2f\n",p->id,p->name,p->e,p->m,p->p,p->c);
		p=p->next;
	}
	printf("%-15s%-20s%-10.2f%-10.2f%-10.2f%-10.2f\n",p->id,p->name,p->e,p->m,p->p,p->c);
	putchar('\n');
	p=head;
	
	average(head);
	p=head;
	printf("%s","SumAndAvg:\n");
	printf("%-15s%-20s%-10s%-10s\n","ID","Name","SUM","AVG");
	while(p!=head->prior)
	{
		printf("%-15s%-20s%-10.2f%-10.2f\n",p->id,p->name,p->s,p->a);
		p=p->next;
	}
	printf("%-15s%-20s%-10.2f%-10.2f\n",p->id,p->name,p->s,p->a);
	return 0;
}
struct students_list * creat(int n)
{
	int i=0;
	struct students_list *headp,*head,*tail,*temp;
	headp=(struct students_list *)malloc(sizeof(struct students_list));
	    scanf("%s",headp->id);
		scanf("%s",headp->name);
		scanf("%f",&headp->e);
		scanf("%f",&headp->m);
		scanf("%f",&headp->p);
		scanf("%f",&headp->c);
	head=headp;
	i++;
	while(i<n)
	{
		temp=(struct students_list *)malloc(sizeof(struct students_list));
		tail=temp;
		scanf("%s",tail->id);
		scanf("%s",tail->name);
		scanf("%f",&tail->e);
		scanf("%f",&tail->m);
		scanf("%f",&tail->p);
		scanf("%f",&tail->c);
		head->next=tail;
		tail->prior=head;
		head=tail;
		tail=temp;
		i++;
	}
	headp->prior=tail;
	tail->next=headp;
	return headp;
}
void xiugai(char *p1,char *p2,float f,struct students_list *p)
{
	int i;
	struct students_list *head,*ps;
	ps=p;
	while(ps!=p->prior)
	{
		i=strcmp(p1,ps->id);
		if(!i)
		{
			if(*p2=='E') ps->e=f;break;
			if(*p2=='M') ps->m=f;break;
			if(*p2=='P') ps->p=f;break;
			if(*p2=='C') ps->c=f;break;
		}
		else
		ps=ps->next;
	}
	i=strcmp(p1,ps->id);
	if(!i)
		{
			if(*p2=='E') ps->e=f;
			if(*p2=='M') ps->m=f;
			if(*p2=='P') ps->p=f;
			if(*p2=='C') ps->c=f;
	    }
}
void average(struct students_list *p)
{
	struct students_list *ps=p;
	while(ps!=p->prior)
	{
		ps->s=ps->e+ps->m+ps->p+ps->c;
		ps->a=(ps->e+ps->m+ps->p+ps->c)/4;
		ps=ps->next;
	}
	ps->s=ps->e+ps->m+ps->p+ps->c;
	ps->a=(ps->e+ps->m+ps->p+ps->c)/4;
}
