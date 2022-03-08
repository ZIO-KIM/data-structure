#include <stdio.h>

void ABC(int s[], int k)
{
    int i, j, tmp; 

    for (i=k; i<10; i++) {
        for (j=k+1; j<10; j++) {
            if (s[j] > s[i]) {
                tmp = s[i]; 
                s[i] = s[j]; 
                s[j] = tmp; 
            }
        }
    }
}

int main()
{
    int s[10], k; 

    for (k=0; k<10; k++) {
        scanf("%d", &s[k]); 
    }

    for (k=0; k<10; k++) {
        ABC(s, k); 
    }

    for (k=0; k<10; k++) {
        printf("%d ", s[k]); 
    }

    return 0; 
}