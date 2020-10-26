#include <stdio.h>
#include <windows.h>
#include <math.h>

int main(){
	
	double a,b,c,x1,x2;
	
	printf("Encontrar las raices del polinoomio de segundo orden ax²+bx+c\n");
	
	printf("Introducir un valor para 'a':");
	scanf("%d",&a);
	
	printf("Introducir un valor para 'b':");
	scanf("%d",&b);
	
	printf("Introducir un valor para 'c':");
	scanf("%d",&c);
	
    x1=b+(sqrt(b*b-4*a*c))/(2*a);
    x2=-b-(sqrt(b*b-4*a*c))/(2*a);
    
    printf("El valor de x1: %d\n",x1);
    printf("El valor de x2: %d\n",x2);
	
	printf("Fin del progama =)");
}

