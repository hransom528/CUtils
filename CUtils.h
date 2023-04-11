#ifndef CUTILS_H
#define CUTILS_H

/* MACROS */
#define max(A, B) (((A) > (B)) ? (A) : (B))     // Max macro
#define forever for(;;)                         // Infinite loop
#define dprint(expr) printf(#expr " = %g\n", expr)  // Debug print
#define paste(front, back) front ## back


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