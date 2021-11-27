#ifndef MAP_H
#define MAP_H

#include "../player/player.h"
#include "../inspect/inspect.h"
#include "../array/array.h"
#include "arrayint.h"

#define Nil NULL
extern TabInt PositionTOInteger;
extern addressPlayer;

int updatePosition(addressPlayer AP);
//Menampilkan posisi petak seorang pemain dalam bentuk integer

void MapPlayer(addressPlayer AP);
//Menampilkan current map dari player
//Petak yang ditempati player ditandai dengan  karakter "*"

int CheckPlayerPosition(int nPlayer);

#endif