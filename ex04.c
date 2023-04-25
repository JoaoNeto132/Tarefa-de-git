#include <stdio.h>

int main()
{
    int idade, n1, menorIdade, maiorIdade = 0, quant = 0;
    char sexo;
    float salario, media = 0;
    
    for(n1 = 1; n < 16; n++){
        printf("Informe sua idade, sexo e salario: ");
        scanf("%d %c %g", & idade, & sexo, & salario);
        
        if(menorIdade > idade){
            menorIdade = idade;
        }
        if(maiorIdade < idade){
            maiorIdade = idade;
        }
        
        if(sexo == 'F' && salario <= 100){
            quant++;
        }
    }
    
    printf("A média salarial é de R$ %g \n", media = salario / 16);
    printf("A maior idade é: %d\ne a menor idade é: %d \n", maiorIdade, menorIdade);
    printf("A quantidade de mulheres é de: %d", quant);
}