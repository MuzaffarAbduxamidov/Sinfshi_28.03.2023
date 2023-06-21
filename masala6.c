#include <stdio.h>

int main(){

   int a1=1;
   int a2=1;
   int a3=3;
   int a4=2;
   int a5=1;
   int n;
   int i=1;

   printf("Son kiriting:");
   scanf("%d", &n);

   for(; i<=n; i++){
     for(; a1<=i; a1++){
       printf("*");
     }
     for(; a2<i-1; a2++){
       printf(" ");
     }
     for(; a3<i; a3++){
       printf("*");
     }
     for(; a4<i; a4++){
       printf(" ");
     }
   puts("");
   }
}



//*   *
// * *
//  *
// * *
//*   *
