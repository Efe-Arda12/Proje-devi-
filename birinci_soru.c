#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int ciro[12];

    srand(time(NULL));

    printf("12 ayin cirosu su sekildedir: ");

    for(int g=0; g<12; g++){
        ciro[g] = rand() % 10 + 1;
    }

    for(int r=0; r<12; r++){
        printf("%d/", ciro[r]);
    }

    printf("\n\n");

    for(int i=0; i<12; i++){
        printf("%2d.ay: (%d) ", i+1, ciro[i]);
        for(int r=0; r<ciro[i]; r++){
            printf("* ");
        }
        printf("\n");
    }


    printf("\n\n");

    for(int seviye=10; seviye>0; seviye--){
        printf("%-3d", seviye);

        for(int t=0; t<12; t++){
            if(ciro[t]>=seviye){
               printf("*   ");
            }
            else{
                printf("    ");
            }
        }

    printf("\n");

    }

    printf("\n  ");

    for(int r=0; r<12; r++){
        printf("%2d. ", r+1);
    }

    printf("\n");

    return 0;
}