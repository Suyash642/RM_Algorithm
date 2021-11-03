#include<stdio.h>
#include<math.h>
 
void main()
{
  int n;
  int i;
  float ut,u,x,y;
 
  printf("\n Enter Number of Processes :: ");
  scanf("%d",&n);
  float e[n],p[n];
  
  for(i=0;i<n;i++)
  {
   printf("\n Enter Execution Time for P%d ::",(i+1));
   scanf("%f",&e[i]);
   printf("\n Enter Period for P%d ::",(i+1));
   scanf("%f",&p[i]);
  }
 
  //calculate the utilization
  for(i=0;i<n;i++)
  {
   x=e[i]/p[i];
   ut+=x;
  }
  
  printf("\n Processor Utilization : %f",ut);
 
  //calculate value of U
  y=(float)n;
  y=y*((pow(2.0,1/y))-1);
  u=y;
  printf("\n Urm : %f\n",u);
  
  if (ut<=1)
  {
  	printf("\n As %f <= 1, Necessary condition is satisfied",ut,u);
	if(ut<u)
	{
	    printf("\n As %f  <  %f , Sufficient condition is also satisefied",ut,u);
	    printf("\n The tasks are surely schedulable");
  	}
	else
		printf("\n As %f  >=  %f , Sufficient condition is not satisefied",ut,u);
  }
  else
  {
  	printf("\n The tasks are not schedulable");
  }
 
  getch();
}

