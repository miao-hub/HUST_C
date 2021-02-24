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
	struct students_list *next;
};
struct students_list *creat(int n);
void xiugai(char *p1,char *p2,float f,struct students_list *p);
void average(struct students_list *p,float *f1,float *f2);
void sort(struct students_list **headp,float *fa);
int main()
{
	char c1[15],c2[20];
	int n,m,i;
	scanf("%d",&n);
	float score,sum[n],aver[n],*fs=sum,*fa=aver;
	struct students_list *head=NULL,*p;
	head=creat(n);
	p=head;
	printf("%-15s%-20s%-10s%-10s%-10s%-10s\n","ID","Name","English","Math","Physics","C");
	while(p)
	{
		printf("%-15s%-20s%-10.2f%-10.2f%-10.2f%-10.2f\n",p->id,p->name,p->e,p->m,p->p,p->c);
		p=p->next;
	}
	putchar('\n');
	p=head;
	
	scanf("%d",&m);
	for(i=0;i<m;i++)
	{
		scanf("%s",c1);
		scanf("%s",c2);
		scanf("%f",&score);
		xiugai(c1,c2,score,p);
	}
	printf("%s","Alter:\n");
	p=head;
	printf("%-15s%-20s%-10s%-10s%-10s%-10s\n","ID","Name","English","Math","Physics","C");
	while(p)
	{
		printf("%-15s%-20s%-10.2f%-10.2f%-10.2f%-10.2f\n",p->id,p->name,p->e,p->m,p->p,p->c);
		p=p->next;
	}
	putchar('\n');
	p=head;
	
	average(head,sum,aver);
	printf("%s","SumAndAvg:\n");
	printf("%-15s%-20s%-10s%-10s\n","ID","Name","SUM","AVG");
	while(p)
	{
		printf("%-15s%-20s%-10.2f%-10.2f\n",p->id,p->name,*fs++,*fa++);
		p=p->next;
	}
	p=head;
	fa=aver;
	fs=sum;
	putchar('\n');

    sort(&head,aver);
    p=head;
    printf("%s","Sort:\n");
	printf("%-15s%-20s%-10s\n","ID","Name","AVG");
	while(p)
	{
		printf("%-15s%-20s%-10.2f\n",p->id,p->name,*fa++);
		p=p->next;
	}
	return 0;
} 
struct students_list *creat(int n)
{
	struct students_list *head=NULL;
	static int i=0;
	if(i==n) return NULL;
	else
	{
		head=(struct students_list *)malloc(sizeof(struct students_list));
		scanf("%s",head->id);
		scanf("%s",head->name);
		scanf("%f",&head->e);
		scanf("%f",&head->m);
		scanf("%f",&head->p);
		scanf("%f",&head->c);
		i++;
		head->next=creat(n);
	}
	return head;
}
void xiugai(char *p1,char *p2,float f,struct students_list *p)
{
	int i;
	struct students_list *head=p;
	while(head)
	{
		i=strcmp(p1,head->id);
		if(!i)
		{
			if(*p2=='E') head->e=f;
			if(*p2=='M') head->m=f;
			if(*p2=='P') head->p=f;
			if(*p2=='C') head->c=f;break;
		}
		head=head->next;
	}
}
void average(struct students_list *p,float *f1,float *f2)
{
	struct students_list *head=p;
	while(head)
	{
		*f1++=head->e+head->m+head->p+head->c;
		*f2++=(head->e+head->m+head->p+head->c)/4;
		head=head->next;
	}
}
void sort(struct students_list **headp,float *fa)
{
	float *pf=fa,f;
	struct students_list *prior1, *prior2, *p1, *p2, *t;
	int i=0;
	p1=(struct students_list *)malloc(sizeof(struct students_list));
	p1->next=*headp;
	(*headp)=prior1=p1;
	for(p1=prior1->next;p1->next!=NULL;prior1=p1,p1=p1->next)
		for(p2=p1->next,pf=fa,prior2=p1;p2!=NULL;prior2=p2,p2=p2->next,pf++)
			if(*pf>*(pf+1))
			{
				f=*pf;
				*pf=*(pf+1);
				*(pf+1)=f;
				t=p2->next;
				prior1->next=p2;
				prior2->next=p1;
				p2->next=p1->next;
				p1->next=t;
				t=p1;
				p1=p2;
				p2=t;
			}
		p1=(*headp);
	(*headp)=(*headp)->next;
	free(p1);
}

