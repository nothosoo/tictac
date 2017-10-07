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

void drawEllipse (int x,int y) {
    setfillstyle(SOLID_FILL, WHITE);
    setcolor(WHITE);
    fillellipse(x, y + 20, 40, 40);
    setfillstyle(SOLID_FILL, BLACK);
    setcolor(BLACK);
    fillellipse(x, y + 20, 35, 35);
}

void drawo (int tile[], int x,int y) {
    int maxx = getmaxx();
    int maxy = getmaxy();
    if ( x < maxx / 3 ) {
        if ( y < maxy / 3 ) {
            drawEllipse( maxx / 3 / 2, maxy / 3 / 2 );
            tile[0] = 1;
        } else
        if ( y < maxy / 3 * 2 ) {
            drawEllipse( maxx / 3 / 2, maxy / 2 );
            tile[3] = 1;
        } else {
            drawEllipse( maxx / 3 / 2, maxy / 6 * 5 );
            tile[6] = 1;
        }
    } else
    if (1) {

    }
}

void drawCross (int x, int y) {
    //setfillstyle(SOLID_FILL, WHITE);
    //setcolor(WHITE);
    //bar(x, y-50, x+5, y+50);
    //setfillstyle(SOLID_FILL, WHITE);
    //setcolor(WHITE);
    //bar(x + 45, y-50, x+50, y+50);
    readimagefile("img/cross.jpg",x,y+20,x+50,y+70);
}

void drawx (int x,int y) {
    drawCross(x, y);
}

void printName(char player[], char name[]) {
    strcpy(name, player);
    strcat(name, "'s turn");
    settextstyle(DEFAULT_FONT, HORIZ_DIR, 2);
    setcolor(WHITE);
    outtextxy(0, 0, name);
    name = "";
}

int main(){
    int maxx, maxy;
    int x, y;
    player player1, player2;

    cout << "Enter player 1's name - ";
    player1.setName();
    cout << "Enter player 2's name - ";
    player2.setName();

    initwindow(450, 450);
    maxx = getmaxx();
    maxy = getmaxy();
    line( 0, maxy / 3, maxx, maxy / 3 );
    line( 0, maxy / 3 * 2, maxx, maxy / 3 * 2 );
    line( maxx / 3, 20, maxx / 3, maxy );
    line( maxx / 3 * 2 , 20, maxx / 3 * 2, maxy );
    int i = 1;
    char name[50];
    int tile[9] = {0};
    readimagefile("img/back.jpg",0,20,450,450);
    while (i < 10) {
        if (i % 2 != 0) {
            printName(name, player1.name);
            if(ismouseclick(WM_LBUTTONDOWN)) {
                getmouseclick(WM_LBUTTONDOWN, x, y);
                drawo(tile, x, y);
                i++;
            }
        }
        else {
            printName(name, player2.name);
            if(ismouseclick(WM_LBUTTONDOWN)) {
                getmouseclick(WM_LBUTTONDOWN, x, y);
                drawx(x, y);
                i++;
            }
        }
    }
    if(ismouseclick(WM_LBUTTONDOWN))
        closegraph( );
}
