//Kiritilgan sonni "*" yulduzcha yordamida teskarimachasi uchburchak qilib chiqaradi.

#include <stdio.h>

int main(){

   int n;
   printf("Son kiriting:");
   scanf("%d", &n);

   for(int i=1; i<=n; i++){
      for(int j=1; j<i; j++){
         printf(" ");
      }
      for(int d=0; d<n-i; d++){
         printf("*");
      }
    puts("");
   }
}
