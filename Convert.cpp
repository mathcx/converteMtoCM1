// Implemente um sistema que o usuário digite um valor em metros(m) e converta para centimetros(cm)
// Digite o valor em (m)
//O valor convertido de X(m) eh Y(cm)

#include <stdio.h>

int main()

{

	float metro, conversao;
	
	// Entrada - Start
	printf("Digite o valor em metros: \n");
	scanf("%f", &metro);
	// Entrada - End
	
	// Processamento - Start
	conversao = (metro*100);
	//Processamento - End
	
	// Saída - Start
	printf("O valor convertido de %2.f(m) eh %2.f(cm)", metro, conversao);
	// Saída - End
	
	return 0;
}
