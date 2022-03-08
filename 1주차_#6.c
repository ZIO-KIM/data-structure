#include <stdio.h>
#include <string.h>

struct student {
    char name[10]; 
    int score; 
}; 

int main()
{
    struct student s_[5];
    int i, avg_score = 0; 

    for(i=0; i<5; i++) {
        scanf("%s %d", s_[i].name, &s_[i].score); 
        avg_score += s_[i].score; 
    }

    avg_score /= 5; 

    for(i=0; i<5; i++) {
        if (s_[i].score <= avg_score) {
            printf("%s\n", s_[i].name); 
        }
    }

    return 0; 
}