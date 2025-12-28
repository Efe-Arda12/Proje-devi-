#include <stdio.h>
#include <stdlib.h>

int sesli(char c){
    if(c=='a' || c=='e' || c=='i' || c=='o' || c=='u'){
        return c;
    }
    else{
        return '?';
    }
}

int asal(int m, int n){

    int y;

    y = 2*m + n;

    if(y<=1){
        return 0;
    }

    for(int i=2; i<y; i++){
        if(y%i==0){
             return 0;
        }
    }

    return 1;
}


int main()
{
    char r;
    int g = 0;

    printf("kosullari saglayan isimler:\n");

    for(char i='a'; i<='z'; i++){ //a dan z ye döngü
        char nasi = sesli(i);
        if(nasi != '?'){ //sesli harfleri al
            for(char r='a'; r<='z'; r++){
                nasi = sesli(r);
                if(nasi=='?'){ //sessiz harfleri al
                    int x = i;
                    int y = r;
                    if(asal(x,y)){
                        g = g + 1;
                        printf("%d.%c%c%c\n",g,i,r,i);
                    }
                    if(asal(y,x)){
                        g = g + 1;
                        printf("%d.%c%c%c\n",g,r,i,r);
                    }
                }
            }
        }
    }


    return 0;
}