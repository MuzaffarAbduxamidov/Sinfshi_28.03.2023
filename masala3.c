//Kiritilgan sonni "*" yulduzcha yordamidamida oyog'ini osmondan qilib teskarimachasi chiqaradi.

#include <stdio.h>

int main(){

   int n;
   printf("Son kiriting:");
   scanf("%d", &n);

   for(int i=n; i>=1; i--){
      for(int j=1; j<=i; j++){
         printf("*");
      }
    puts("");
   }
}
