#include <stdio.h>
/*to compile use GCC: gcc -o lab4 laboratorio4.c */
int main(void)
{
	printf("-------------------------------------------------\n");
	printf("LABORATORIO 4: OBTENCION DE UN COMPUESTO BINARIO\n");
	printf("-------------------------------------------------\n");
	float porcelana_vacia, masa_tira_mas_porcelana, masa_capsula_mas_oxidoDeMagnesio, masaDeMagnesio_noSePusoALaFlama, masaDeMagnesio_HidrogenoDeMagnesio;
	float masaDeMagnesio, masaMolarMagnesio, masaMolarOxigeno, masaMolarOxidoMagnesio;
	porcelana_vacia = 34.022f;
	masa_tira_mas_porcelana = 34.073f;
	masa_capsula_mas_oxidoDeMagnesio = 35.387f; /* 25.387 */
	masaDeMagnesio_noSePusoALaFlama = 0.050f;
	masaDeMagnesio_HidrogenoDeMagnesio = 25.384f;
	
	printf("1. Determinación de la masa de magnesio que reaccionó:\n");
	masaDeMagnesio = (masa_tira_mas_porcelana - porcelana_vacia) - masaDeMagnesio_noSePusoALaFlama;
	printf("Masa de Magnesio: %f gramos Mg.\n", masaDeMagnesio);
	printf("-------------------------------------------------\n");
	
	printf("3. Determinación de la masa molar del óxido de magnesio:\n");
	masaMolarMagnesio = 24.305f;
	masaMolarOxigeno = 15.999f;
	masaMolarOxidoMagnesio = masaMolarMagnesio + masaMolarOxigeno;
	printf("Masa molar del oxido de Magnesio: %f gramos de MgO.\n", masaMolarOxidoMagnesio);
	printf("-------------------------------------------------\n");
	
	printf("4. Determinacion del rendimiento teorico estequiometrico para la reaccion de oxidacion:\n");
	float calculoEstequiometrico = masaDeMagnesio * (1 / masaMolarMagnesio) * (2 / 2) * (masaMolarOxidoMagnesio / 1);
	printf("Rendimiento teorico: %f gramos \n", calculoEstequiometrico);
	printf("-------------------------------------------------\n");
	
	return 0;
}