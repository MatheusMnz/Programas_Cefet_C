#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int multi_n(int num){
    setlocale(LC_ALL,"");
	int pass = 1;
	int pass2 = 0;
	int value = 2;
	int count = 0;
	int vet_cifra[100];
	int cifra=0;
	int multiplo=0;
	int valorfinal=0;

		while(pass){
            cifra = 0;
            count = 0;
            pass2 =0;
            multiplo = num * value;
            valorfinal = multiplo;

			do {
	            cifra = multiplo % 10;
	            vet_cifra[count] = cifra; //Vetor contendo na posição 1, o ultimo algarismo e assim po diante.
	            count++;
	            multiplo /= 10;
	         } while (multiplo != 0);


		    for(int i = 0; i <= count-1;i++){ // Count -1 pois el soma um no do-while desnecessariamente.
		       	if(vet_cifra[i] <= 2){
					pass2++;
				}

				if(pass2 == count){
					pass = 0;
					break;
				} else {continue;}
		    }
			value++;
		}
		return valorfinal;
}




int main(){
	int n;
	int x;
	printf("Digite um numero: \n");
	scanf("%d",&n);

	x = multi_n(n);
	printf("O menor multiplo e: %llu",x);
}

