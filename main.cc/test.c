#include <stdio.h>
int main(){
    char nome [20];
    int n1 , n2 , cont;
    printf("Me informe seu nome: ");
    scanf("%s", nome);
    printf("Me informe um numero inicial: ");
    scanf("%d", &n1);
    printf("Me informe um numero de fim: ");
    scanf("%d", &n2);
    cont=n1;
    if (cont>n2){
        while (cont>n2)
        {  printf("Informe um numero de inicio menor que o de fim\n");
           printf("Me informe um numero inicial: ");
           scanf("%d", &cont);
           printf("Me informe um numero de fim: ");
           scanf("%d", &n2);
        }
    }
    while (cont<=n2){
      printf("%d", cont);
      cont+=1;
    }   
return 0 ;
}