#include<stdio.h>
#include<stdlib.h>
#include "pole.c"
#include "objetosc.c"

#include "pole.h"
#include "objetosc.h"

int main(){
	double bok_kwadrat, bok_szescian;
	printf("podaj długość boku kwadratu");
	scanf("%lf",&bok_kwadrat);
	if(bok_kwadrat<=0) printf("Wprowadzono niepoprawne dane!");
	printf("Podaj długość boku sześcianu");
	scanf("%lf",&bok_szescian);
	if(bok_szescian<=0) printf("Wprowadzono niepoprawne dane!");
	printf("POle kwadratu wynosi: %f", pole(bok_kwadrat));
	printf("Objetosc szescianu wynosi: %d", objetosc(bok_szescian));


	return 0;
}
