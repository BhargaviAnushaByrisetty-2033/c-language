#include<stdio.h>
int gcd(int a,int b)
{
	int t=2,res=1;
	while(a>=t &&b>=t)
	{
		if(a%t==0 && b%t==0)
		{
			a=a/t;
			b=b/t;
			res=res*t; 
			
		}
		else
		{
			t++;
			
		}
		if(a<t || b<t)
		{
			return res;
		}
	}
}
int main()
{
int a,b,res;
scanf("%d%d",&a,&b);
res=gcd(a,b);
printf("%d",res);
return 0;
}
