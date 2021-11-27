#include "map.h"
#include "../player/player.h"
#include "../inspect/inspect.h"
#include "../player/player.c"
#include "../array/array.h"
#include "../array/array.c"
#include "arrayint.h"
#include "arrayint.c"


void PrintTabChar(TabChar T){
      for (int i = IdxMin; i<= T.Neff; i++){
            printf("%c ", T.TI[i]);
      }
}


int updatePosition(addressPlayer AP, TabInt *PositionToInteger)
//Mengembalikan value posisi petak seorang pemain dalam bentuk integer
{
      int i = 1;
      while (AP != Nil && i <=4){
            (*PositionToInteger).TI[i] = Petak(AP);
            AP = NextPlayer(AP);
            i++;
      }
}

int CheckPlayerPosition(int nPlayer ,TabInt PositionToInteger)
//Mengirimkan integer posisi player
{
      int a = (PositionToInteger).TI[nPlayer];
      return a;
}

void MapPlayer(PlayerList PL, TabChar Map, TabInt PositionToInteger)
//Menampilkan current map dari player
//Petak yang ditempati player ditandai dengan  karakter "*"
{
      updatePosition(AP, &PositionToInteger);
      int i = 1;
      char  v = '*';
      TabChar tempMap;
      while (i <=4)
      {
            int temp;
            temp = CheckPlayerPosition(i, PositionToInteger);
            SetTab(Map, &tempMap);
            SetEl(&Map, temp, v);
            Map.TI[temp] = v;
            PrintTabChar(Map);
            printf("%d\n", temp);
            
            i++;
      }
}
