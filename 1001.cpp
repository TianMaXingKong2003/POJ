#include<stdio.h>
#include<math.h>
int main()
{
	
	int k;
	double x0,x;
	double y[100];
	int i=0;
	int j=0;
	
	
	while(scanf("%lf %d",&x0,&k)!=EOF)
	{
		if(k==1)
			y[i]=x0;
			
		else
		{
			x=x0;
			for(j=0;j<k-1;j++)
			{
				x=x*x0;
			}
			y[i]=x;
		}
		i++;
	 } 
	 
	 for(j=0;j<i;j++)
	 {
	 	if(j==i-1)
	 		printf("%.20lf",y[j]);
	 	else
	 		printf("%.20lf\n",y[j]);
	 }
	
}
