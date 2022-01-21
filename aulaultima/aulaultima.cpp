#include<stdio.h>
#include<stdlib.h>

int main(){
//Array

int soma = 0;
int valor = 0;
int numero[4];
int i = 0;

for(i = 0; i <=4; i++){
    printf("\nInsira o valor do indice [%i] do vetor: ", i);
    scanf("%i",&numero[i]);
    soma = soma + numero[i];
}


for(i = 0; i<=4; i++){
    printf("Valor[%i]: %i\n",i, numero[i]);
}

printf("\nA soma dos valores eh: %i", soma);
 
system("pause");
return 0;
}
