/*Escreva  um  subprograma  recursivo  que  receba  como  entrada  dois  números  inteiros 
correspondentes aos valores da base e do expoente e calcule o valor da potenciação. 
Você pode  supor que o expoente é um valor não negativo e que o caso 00  é tratado 
no programa principal (ou seja, não precisa ser tratado dentro do subprograma).*/

#include <stdio.h>
int potencia(int base, int expoente) {
	if (expoente==0 || base==1) return 1;
	if (base==0) return 0;
	if (expoente<0) return 1/(base * potencia(base, expoente-1));
	return base * potencia(base, expoente-1);
}
int main() {
	int base, expoente;
	scanf("%d%d", &base, &expoente);
	int pp = potencia(base, expoente);
	printf("%d", pp);
}