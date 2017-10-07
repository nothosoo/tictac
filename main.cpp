#include <iostream>
#include <string>
#include "graphics.h"
using namespace std;

class player {
public:
    char name[20];
    char getName();
    void setName();
};

void player::setName(){
    cin >> name;
}

char player::getName(){
    //return name;
}

bool puto (int tile[], int x,int y) {
    int maxx = getmaxx();
    int maxy = getmaxy();
    if ( x < maxx / 3 ) {
        if ( y < maxy / 3 ) {
            if (tile[0] == 0) {
                readimagefile("img/o.jpg", 25 , 45, 125, 145);
                tile[0] = 1;
                return TRUE;
            } else return FALSE;

        } else
        if ( y < maxy / 3 * 2 ) {
            if (tile[3] == 0) {
                readimagefile("img/o.jpg", 25 ,maxy / 3 + 25, 125, maxy / 3 * 2 - 25);
                tile[3] = 1;
                return TRUE;
            } else return FALSE;
        } else {
            if (tile[6] == 0) {
                readimagefile("img/o.jpg", 25 ,maxy / 3 * 2 + 25, 125, maxy - 25);
                tile[6] = 1;
                return TRUE;
            } else return FALSE;
        }
    } else
    if ( x < maxx / 3 * 2 ) {
        if ( y < maxy / 3 ) {
            if (tile[1] == 0) {
                readimagefile("img/o.jpg", maxx / 3 + 25 , 45, maxx / 3 + 125, 145);
                tile[1] = 1;
                return TRUE;
            } else return FALSE;
        } else
        if ( y < maxy / 3 * 2 ) {
            if (tile[4] == 0) {
                readimagefile("img/o.jpg", maxx / 3 + 25 ,maxy / 3 + 25, maxx / 3 + 125, maxy / 3 * 2 - 25);
                tile[4] = 1;
                return TRUE;
            } else return FALSE;
        } else {
            if (tile[7] == 0) {
                readimagefile("img/o.jpg", maxx / 3 + 25 ,maxy / 3 * 2 + 25, maxx / 3 + 125, maxy - 25);
                tile[7] = 1;
                return TRUE;
            } else return FALSE;
        }
    } else {
        if ( y < maxy / 3 ) {
            if (tile[2] == 0) {
                readimagefile("img/o.jpg", maxx / 3 * 2 + 25 , 45, maxx / 3 * 2 + 125, 145);
                tile[2] = 1;
                return TRUE;
            } else return FALSE;
        } else
        if ( y < maxy / 3 * 2 ) {
            if (tile[5] == 0) {
                readimagefile("img/o.jpg", maxx / 3 * 2 + 25 ,maxy / 3 + 25, maxx / 3 * 2 + 125, maxy / 3 * 2 - 25);
                tile[5] = 1;
                return TRUE;
            } else return FALSE;
        } else {
            if (tile[8] == 0) {
                readimagefile("img/o.jpg", maxx / 3 * 2 + 25 ,maxy / 3 * 2 + 25, maxx / 3 * 2 + 125, maxy - 25);
                tile[8] = 1;
                return TRUE;
            } else return FALSE;
        }
    }
}

bool putcross (int tile[], int x, int y) {
    int maxx = getmaxx();
    int maxy = getmaxy();
    if ( x < maxx / 3 ) {
        if ( y < maxy / 3 ) {
            if (tile[0] == 0) {
                readimagefile("img/cross.jpg", 25 , 45, 125, 145);
                tile[0] = 2;
                return TRUE;
            } else return FALSE;

        } else
        if ( y < maxy / 3 * 2 ) {
            if (tile[3] == 0) {
                readimagefile("img/cross.jpg", 25 ,maxy / 3 + 25, 125, maxy / 3 * 2 - 25);
                tile[3] = 2;
                return TRUE;
            } else return FALSE;
        } else {
            if (tile[6] == 0) {
                readimagefile("img/cross.jpg", 25 ,maxy / 3 * 2 + 25, 125, maxy - 25);
                tile[6] = 2;
                return TRUE;
            } else return FALSE;
        }
    } else
    if ( x < maxx / 3 * 2 ) {
        if ( y < maxy / 3 ) {
            if (tile[1] == 0) {
                readimagefile("img/cross.jpg", maxx / 3 + 25 , 45, maxx / 3 + 125, 145);
                tile[1] = 2;
                return TRUE;
            } else return FALSE;
        } else
        if ( y < maxy / 3 * 2 ) {
            if (tile[4] == 0) {
                readimagefile("img/cross.jpg", maxx / 3 + 25 ,maxy / 3 + 25, maxx / 3 + 125, maxy / 3 * 2 - 25);
                tile[4] = 2;
                return TRUE;
            } else return FALSE;
        } else {
            if (tile[7] == 0) {
                readimagefile("img/cross.jpg", maxx / 3 + 25 ,maxy / 3 * 2 + 25, maxx / 3 + 125, maxy - 25);
                tile[7] = 2;
                return TRUE;
            } else return FALSE;
        }
    } else {
        if ( y < maxy / 3 ) {
            if (tile[2] == 0) {
                readimagefile("img/cross.jpg", maxx / 3 * 2 + 25 , 45, maxx / 3 * 2 + 125, 145);
                tile[2] = 2;
                return TRUE;
            } else return FALSE;
        } else
        if ( y < maxy / 3 * 2 ) {
            if (tile[5] == 0) {
                readimagefile("img/cross.jpg", maxx / 3 * 2 + 25 ,maxy / 3 + 25, maxx / 3 * 2 + 125, maxy / 3 * 2 - 25);
                tile[5] = 2;
                return TRUE;
            } else return FALSE;
        } else {
            if (tile[8] == 0) {
                readimagefile("img/cross.jpg", maxx / 3 * 2 + 25 ,maxy / 3 * 2 + 25, maxx / 3 * 2 + 125, maxy - 25);
                tile[8] = 2;
                return TRUE;
            } else return FALSE;
        }
    }
}

void printName(char player[], char name[]) {
    strcpy(name, player);
    strcat(name, "'s turn");
    outtextxy(0, 0, name);
}

bool checkGameo (int tile[]) {
    //Ehnii bagana o baigaag shalgana
    if (tile[0] == 1 && tile[3] == 1 && tile[6] == 1) {
        return TRUE;
    }
    //Daraagiin bagana o baigaag shalgana
    if (tile[1] == 1 && tile[4] == 1 && tile[7] == 1) {
        return TRUE;
    }
    //Suuliin bagana o baigaag shalgana
    if (tile[2] == 1 && tile[5] == 1 && tile[8] == 1) {
        return TRUE;
    }
    //Ehnii mur 0
    if (tile[1] == 1 && tile[3] == 1 && tile[6] == 1) {
        return TRUE;
    }
    //Daraagiin mur 0
    if (tile[4] == 1 && tile[4] == 1 && tile[7] == 1) {
        return TRUE;
    }
    //Suuliin mur 0
    if (tile[7] == 1 && tile[5] == 1 && tile[8] == 1) {
        return TRUE;
    }
    //diagnol o ehniih
    if (tile[0] == 1 && tile[4] == 1 && tile[8] == 1) {
        return TRUE;
    }
    //diagnol o suuliih
    if (tile[2] == 1 && tile[4] == 1 && tile[6] == 1) {
        return TRUE;
    }
    return FALSE;
}

bool checkGamex (int tile[]) {
    //Ehnii bagana x baigaag shalgana
    if (tile[0] == 2 && tile[3] == 2 && tile[6] == 2) {
        return TRUE;
    }
    //Daraagiin bagana x baigaag shalgana
    if (tile[1] == 2 && tile[4] == 2 && tile[7] == 2) {
        return TRUE;
    }
    //Suuliin bagana x baigaag shalgana
    if (tile[2] == 2 && tile[5] == 2 && tile[8] == 2) {
        return TRUE;
    }
    //Ehnii mur x
    if (tile[1] == 2 && tile[3] == 2 && tile[6] == 2) {
        return TRUE;
    }
    //Daraagiin mur x
    if (tile[4] == 2 && tile[4] == 2 && tile[7] == 2) {
        return TRUE;
    }
    //Suuliin mur x
    if (tile[7] == 2 && tile[5] == 2 && tile[8] == 2) {
        return TRUE;
    }
    //diagnol x ehniih
    if (tile[0] == 2 && tile[4] == 2 && tile[8] == 2) {
        return TRUE;
    }
    //diagnol x suuliih
    if (tile[2] == 2 && tile[4] == 2 && tile[6] == 2) {
        return TRUE;
    }
    return FALSE;
}

int main(){
    int maxx, maxy;
    int x, y, cmd = 0;
    player player1, player2;

    cout << "Enter player 1's name - ";
    player1.setName();
    cout << "Enter player 2's name - ";
    player2.setName();
    initwindow(450, 450);
    while (cmd != 1) {
        start:
        cleardevice();
        maxx = getmaxx();
        maxy = getmaxy();

        int i = 1;
        char name[50];
        int tile[9] = {0};
        readimagefile("img/back.jpg",0,20,450,450);

        while (i < 10) {
            if (i % 2 != 0) {
                printName(player1.name, name);
                if(ismouseclick(WM_LBUTTONDOWN)) {
                    getmouseclick(WM_LBUTTONDOWN, x, y);
                    if (puto(tile, x, y)) {
                        i++;
                    }
                    if (checkGameo(tile)) {
                        strcpy(name, player1.name);
                        strcat(name, " won!");
                        settextstyle(DEFAULT_FONT, HORIZ_DIR, 3);
                        outtextxy(50, maxy / 2, name);
                        break;
                    }
                }
            }
            else {
                printName(player2.name, name);
                if(ismouseclick(WM_LBUTTONDOWN)) {
                    getmouseclick(WM_LBUTTONDOWN, x, y);
                    if (putcross(tile, x, y)) {
                        i++;
                    }
                    if (checkGamex(tile)) {
                        strcpy(name, player2.name);
                        strcat(name, " won!");
                        settextstyle(DEFAULT_FONT, HORIZ_DIR, 3);
                        outtextxy(50, maxy / 2, name);
                        break;
                    }
                }
            }
        }
        settextstyle(DEFAULT_FONT, HORIZ_DIR, 2);
        outtextxy(20, maxy / 2 + 30, "Click Enter to play again");
        outtextxy(20, maxy / 2 + 60, "Click Esc to exit");

        int c = getch();
        if((c == 13)) {
            goto start;
        }else
        if((c == 27)) {
            cmd = 1;
        }
    }
    closegraph();
    return 0;
}
