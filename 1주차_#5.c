#include <stdio.h>
#include <string.h>

struct _time {
    int hour, minute, second; 
}; 

int main()
{
    struct _time t1, t2; 
    int hr, min, sec; 

    scanf("%d %d %d", &t1.hour, &t1.minute, &t1.second); 
    scanf("%d %d %d", &t2.hour, &t2.minute, &t2.second); 

    hr = t2.hour - t1.hour; // 두번째 시간이 항상 늦은 시간임

    if (t2.minute < t1.minute) {
        min = 60 - t1.minute + t2.minute; 
        hr -= 1; 
    }

    else {
        min = t2.minute - t1.minute; 
    }

    if (t2.second < t1.second) {
        sec = 60 - t1.second + t2.second; 
        min -= 1; 
    }

    else {
        sec = t2.second - t1.second; 
    }

    printf("%d %d %d", hr, min, sec); 

    return 0; 
}