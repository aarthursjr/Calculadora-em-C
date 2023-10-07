#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void soma() {
    float v1, v2, r;
    printf("Digite 2 valores: ");
    scanf("%f%f", &v1, &v2);
    r = v1 + v2;
    printf("\nResultado: %g\n", r);
    system("pause");
    system("cls");
}

void subtrai() {
    float v1, v2, r;
    printf("Digite 2 valores: ");
    scanf("%f%f", &v1, &v2);
    r = v1 - v2;
    printf("\nResultado: %g\n", r);
    system("pause");
    system("cls");
}

void multiplica() {
    float v1, v2, r;
    printf("Digite 2 valores: ");
    scanf("%f%f", &v1, &v2);
    r = v1 * v2;
    printf("\nResultado: %g\n", r);
    system("pause");
    system("cls");
}

void divide() {
    float v1, v2, r;
    printf("Digite 2 valores: ");
    scanf("%f%f", &v1, &v2);
    if (v2 != 0) {
        r = v1 / v2;
        printf("\nResultado: %g\n", r);
    } else {
        printf("\nErro: Divisão por zero.\n");
    }
    system("pause");
    system("cls");
}

void potencia() {
    float v1, v2, r;
    printf("Digite 2 valores: ");
    scanf("%f%f", &v1, &v2);
    r = pow(v1, v2);
    printf("\nResultado: %g\n", r);
    system("pause");
    system("cls");
}

int main() {
    int escolha;

    while (1) {
        printf("-----CALCULADORA-----\n");
        printf("1 - Soma\n");
        printf("2 - Subtração\n");
        printf("3 - Multiplicação\n");
        printf("4 - Divisão\n");
        printf("5 - Potenciação\n");
        printf("6 - Sair\n");
        printf("Operação: ");

        scanf("%d", &escolha);

        switch (escolha) {
            case 1:
                soma();
                break;
            case 2:
                subtrai();
                break;
            case 3:
                multiplica();
                break;
            case 4:
                divide();
                break;
            case 5:
                potencia();
                break;
            case 6:
                exit(0);
            default:
                printf("\nOpção inválida, tente novamente.\n");
                break;
        }
        printf("\n");
    }

    return 0;
}