#include <stdio.h>
#include <math.h>

int main(){
	
	float radio_circulo, area_circulo, perimetro_circulo;
	
	printf("Ingrese el radio del circulo: ");
	scanf("%f",&radio_circulo);
	
	area_circulo = M_PI * pow(radio_circulo,2);
	perimetro_circulo =2 * M_PI* radio_circulo;
	
	printf("El area del circulo es: %f\n",area_circulo);
	printf("El perimetro del circulo es: %f\n",perimetro_circulo);
	
	printf("Fin del programa =)");
}
