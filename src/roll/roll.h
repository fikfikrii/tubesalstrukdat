#ifndef roll_h
#define roll_h
 
#include "map.h"
#include "inspect.h"
#include "inspect.c"
#include "map.c"

int randomroll(int maxRoll);
//Memberikan nilai int secara random
//randomRoll mengembalikan nilai integer n> 1 and n <MaxRoll

int STARTROLL(PlayerList PL, TabChar Map, TabInt PositionTOInteger, ListTeleporter LT, int maxRoll, int nPlayer, int lengthMap, int countTel);
//melakukan roll untuk setiap player
/*
PL adalah Playerlist yang berisi 4 pemain
Map adalah peta yang disimpan dalam TabChar
      Map sudah terdefinisi melalui file konfigurasi
PositionTOInteger adalah posisi setiap pemain pada peta yang dikonversi menjadi integer
      Contoh:
            ..#..*..
            maka posisi pemain disimpan sebagai 6 (dari 8 petak keseluruhan, karakter "*" menandakan posisi pemain)
LT adalah list teleporter yang terdefinisi melalui file konfigurasi
maxRoll adalah maksimal angka yang bisa diperoleh melalui roll
      maxRoll terdefinisi melalui file konfigurasi
nPlayer adalah pemain ke-n
lengthMap adalah panjang peta
      lengthMap terdefinisi melalui file konfigurasi
countTel adalah banyaknya teleporter
      countTel terdefinisi melalui file konfigurasi
*/

#endif