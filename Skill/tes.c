#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int check(int x){
    if ((x >= 1) && (x <= 10)){
        return 0;
    }
    else if((x >= 11) && (x <= 20)){
        return 1;
    }
    else if((x >= 21) && (x <= 30)){
        return 2;
    }
    else if((x >= 31) && (x <= 36)){
        return 3;
    }
    else if((x >= 37) && (x <= 51)){
        return 4;
    }
    else if((x >= 52) && (x <= 66)){
        return 5;
    }
    else if((x >= 67) && (x <= 70)){
        return 6;
    }
}

int main(){
    char daftarSkill[] = {'A', 'B', 'C', 'D', 'E', 'F', 'G'};
    char skillPemain[10] = {};
    srand(time(NULL));
    for (int i = 0; i < 10; i ++){
        int x;
        x = rand() % 100 +1;
        printf("%d", x);
        x = check(x);
        printf("%d", x);
        skillPemain[i] = daftarSkill[x];
        printf("%c\n", skillPemain[i]);
    }
}