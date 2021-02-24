#include "stdio.h"
#include "stdlib.h"
struct bits{
    unsigned char bit0:1;
    unsigned char bit1:1;
    unsigned char bit2:1;
    unsigned char bit3:1;
    unsigned char bit4:1;
    unsigned char bit5:1;
    unsigned char bit6:1;
    unsigned char bit7:1;
};
union w8_bits{
    unsigned char c1;
    struct bits s1;
};
void f0(struct bits t);
void f0(struct bits t)
{
    printf("The Interrupt Service Routine isr0 is called!\n");
}
void f1(struct bits t);
void f1(struct bits t)
{
    printf("The Interrupt Service Routine isr1 is called!\n");
}
void f2(struct bits t);
void f2(struct bits t)
{
    printf("The Interrupt Service Routine isr2 is called!\n");
}
void f3(struct bits t);
void f3(struct bits t)
{
    printf("The Interrupt Service Routine isr3 is called!\n");
}
void f4(struct bits t);
void f4(struct bits t)
{
    printf("The Interrupt Service Routine isr4 is called!\n");
}
void f5(struct bits t);
void f5(struct bits t)
{
    printf("The Interrupt Service Routine isr5 is called!\n");
}
void f6(struct bits t);
void f6(struct bits t)
{
    printf("The Interrupt Service Routine isr6 is called!\n");
}
void f7(struct bits t);
void f7(struct bits t)
{
    printf("The Interrupt Service Routine isr7 is called!\n");
}
int main()
{
	int i,m,p;
	union w8_bits w1;
    unsigned n;
    scanf("%d",&m);
    for(p=0;p<m;p++)
    {
    scanf("%d",&n);
    printf("%d:\n",n);
    w1.c1=n;
    void (*p_fun[8])(struct bits);
    p_fun[0]=f0;
    p_fun[1]=f1;
    p_fun[2]=f2;
    p_fun[3]=f3;
    p_fun[4]=f4;
    p_fun[5]=f5;
    p_fun[6]=f6;
    p_fun[7]=f7;
    if(w1.s1.bit0) p_fun[0](w1.s1);
    if(w1.s1.bit1) p_fun[1](w1.s1);
    if(w1.s1.bit2) p_fun[2](w1.s1);
    if(w1.s1.bit3) p_fun[3](w1.s1);
    if(w1.s1.bit4) p_fun[4](w1.s1);
    if(w1.s1.bit5) p_fun[5](w1.s1);
    if(w1.s1.bit6) p_fun[6](w1.s1);
    if(w1.s1.bit7) p_fun[7](w1.s1);
    putchar('\n');
	}
    
    return 0;
}

