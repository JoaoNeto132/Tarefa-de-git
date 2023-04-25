#include <stdio.h>

int main()
{
    int i1, i2, i3, i4, n1;

    do{
        printf("Digite um número: ");
        scanf("%d", & n);
        
        if(n1 > 0 && n1 < 26){
            i1++;
        }
        if(n1 > 25 && n1 < 51){
            i2++;
        }
        if(n1 > 50 && n1 < 76){
            i3++;
        }
        if(n1 > 75 && n1 < 101){
            i4++;
        }
    } while(n1 >= 0); 
    printf("A quantidade de 0 a 25 é %d\nA  quantidade de 26 a 50 %d\n A quantidade de 51 a 75 %d\n A quantidade de 76 a 100 %d", i1, i2, i3, i4);
}