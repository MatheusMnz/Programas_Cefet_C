
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main (){

        setlocale(LC_ALL, "Portuguese");
        float lista[10];
        float media;
        float cont = 0;
        int n;

        printf("Digite a quantidade de n�meros: ");
        scanf("%d",&n);

        for (int i = 0; i < n; i++){
            printf("Digite um n�mero: ");
            scanf("%f",&lista[i]);
            cont += lista[i];
            }
            media = cont/10;
    printf("%.2f",media);
return 0;
}
