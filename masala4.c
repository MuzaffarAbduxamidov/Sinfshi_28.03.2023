//1dan "n" songacha mukammal sonlarni topish masalasi.

#include <stdio.h>

int main(){


   int sum=0;
   int n;
   printf("Son kiriting:");
   scanf("%d", &n);

   for(int i=1; i<=n; i++){
      for(int j=1; j<i; j++){
        if(i%j==0){
          sum=sum+j;
        }
      }
      if(i==sum){
        printf("Kiritilgan son MUKAMMAL = %d \n", sum);
      }
     sum=0;
   }
}
