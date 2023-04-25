#include<math.h>
    #include<stdio.h>


int main(){

float precototal;
char cod_produto[10];
int quantidade;

scanf("%s",cod_produto);
scanf("%d",&quantidade);

if (strcmp(cod_produto,"ABCD") == 0 ){
precototal = 5.30 * quantidade;
printf("PRECO TOTAL = %.2f\n",precototal);
}

else if (strcmp(cod_produto,"XYKT") == 0 ){
precototal = 6.80 * quantidade;
printf("PRECO TOTAL = %.2f\n",precototal);
}

else if (strcmp(cod_produto,"BTSD") == 0 ){
precototal = 2.50 * quantidade;
printf("PRECO TOTAL = %.2f\n",precototal);
}

else if (strcmp(cod_produto,"YPOV") == 0 ){
precototal = 6.57 * quantidade;
printf("PRECO TOTAL = %.2f\n",precototal);
}

else {
printf("ENTRADA INVALIDA\n");
}	
}