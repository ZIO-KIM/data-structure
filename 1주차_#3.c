#include <stdio.h>

void swap(int *a, int *b)
{
  int tmp; 
  tmp = *b; 
  *b = *a; 
  *a = tmp; 
}

int main(void) {
  int N, arr[50], a, b, i; 
  int *p, *q; 

  scanf("%d", &N); 
  for (i=0; i<N; i++) {
    scanf("%d", &arr[i]); 
  }
  scanf("%d %d", &a, &b); 

  p = &arr[a]; 
  q = &arr[b]; 

  swap(p, q); 

  for(i=0; i<N; i++) {
    printf(" %d", arr[i]); 
  }

  return 0; 
}