#include <stdio.h>

int main() {

        int num1 =2;
        int num2 =3;
        float media;

        printf("Calcoliamo la media di due numeri\n");
        scanf("%d" , &num1);
        printf("Inserisci un numero:");
        scanf("%d" , &num2);

        media = (num1 + num2) /2;

        printf("La media dei due numeri è: %.2f\n" , media);
        
        return 0; }
    
