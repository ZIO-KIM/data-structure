#include <stdio.h>

int sum(int n)
{
    int i, sum = 0; 
    for (i = 1; i <= n; i++) 
    {
        sum += i; 
    }

    return sum;  
}

int main()
{
    int n, i, result = 0; 

    scanf("%d", &n); 

    for (i=1; i<=n; i++)
    {
        result += sum(i); 
    }

    printf("%d", result); 

    return 0; 
}