#include <stdio.h>
#include <stdlib.h>

float calcSalRec(float n_hr, float s_min){
	float hr_t, s_brt, imp, s_rec;
	hr_t = s_min / 2.0;
	s_brt = n_hr * hr_t;
	imp = s_brt * 3 / 100;
	s_rec = s_brt - imp;
	return s_rec;
}

int main(int argc, char *argv[]) {
	
	float horas_trab, sal_min, sal_rec;
	
	printf("Insira o numero de horas trabalhadas:\n");
	scanf("%f", &horas_trab);
	printf("Insira o salario minimo:\n");
	scanf("%f", &sal_min);
	
	sal_rec = calcSalRec(horas_trab, sal_min);
	
	printf("Salario a receber: R$ %.2f.\n", sal_rec);
	
	return 0;
}
