#include <stdio.h>
#include <string.h>
#include <stdlib.h>

typedef struct student{
    char name[8]; 
    int korean, english, math; 
    double avg_score; 
} st; 

int main()
{
    st *s_;
    int N, i;   

    scanf("%d", &N);

    s_ = (st*)malloc(N * sizeof(st)); 
    
    for(i=0; i<N; i++) {
        scanf("%s %d %d %d", s_[i].name, &s_[i].korean, &s_[i].english, &s_[i].math); 
        s_[i].avg_score = (s_[i].korean + s_[i].english + s_[i].math) / 3.0; 

        printf("%s %.1f ", s_[i].name, s_[i].avg_score); 

        if (s_[i].korean >= 90 || s_[i].english >= 90 || s_[i].math >= 90) {
            printf("GREAT"); 
        }

        if (s_[i].korean < 70 || s_[i].english < 70 || s_[i].math < 70) {
            printf(" BAD"); 
        }

        printf("\n"); 
    }

    free(s_); 

    return 0; 
}