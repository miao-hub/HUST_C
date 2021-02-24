#include "stdio.h"
#define N 5
#define M 5
void studentaverage(int *p1,char *p2,float *p3,int x,int y);
void objectaverage(int *p1,char *p2,float *p3,int x,int y);
void lowaverage(int *p1,char *p2,float *p3,int x,int y);
void numberfail(int *p1,char *p2,int x,int y);
void numberperfect(int *p1,char *p2,int x,int y);
int main()
{
	char obname[N][20],stname[N][20];
	int i,j,score[N][M],fail[M],perfect[M];
	float staverage[N],claverage[M];
	for(i=0;i<M;i++)
	scanf("%s",obname[i]);
	for(i=0;i<N;i++)
	{
		scanf("%s",stname[i]);
		for(j=0;j<M;j++)
		scanf("%d",&score[i][j]);
	}
	studentaverage(&score[0][0],&stname[0][0],staverage,N,M);
	objectaverage(&score[0][0],&obname[0][0],claverage,N,M);
	lowaverage(&score[0][0],&obname[0][0],claverage,N,M);
	numberfail(&score[0][0],&obname[0][0],N,M);
	numberperfect(&score[0][0],&obname[0][0],N,M);
	return 0;
}
void studentaverage(int *p1,char *p2,float *p3,int x,int y)
{
	int i,j;
	float sum;
	for(i=0;i<x;i++)
	{
		sum=0;
		for(j=0;j<y;j++)
		sum+=*(p1+i*y+j);
		*p3=sum/y;
		printf("Average score of %s is %.2f\n",p2+i*20,*p3); 
		p3++;
	}
} 
void objectaverage(int *p1,char *p2,float *p3,int x,int y)
{
	int i,j;
	float sum;
	for(i=0;i<y;i++)
	{
		sum=0;
	    for(j=0;j<x;j++)
	    sum+=*(p1+j*y+i);
	    *p3=sum/x;
        printf("Average score of %s is %.2f\n",p2+i*20,*p3);
	    p3++;
	}
}
void lowaverage(int *p1,char *p2,float *p3,int x,int y)
{
	int i,j,num;
	for(i=0;i<y;i++)
	{
		num=0;
		for(j=0;j<x;j++)
		if(*(p1+j*y+i)<*(p3+i))
		num+=1;
		printf("Number of students lower than avg of %s is %d\n",p2+i*20,num);
	}
}
void numberfail(int *p1,char *p2,int x,int y)
{
	int i,j,num;
	for(i=0;i<y;i++)
	{
		num=0;
		for(j=0;j<x;j++)
		if(*(p1+j*y+i)<60)
		num+=1;
		printf("Number of students %s fail is %d\n",p2+i*20,num);
	}
}
void numberperfect(int *p1,char *p2,int x,int y)
{
	int i,j,num;
	for(i=0;i<y;i++)
	{
		num=0;
		for(j=0;j<x;j++)
		if(*(p1+j*y+i)>=90)
		num+=1;
		printf("Number of students %s perfect is %d\n",p2+i*20,num);
	}
}
