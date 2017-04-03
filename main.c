#include <stdio.h>

int main (void){

	double km;
	double tanque;
	double consumo;
	scanf("%lf %lf", &km, &tanque);
	consumo = km / tanque ;
	printf("%.3f km/l\n", consumo);

return 0;

}
	
