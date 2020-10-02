#include<stdio.h>
#include<math.h>
int main()
{
	float x,h,f,fp,ep,epp=0.0001;
	printf("donner la valeur de x:");
	scanf("%f",&x);
	ep=1;
	while(epp<ep)
	{
		f=exp(x)+x-3.0;
		fp=exp(x)+1.0;
		h=-f/fp;
		x=x+h;
		ep=h/x;
		ep=(ep<0)?-ep:ep;
		printf("sol=%f \t acc=%f\t val=%f\n",x,h,f);
		
	}
	scanf("%f",&x);
}
