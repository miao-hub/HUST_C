#include "stdio.h"
int main()
{
	int k1,k2,k3,k4,k5,k6,k7,k8;
	int m=0;
	for(k1=0;k1<8;k1++)
	{
		for(k2=0;k2<8;k2++)
		{
			if(k2==k1||k2==k1-1||k2==k1+1) continue;
			for(k3=0;k3<8;k3++)
			{
				if(k3==k1||k3==k2||k3==k2-1||k3==k2+1||k3==k1-2||k3==k1+2) continue;
				for(k4=0;k4<8;k4++)
				{
					if(k4==k1||k4==k2||k4==k3||k4==k3-1||k4==k3+1||k4==k1-3||k4==k1+3||k4==k2-2||k4==k2+2) continue;
					for(k5=0;k5<8;k5++)
					{
						if(k5==k1||k5==k2||k5==k3||k5==k4||k5==k4-1||k5==k4+1||k5==k1+4||k5==k1-4||k5==k2-3||k5==k2+3||k5==k3-2||k5==k3+2) continue;
						for(k6=0;k6<8;k6++)
						{
							if(k6==k1||k6==k2||k6==k3||k6==k4||k6==k5||k6==k5-1||k6==k5+1||k6==k1-5||k6==k1+5||k6==k2-4||k6==k2+4||k6==k3-3||k6==k3+3||k6==k4-2||k6==k4+2) continue;
							for(k7=0;k7<8;k7++)
							{
								if(k7==k1||k7==k2||k7==k3||k7==k4||k7==k5||k7==k6||k7==k6-1||k7==k6+1||k7==k1-6||k7==k1+6||k7==k2-5||k7==k2+5||k7==k3-4||k7==k3+4||k7==k4-3||k7==k4+3||k7==k5-2||k7==k5+2) continue;
								for(k8=0;k8<8;k8++)
								{
									if(k8==k1||k8==k2||k8==k3||k8==k4||k8==k5||k8==k6||k8==k7||k8==k7-1||k8==k7+1||k8==k1-7||k8==k1+7||k8==k2-6||k8==k2+6||k8==k3-5||k8==k3+5||k8==k4-4||k8==k4+4||k8==k5-3||k8==k5+3||k8==k6-2||k8==k6+2) continue;
									m++;
									printf("%d %d %d %d %d %d %d %d\n",k1,k2,k3,k4,k5,k6,k7,k8);
								}
							}
						}
					}
				}
			}
		}
	}
	printf("%d",m);
	return 0;
}
