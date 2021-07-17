#include <stdio.h>

int main(){

    double n, e, x, x2, z;       // declaração de variáveis
    z,x2 = 0;
    int contador = 0;           

    // boas-vindas e input
    printf("Esse programa calcula a raiz quadrada de um numero utilizando o metodo da bisseccao e uma precisao de sua escolha.\n\n");

    printf("Digite um numero maior que zero para calcular sua raiz: ");
    scanf("%lf", &n);
    printf("Com que precisao numerica a raiz deve ser calculada? ");
    scanf("%lf", &e);

    if (n < 0){ printf("O numero precisa ser maior do que zero.");}
    x = n/2;

    //laço principal
    while ((x*x)-n > e || ((x*x)-n)*-1 > e) {

        if ((x*x-n) > 0){
            x2 = x;
            x = (x2+z)/2;
        }
        else{
            z = (x2+z)/2;
            x = (x2+z)/2;
        }
        contador++;
    }

    // imprime os resultados
    printf("Numero de iteracoes: %d\n", contador+1);
    if ((x*x)-n >= 0){
        printf("Diferenca absoluta: %lf\n", (x*x)-n);
    }
    else {
        printf("Diferenca absoluta: %lf\n", ((x*x)-n)*-1);
    }
    printf("Raiz quadrada: %lf", x);

    return 0;

}