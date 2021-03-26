/*Ввести степень и коэффициенты многочлена. Ввести число k. 
Вывести k-ю производную введенного многочлена.
* 1)Ввести степень многочлена
* 2)В зависимости от степени принять количество членов (малок)
* 3)Взять производную k раз
*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include "my_lab.h"

int main() {
	int degree = 0, k;
	printf("Input degree of the polynomial:\n");
	if (!scanf("%d", &degree)) { printf("ERROR"); return 1; }
	double* poly = (double*)malloc((degree + 1) * sizeof(double));
	int* ex = (int*)malloc((degree + 1) * sizeof(int));
	if (!poly)
	{
		printf("ERROR"); return 1;
	};
	for (int i = 0; i <= degree; i++) {
		printf("Input %d element of the polynomial:\n", (i + 1));
		if (!scanf("%lf", &poly[degree - i])) { printf("ERROR"); return 1; }
	};
	printf("Input order of the integral:\n");
	if (!scanf("%d", &k)) { printf("ERROR"); return 1; }
	integr(k, degree, poly);
	for (int i = 0; i <= degree; i++) ex[i] = i + k;
	for (int i = 0; i <= (degree); i++) {
		if (poly[degree - i] > 0)
			printf("+%fx^%d ", poly[degree - i], ex[degree - i]);
		if (poly[degree - i] < 0)
			printf("%fx^%d ", poly[degree - i], ex[degree - i]);
	}
	printf("+C\n");
	free(poly);
	return 0;
}

/*Итегралл к степени неопр от полинома
*/