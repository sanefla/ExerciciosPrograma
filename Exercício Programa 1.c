#include <stdio.h>
#include <math.h>

int main(){

double l1, l2, l3;
float area, raiz;
int p;

printf("Esse programa analisa e classifica triangulos.\n\n");              //Boas vindas e entrada de dados.

	printf("Digite o valor do primeiro segmento: ");
    scanf("%lf", &l1);
	printf("Digite o valor do segundo segmento: ");
    scanf("%lf", &l2);
	printf("Digite o valor do terceiro segmento: ");
    scanf("%lf", &l3);

 if (l1 + l2 >= l3 && l1 + l3 >= l2 && l2 + l3 >= l1){                  //Definindo se é ou não um triângulo.

    printf("Medidas dos lados formam um triangulo VALIDO \n");

    if (l1 == l2 && l2 == l3 && l3 == l1){                              //Classificando como equilatero e calculo da área.
        printf("Classificacao em funcao dos lados: EQUILATERO \n");
        area = pow(l1,2) * sqrtf(3) / 4;                
    }

    else if (l1 == l2 || l2 == l3 || l3 == l1){                         //Definindo como isoceles.
        printf("Classificacao em funcao dos lados: ISOCELES \n");
            if (l1 == l2){                                              //Cálculo da área para cada lado sendo o diferente.
                area = l3 * sqrt((pow(l1,2) - pow((l3/2),2))) / 2;
            }
            else if (l1 == l3){
                area = l2 * sqrt((pow(l1,2) - pow((l2/2),2))) / 2;
            }
            else if (l2 == l3){
            area = l1 * sqrt((pow(l2,2) - pow((l1/2),2))) / 2;
    }

    }

    else if (l1 != l2 && l2 != l3 && l3 != l1){                         //Definindo como escaleno.
        printf("Classificacao em funcao dos lados: ESCALENO \n");
        int p = (l1 + l2 + l3)/2 ;                                      //Calculando o semiperímetro e a área.
        area = sqrt(p * (p - l1) * (p - l2) * (p - l3));
    }     

    /* Calculando os angulos e classificando os triangulos de acordo com eles.
       Utilizei a lei dos cossenos nessa parte */

    float A, B, C;
    const float pi= 3.14159265;

    A = acos ((pow(l1,2) + pow(l3,2) - pow(l2,2)) / (2*l3*l1))*180/pi;
    B = acos ((pow(l2,2) - pow(l3,2) + pow(l1,2)) / (2*l2*l1))*180/pi;
    C = acos ((pow(l2,2) + pow(l3,2) - pow(l1,2)) / (2*l2*l3))*180/pi;

    if ( A == 90 || B == 90 || C == 90){
        printf("Classificacao em funcao dos angulos: RETO \n");
    }

    else if (A < 90 && B < 90 && C < 90){
        printf("Classificacao em funcao dos angulos: AGUDO \n");
    }
    
    else if (A > 90 || B > 90 || C > 90){
    printf("Classificacao em funcao dos angulos: OBTUSO \n");
    }

    printf("Area do triangulo: %.2f.\n",area);


    }

else printf("Medidas dos lados formam um triangulo INVALIDO");          //Caso a entrada seja um triângulo invalido.


return 0;    

}