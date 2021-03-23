#include <stdio.h>
#include <stdlib.h>

int main(){
  int a; // начальное значение
  int n; // количество шагов
  int k; // промежуточное значение
  int P = 1; // итоговая сумма
  // считать a, n
  scanf("%d",&a);
  scanf("%d",&n);
  while (n!=0) 
  {
    k = a + (n-1);
    P = P * k; // записываем значение P
    n = n - 1; // уменьшаем шаги, чтобы дойти до нуля
  }
  printf(P);
  return 0;
}
