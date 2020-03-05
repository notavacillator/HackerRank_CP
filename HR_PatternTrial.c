#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int max(int a, int b)
{
    int larger;
    if(a!=b)
    {
        larger = (a>=b)?a:b;
        return larger;
    }
}

void pattern(int n)
{
    int num = 2*n-1, i , j, load;
    for(i=1; i<=num; i++)
    {
        for(j=1; j<=num; j++)
        {
            load = max(abs(n-i),abs(n-j))+1;
            printf("%d ", load);
        }
        printf("\n");
    }
}

int main()
{

    int n;
    scanf("%d", &n);
  	// Complete the code to print the pattern
    pattern(n);
    return 0;
}
