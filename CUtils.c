#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <math.h>

#define countof(array) (sizeof(array) / sizeof(array[0]))

// Swaps two blocks of memory
void swap(void *a, void *b, size_t sz) {
    void *temp = malloc(sz);
    memcpy(temp, b, sz);
    memcpy(b, a, sz);
    memcpy(a, temp, sz);
    free(temp);
    return;
}

// Reverses a string
char* reverseString(char *str, size_t size) {
    if (str == NULL) return NULL;
    
    char temp;
    for (int i = 0; i < (size / 2); i++) {
        temp = str[i];
        str[i] = str[size-i-1];
        str[size-i-1] = temp;
    }
    return str;
}

// Finds min of int array
int findMin(int arr[], int size) {
    int min = arr[0];
    for (int i=0; i < size; i++) {
        if (arr[i] < min) {
            min = arr[i];
        }
    }
    return min;
    
}

// Finds max of int array
int findMax(int arr[], int size) {
    int max = arr[0];
    for (int i=0; i < size; i++) {
        if (arr[i] > max) {
            max = arr[i];
        }
    }
    return max;
}

// Multiplies two matrices, (mxn) * (nxp) = (mxp)
void matrixMultiply (int *mat1, int *mat2, int *result, int m, int n, int p) {
    for (int k = 0; k < n; k++) {
        for (int i = 0; i < m; i++) {
            for (int j = 0; j < p; j++) {
                *(result + i*p + j) += *(mat1 + i*n + k) * *(mat2 + k*p + j);
            }
        }
    }
    return;
}

// Detects if number is prime
bool isPrime(int num) {
    for (int i = 2; i < num; i++) {
        if (num % i == 0) {
            return false;
        }
    }
    return true;
}

// Returns the magnitude of a vector
double magVec(double *vec, int n) {
    double mag;
    for (int i = 0; i < n; i++) {
        mag += pow((vec[i]), 2);
    }
    return sqrt(mag);
}

// Normalizes a vec
double* normVec(double *vec, int n) {
    double mag = magVec(vec, n);
    for (int i = 0; i < n; i++) {
        vec[i] /= mag;
    }
    return vec;
}

// Implementation of Quake fast inverse square root
float Q_rsqrt(float num) {
    long i;
    float x2, y;
    const float threehalfs = 1.5F;

    x2 = num * 0.5F;
    y = num;
    i = * (long *) &y;          // Evil floating point bit hack
    i = 0x5f3759df - (i >> 1);  
    y = * (float *) &i;         // Converts i back to float
    y = y * (threehalfs - (x2*y*y));    // First Newton iteration
    y = y * (threehalfs - (x2*y*y));    // Second Newton iteration (optional)

    return y;
}