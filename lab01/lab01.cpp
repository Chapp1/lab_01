// lab_01.cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"

int main()
{
	float a = -4.16f, b = 5.07f, x = 7.48f;
	
	double y = exp(a*x)*(cos(2 / (1 - x)) + b * sin(3 * x));
	printf("Result: %.5f\n", y);

	system("pause");
	return 0;
}
