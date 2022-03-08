#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main() 
{
    int N; 
    int *arr1, *arr2, *result; 
    int i; 

    scanf("%d", &N); 

    arr1 = (int *)malloc(sizeof(int) * N); 

    for(i=0; i<N; i++) {
        scanf("%d", &arr1[i]); 
    }

    arr2 = (int *)malloc(sizeof(int) * N); 

    for(i=0; i<N; i++) {
        scanf("%d", &arr2[i]); 
    }

    result = (int *)malloc(sizeof(int) * N); 

    for(i=0; i<N; i++) {
        result[i] = arr1[i] + arr2[N-i-1]; 
        printf(" %d", result[i]); 
    }

    free(arr1); 
    free(arr2); 
    free(result); 

    return 0; 
}