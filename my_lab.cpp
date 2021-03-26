#include "my_lab.h"
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

void deriv(int k, int degree, int* poly) {
	for (int j = 0; j < k; j++) {
		for (int i = 1; i <= (degree - j); i++) {
			poly[i - 1] = poly[i] * 1.0*i;
		};
	};
}

void integr(int k, int degree, double* poly) {
	for (int j = 0; j < k; j++) {
		for (int i = 0; i <= (degree); i++) {
			poly[i] = poly[i]/(i + 1 + j);
		};
	};
}

/*void inpoly(int degree, double* poly) {
	
	for (int i = 0; i <= degree; i++) {
		printf("Input %d element of the polynomial:\n", (i + 1));
		scanf("%d", &poly[degree - i]);
	};
}*/