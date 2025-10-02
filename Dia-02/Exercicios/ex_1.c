#include <stdio.h>

void main() {
	float diametro;

	printf("Informe o diâmetro do círculo: ");
	scanf("%f", &diametro);

	float raio = diametro / 2;
	printf("Área = %.2f\n", 3.14159 * (raio * raio));
}
