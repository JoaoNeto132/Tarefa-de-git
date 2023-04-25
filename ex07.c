#include<stdio.h>
    #include<math.h>

int main(){
  int i, a, b, c;
    printf("Escreva um numero de 1 a 3: ");
	scanf("%d", &i);
	printf("Escreva 3 numeros reais:");
	scanf("%d%d%d", &a, &b, &c);
	if (i == 1){
		if (a > b && a > c && b > c){
			printf("A ordem crecente é: %d e %d e %d",c,b,a);
		}
 		else if (a > b && a > c && c > b){
			printf("A ordem crecente é: %d e %d e %d",b,c,a);
		}
		else if ( b > a && b > c && a > c){
			printf("A ordem crecente é: %d e %d e %d",c,a,b);
		}
		else if ( b > a && b > c && c > a){
			printf("A ordem crecente é: %d e %d e %d",a,c,b);
		}
		else if ( c > a && c > b && b > a){
			printf("A ordem crecente é: %d e %d e %d",a,b,c);
		}
		else if ( c > a && c > b && a > b){
			printf("A ordem crecente é: %d e %d e %d",b,a,c);
		}
	}
	if (i == 2){
		if (a < b && a < c && b < c){
			printf("A ordem decrecente é: %d e %d e %d",c,b,a);
		}
		else if (a < b && a < c && c < b){
			printf("A ordem decrecente é: %d e %d e %d",b,c,a);
		}
		else if ( b < a && b < c && a < c){
			printf("A ordem decrecente é: %d e %d e %d",c,a,b);
		}
		else if ( b < a && b < c && c < a){
			printf("A ordem decrecente é: %d e %d e %d",a,c,b);
		}
		else if ( c < a && c < b && b < a){
			printf("A ordem decrecente é: %d e %d e %d",a,b,c);
		}
		else if ( c < a && c < b && a < b){
			printf("A ordem decrecente é: %d e %d e %d",b,a,c);
		}
	}
	if (i == 3){
		if (a < b && a < c && b < c){
			printf("O maior numero entre A B C fica no meio: %d e %d e %d",b,c,a);
		}
		else if (a < b && a < c && c < b){
			printf("O maior numero entre A B C fica no meio: %d e %d e %d",c,b,a);
		}
		else if ( b < a && b < c && a < c){
			printf("O maior numero entre A B C fica no meio: %d e %d e %d",a,c,b);
		}
		else if ( b < a && b < c && c < a){
			printf("O maior numero entre A B C fica no meio: %d e %d e %d",c,a,b);
		}
		else if ( c < a && c < b && b < a){
			printf("O maior numero entre A B C fica no meio: %d e %d e %d",b,a,c);
		}
		else if ( c < a && c < b && a < b){
			printf("O maior numero entre A B C fica no meio: %d e %d e %d",a,b,c);
		}
	}
}