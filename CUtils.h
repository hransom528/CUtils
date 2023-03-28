#ifndef CUTILS_H
#define CUTILS_H

/* MEM */
void swap(void *a, void *b, size_t sz);

/* STRINGS */
char* reverseString(char *str, size_t size);

/* MATH */
int findMin(int arr[], int size);
int findMax(int arr[], int size);

void matrixMultiply(int *mat1, int *mat2, int *result, int m, int n, int p);

bool isPrime(int num);

double magVec(double vec[], int n);
double* normVec(double *vec, int n);
float Q_rsqrt(float num);
#endif