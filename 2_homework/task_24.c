#include <stdio.h>
#include <stdlib.h>
     
int main(){
  int max_id=0;
  int i=0;
  int num=1;
  int max_num=0;
  while (num!=0){
    scanf("%d",&num);
    if (num>max_num){
      max_num=num;
      max_id=i;
    }
    i=i+1;
  }  
  printf(max_id);
  return 0;
}
