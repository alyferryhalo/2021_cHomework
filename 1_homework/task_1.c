#include <stdio.h>
#include <math.h>

// программа предназначена для вычисления значения выражения:
// 7 * arctga(x**2) --> 7 * atan(pow(x,2))
// предполагается введение пользовательского значения

int main()
{
	const float PI = 3.1415;
	double x,y;
	printf("X = ");
	scanf("%lf", &x);
	y = 7 * atan(pow(x,2));
	printf("Result = %lf\n", y);
	return 0;

}