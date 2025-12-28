#include <stdio.h>
#include <stdlib.h>

int ucgen(int r) {
    if(r == 1)
        return 1;
    else{
        return ucgen(r - 1) + r;
    }
}


int main() {
    int sayi;

    int x = 0;

    printf("Bir sayi giriniz: ");

    scanf("%d", &sayi);

    printf("\n");

    printf("Ucgen sayilar: ");

    for(int i = 1; i <= sayi; i++) {
        printf("%d ", ucgen(i));
    }

    printf("\n\n");


    printf("Piramit: \n");

    for(int i=0; i<sayi; i++){
        for(int z=0; z<sayi-i-1; z++){
            printf("  ");
        }
        for(int r=0; r<i+1; r++){
            x = x + 1;
            printf("%4d",x);

        }
        printf("\n");
    }

    printf("\n");

    return 0;
}