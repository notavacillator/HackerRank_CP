#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
//Complete the following function.


void calculate_the_maximum(int n, int k) {
  //Write your code here.
  int max=0, max2=0, max3=0, calc, calc2, calc3, a, b;

  for(int i=1;i<n;i++)
  {
      for(int j=i+1;j<=n;j++)
      {
          a = j;
          b = i;
          calc = a&b;
          calc2 = a|b;
          calc3 = a^b;
          if(max<calc && calc<k)
          {
              max=calc;
          }
          if(max2<calc2 && calc2<k)
          {
              max2=calc2;
          }
          if(max3<calc3 && calc3<k)
          {
              max3=calc3;
          }
      }
  }
  printf("%d\n", max);
  printf("%d\n", max2);
  printf("%d\n", max3);
}

int main() {
    int n, k;

    scanf("%d %d", &n, &k);
    calculate_the_maximum(n, k);

    return 0;
}
