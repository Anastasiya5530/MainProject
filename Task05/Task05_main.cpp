#include "stdio.h"
#include "math.h"

double function_task5(double ,double y);

int main()
{

	double x;
	double y;
	double f;

	x=200; y=365;
	f=function_task5(x,y);
	printf("pyatoe\n\n");
	printf("x=%.4lf\n",x);
	printf("y=%.4lf\n",y);
	printf("f=%.4lf\n\n",f);
	
	printf("x=");
	scanf_s("%lf",&x);
	printf("y=");
	scanf_s("%lf",&y);
	
    f=function_task5(x,y);
	printf("f=%.4lf",f);

	getchar();getchar();
    return 0;
}