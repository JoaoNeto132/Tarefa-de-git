#include <stdio.h>
int main()
{
    int n =1, n1, n2, n3, cod;
    
    while (n > 0){
        printf("Informe o código do aluno: ");
        scanf("%d", & cod);
        
        if(cod != 0){
            short media;
            printf("Informe as três notas do aluno: ");
            scanf("%d %d %d", & n1, & n2, & n3);
            printf("A média das notas é: %d \n", media =  (n1 + n2 + n3) / 3);
        }
        else {
            printf("Fim");
            break;
        }
    }
}