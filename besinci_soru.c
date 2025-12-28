#include <stdio.h>
#include <stdlib.h>
#define BOYUT 5

// fonksiyon bildirimleri
int yol(int m[BOYUT][BOYUT], int x, int y, int iz[BOYUT][BOYUT]);
void yaz(int d[BOYUT][BOYUT]);

int main(){

    int labirent[BOYUT][BOYUT] = {
        {1,0,1,1,1},
        {1,0,1,0,1},
        {1,1,1,0,1},
        {0,0,1,1,1},
        {1,1,1,0,1}
    };

    int sonuc[BOYUT][BOYUT] = {0}; // geçilen yerleri tutmak için

    // 0,0 dan başlıyoruz
    if(yol(labirent, 0, 0, sonuc)){
        printf("cikis yolu bulundu:\n");
        yaz(sonuc);
    }
    else{
        printf("yol yok :( \n");
    }

    return 0;
}

int yol(int m[BOYUT][BOYUT], int x, int y, int iz[BOYUT][BOYUT])
{
    // çıkışa geldiysek (4,4)
    if(x == BOYUT - 1 && y == BOYUT - 1){
        iz[x][y] = 1;
        return 1;
    }

    // sınır dışıysa veya duvarsa veya daha önce gidildiyse
    if(x < 0 || x >= BOYUT || y < 0 || y >= BOYUT) return 0;
    if(m[x][y] == 0) return 0;
    if(iz[x][y] == 1) return 0;

    // buradan geçiyorum diye işaretle
    iz[x][y] = 1;

    // sırayla dene (asagi, saga, yukari, sola)

    // asagi
    if(yol(m, x+1, y, iz)) return 1;

    // saga
    if(yol(m, x, y+1, iz)) return 1;

    // yukari
    if(yol(m, x-1, y, iz)) return 1;

    // sola
    if(yol(m, x, y-1, iz)) return 1;

    // olmazsa geri dön
    iz[x][y] = 0;
    return 0;
}

void yaz(int d[BOYUT][BOYUT]){
    for(int i=0; i<BOYUT; i++){
        for(int j=0; j<BOYUT; j++){
            printf("%d ", d[i][j]);
        }
        printf("\n");
    }
}
