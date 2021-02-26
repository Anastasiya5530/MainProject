
#include "stdio.h"
#include "math.h"

void function_task6();
extern double x,y,result;

void main()
{
	 x=100;
	 y=365;
	function_task6();

	printf("shestoe\n\n");
	printf("x=%.4lf\n",x);
	printf("y=%.4lf\n",y);
	printf("f=%.4lf\n\n",result);
	
	printf("x=");
	scanf_s("%lf",&x);
	printf("y=");
	scanf_s("%lf",&y);

	function_task6();
    printf("f=%.4lf\n",result);
	getchar();
	getchar();    
}
