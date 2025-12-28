#include <stdio.h>
#include <stdlib.h>

void sifrele(char yazi[], int anahtar){

     for(int i=0; yazi[i] != '\0' ; i++){

        char x = yazi[i];

     if(x >= 'a' && x <= 'z'){
        char yeni = (x - 'a' + anahtar) % 26 + 'a';
        printf("%c",yeni);

     }
     else if(x >= 'A'&& x <= 'Z'){
         char yeni = (x - 'A' + anahtar) % 26 + 'A';
         printf("%c",yeni);
     }
     else
         printf("%c",x);
    }
}

void sifreyi_coz(char yazi[], int anahtar){

     for(int i=0; yazi[i] != '\0' ; i++){

        char x = yazi[i];

     if(x >= 'a' && x <= 'z'){
        char yeni = (x - 'a' - anahtar + 26) % 26 + 'a';
        printf("%c",yeni);

     }
     else if(x >= 'A'&& x <= 'Z'){
         char yeni = (x - 'A' - anahtar + 26) % 26 + 'A';
         printf("%c",yeni);
     }
     else
         printf("%c",x);
    }
}


int main()
{
    char yazi[100];
    int sifre;
    int anahtar;
    int cevap;

    printf("sifrelemek yada cozmek istediginiz mesaji giriniz:\n");

    for(int i=0; i<99; i++){
        scanf("%c",&yazi[i]);

        if(yazi[i]=='\n'){
            yazi[i]='\0';
            break;
        }
    }

    printf("bu mesajla ne yapicaksiniz?\n");
    printf("1 - sifrele\n");
    printf("2 - sifreyi coz\n");

    scanf("%d",&cevap);

    if(cevap==1){
       printf("anahtari giriniz: ");
       scanf("%d",&anahtar);
       printf("cevap: ");
       sifrele(yazi,anahtar);
    }
    else if(cevap==2){
        printf("anahtari giriniz: ");
        scanf("%d",&anahtar);
        printf("cevap: ");
        sifreyi_coz(yazi,anahtar);
    }
    else{
       printf("gecerli bir sayi giriniz...\n");
    }

    printf("\n");

    return 0;
}
