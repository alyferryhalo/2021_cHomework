#include <stdio.h>

int Sum(int i, int n)
{
   int a;
   return (i < n && scanf("%d", &a) == 1) ? a * ((a & 1) == 0) + Sum(i + 1, n) : 0; 
}
 
int main()
{
   printf("sum = %d\n", Sum(0, 10));
   return 0;    
}
