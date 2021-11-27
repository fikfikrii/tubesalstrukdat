#include "map.h"
#include "map.c"
#include "../konfigurasi/mesinkar.c"
#include "../konfigurasi/mesinkar.h"
#include "../konfigurasi/mesinkata.h"
#include "../konfigurasi/mesinkata.c"
#include "../teleporter/teleporter.h"
#include "../teleporter/teleporter.c"

int main(){
      /*Membaca panjang peta*/
      STARTGAME("map.txt");
      int lengthMap = KataTOInteger(CKata);
      ADVKATA();

      /*Membaca peta*/
      TabChar Map;
      MakeEmpty(&Map);
      SetNeff(&Map, lengthMap);
      setMap(CKata, &Map, lengthMap);
      ADVKATA();
      TabChar CopyMap;
      SetTab(Map, &CopyMap);
      

      /*Membaca MaxRoll*/
      int MaxRoll = KataTOInteger(CKata);
      ADVKATA();

      /*Membaca banyaknya teleporter pada map*/
      countTel = KataTOInteger(CKata);
      ADVKATA();

      /*Membaca destinasi teleporter*/
      for (int i= 0; i< countTel; i++){
            int temp1 = KataTOInteger(CKata);
            ADVKATA();
            int temp2 = KataTOInteger(CKata);
            ADVKATA();
            LT.T[i].src = temp1;
            LT.T[i].dest = temp2;
      }
      PlayerList PL;
      CreatePlayerList(&PL);
      List Skill1;
      List Skill2;
      List Skill3;
      List Skill4;
      CreateEmpty(&Skill1);
      CreateEmpty(&Skill2);
      CreateEmpty(&Skill3);
      CreateEmpty(&Skill4);
      char *nama1 = "orang1";          
      char *nama2 = "orang1";         
      char *nama3 = "orang1";         
      char *nama4 = "orang1";
      int urut1 = 1;
      int urut2 = 2;
      int urut3 = 3;
      int urut4 = 4;

      insertPlayerList(&PL, &nama1, Skill1, urut1, false);
      insertPlayerList(&PL, &nama2, Skill1, urut2, false);
      insertPlayerList(&PL, &nama3, Skill1, urut3, false);
      insertPlayerList(&PL, &nama4, Skill1, urut4, true);

      TabInt PositionTOInteger;
      makeEmpty(&PositionTOInteger);
      updatePosition(PL, &PositionTOInteger);
      MapPlayer(PL, Map, PositionTOInteger);


} 