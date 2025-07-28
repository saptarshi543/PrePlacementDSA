#include <stdio.h> 
#include <stdlib.h> 
#include <string.h>
void multiplyPolynomials(double poly1Coeffs[], int poly1Degree, double poly2Coeffs[], int poly2Degree, double resultCoeffs[]) { 
	int resultDegree = poly1Degree + poly2Degree; memset(resultCoeffs, 0, (resultDegree + 1) * sizeof(double));
for (int i = 0; i <= poly1Degree; i++)
    for (int j = 0; j <= poly2Degree; j++)
        resultCoeffs[i + j] += poly1Coeffs[i] * poly2Coeffs[j];
}
void simpleDisplayPolynomial(double polyCoeffs[], int degree) { 
	printf("Coefficients from x^0 to x^%d: ", degree); 
	for (int i = 0; i <= degree; i++)
	 printf("%.2f ", polyCoeffs[i]);
	  printf("\n"); 
	}

void main() { double poly1Coeffs[] = {1.75, -0.5, 2.0}; int poly1Degree = 2;
double poly2Coeffs[] = {-3.0, 2.0};
int poly2Degree = 1;

int resultDegree = poly1Degree + poly2Degree;
double *resultCoeffs = (double *)malloc((resultDegree + 1) * sizeof(double));

if (resultCoeffs == NULL) {
    printf("Memory allocation failed!\n");
    return 1;
}

printf("Polynomial 1: ");
simpleDisplayPolynomial(poly1Coeffs, poly1Degree);

printf("Polynomial 2: ");
simpleDisplayPolynomial(poly2Coeffs, poly2Degree);

multiplyPolynomials(poly1Coeffs, poly1Degree, poly2Coeffs, poly2Degree, resultCoeffs);

printf("Product Polynomial: ");
simpleDisplayPolynomial(resultCoeffs, resultDegree);

free(resultCoeffs);
}
