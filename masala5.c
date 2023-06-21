//Kiritilgan sonlar orasida nechta tub son borligini aniqliydi va hammasini chiqarib beradi.

#include <stdio.h>

int main(){

  int sum=0;
  int son;
  printf("Son kiriting:");
  scanf("%d", &son);

  for(int i=1; i<=son; i++){
    for(int j=1; j<=i; j++){
      if(i%j==0){
        sum+=1;
      }
    }
    if(2==sum){
    printf("Tub sonlar: %d\n", i);
    }
    sum =0;
  }
}
