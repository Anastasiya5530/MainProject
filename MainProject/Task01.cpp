
#include "stdio.h"
#include "math.h"

int main()
{
	double x=100;
	double y=365;
	double f=(sqrt(x)-sqrt(y))/x;

	printf("pervoe\n\n");
	printf("x=%.4lf\n",x);
	printf("y=%.4lf\n",y);
	printf("f=%.4lf\n\n",f);
	
	printf("x=");
	scanf_s("%lf",&x);
	printf("y=");
	scanf_s("%lf",&y);

	f=(sqrt(x)-sqrt(y))/x;
    printf("f=%.4lf\n",f);
	getchar();
	getchar();
	 return 0;
}