#include <stdio.h>
#include "matematica.h"

int main() {

    float angulo = M_PI; 

    float seno = calcular_seno(angulo);
    float cosseno = calcular_cosseno(angulo);
    float tangente = calcular_tangente(angulo);

    printf("Seno: %.4f\n", seno);
    printf("Cosseno: %.4f\n", cosseno);
    printf("Tangente: %.4f\n", tangente);

    return 0;
}
