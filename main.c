#include <stdio.h>
#include <math.h> 
 int main()
 {     float x,f,fp,h,ep=.00001,epp;
     printf("donner une solution arbitraire\n"); 
    scanf("%f ",&x); 
  do
     {   f=exp(x)+x-3;
     fp=exp(x)+1;
     h=-f/fp;
    epp=((h/x)<0)? -h/x:h/x; /* valeur absolue de h/x*/
   x=x+h;
   printf("x=%f\th=%f\tf=%f\t\n",x,h,f );   /* affichage de x,h,f à chaque iteration*/
}
while(epp>ep); 
 scanf("%f ",&x); 
}
