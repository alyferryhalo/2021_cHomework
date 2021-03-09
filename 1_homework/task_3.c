#include <stdio.h>
#include <math.h>

// программа рассчитывает значение следующего выражения:
// ((a-b)^2 - (a^2+2ab)) / b^2
// значения переменных: а=1000, b=0.0001
// вычисление происходит с использованием двух вещественных типов данных
// float и double 

int main()
{
	int a;
	a = 1000;
	float b_float;
	b_float = 0.0001;
	float summa_float;
	summa_float = a + b_float;
	float state_float;
	state_float = (pow(summa_float,2) - ((pow(a,2)+2 * a * b_float))) / pow(b_float,2);
	printf("Result_float = %lf\n", state_float);
	
	double b_double ;
	b_double = 0.0001;
	double summa_double;
	summa_double = a + b_double;
	double state_double;
	state_double  = (pow(summa_double ,2) - ((pow(a,2)+2 * a * b_double))) / pow(b_double ,2);
	printf("Result_double = %f\n", state_double );
	
	return 0;
}