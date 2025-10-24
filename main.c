#include <stdio.h>
int main () {
    int n1 , n2 ;
    char cont = 's';
    char nome [20] ;
    printf("Me informe seu nome?");
    scanf("%s", nome);
    while (cont !='n') {
        printf("Me informe um numero:\n");
        scanf("%d", &n1 );
        printf("Me informe mais um numero:\n");
        scanf ("%d", &n2);
        if (n1>n2) {
            printf("O numero %d e maior que o numero %d \n " , n1 , n2 );
        }
        else if ( n2>n1 ) {
            printf("O numero %d e maior que o numero %d \n" ,n2 , n1 );
        }
        else {
            printf("Os numeros sao iguais\n");
        }
        printf("Deseja continuar s/n:\n ");
        scanf(" %c", &cont);
    }

    return 0 ; 
}