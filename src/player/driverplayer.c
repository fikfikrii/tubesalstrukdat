#include "player.h"

int main(){
    PlayerList PL;
    CreatePlayerList(&PL);
    boolean isLastPlayer = false;
    int l;
    printf("Masukan jumlah pemain: ");
    scanf("%d", &l);
    switch (l)
    {
    case 1: printf("Minimal pemain adalah sebanyak 2 orang.\n");
        break;
    case 2: 
    case 3:
    case 4: 
        for (int i=1; i<=l; i++){
            char playerName[50];
            printf("PLAYER %d\n", i);
            printf("Masukan nama pemain: ");
            scanf("%s", playerName);
            addressPlayer AP = AlokasiPlayer(i, playerName);
            if (i==l){
                isLastPlayer = true;
            }
            strcpy(Nama(AP), playerName);
            insertPlayer(&PL, AP, isLastPlayer);
        }
        setJumlahPlayer(&PL, l);
        printf("%d\n", JumlahPlayer(PL));
        printPlayer(PL, l);
        break;

    default: printf("Pemain hanya dapat berjumlah 2, 3, atau 4 orang.\n");
    }

    return 0;
}