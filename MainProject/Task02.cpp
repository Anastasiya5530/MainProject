
#include "stdio.h"
#include "math.h"


double function_task2 (double x, double y)

{
	double f;
	f=(sqrt(x)-sqrt(y))/x;
	return (f);
}
void main()
{

	double x;
	double y;
	double f;

	x=200; y=365;
	f=function_task2(x,y);
	printf("vtoroe zadanie\n\n");
	printf("x=%.4lf\n",x);
	printf("y=%.4lf\n",y);
	printf("f=%.4lf\n\n",f);
	
	printf("x=");
	scanf_s("%lf",&x);
	printf("y=");
	scanf_s("%lf",&y);
	
    f=function_task2(x,y);
	printf("f=%.4lf",f);

	getchar();getchar();
   
}