#include "TXLib.h"

void drawFon()
{
txSetColor(RGB(0,0,26));
txSetFillColor(RGB(0,0,26));
txRectangle(0,0,800,600);
}

void drawTuchi(int x,int y)
{
txSetColor(RGB(52,52,52));
txSetFillColor(RGB(52,52,52));
txEllipse(x+513-513,y+20-20,x+681-513,y+67-20);
txEllipse(x+595-513,y+31-20,x+766-513,y+110-20);
txEllipse(x+666-513,y+76-20,x+796-513,y+117-20);
}
void tucha2(int x,int y)
{
txSetColor(RGB(52,52,52));
txSetFillColor(RGB(52,52,52));
txEllipse(x+482-482,y+359-359,x+728-482,y+458-359);
txEllipse(x+560-482,y+344-359,x+732-482,y+390-359);
txEllipse(x+411-482,y+419-359,x+560-482,y+463-359);
}

void drawDialog(int x,int y, const char* slovo)
{
    txSetColor(TX_BLACK);
    txSetFillColor(TX_WHITE);
    txSelectFont("Times",20);
    txEllipse(x,y,x+180, y+50);
    txDrawText(x,y,x+180,y+50,slovo);



   //drawdialog xmen 300 "___"


}

void drawSamolet( int x, int y, double r)
{
// x=689 y=263
//основа
txSetColor(TX_BLACK,3);
txSetFillColor(TX_WHITE);


POINT plain[12] = {{x,y},{x+(151-689)*r,y+(266-263)*r},
                    {x+(124-689)*r,y+(212-263)*r},{x+(121-689)*r,y+(98-263)*r},{x+(220-689)*r,y+(211-263)*r},
                    {x+(124-689)*r,y+(211-263)*r},{x+(308-689)*r,y+(211-263)*r},{x+(308-689)*r,y+(85-263)*r},
                    {x+(493-689)*r,y+(211-263)*r},{x+(308-689)*r,y+(211-263)*r},{x+(574-689)*r,y+(212-263)*r},
                    {x+(690-689)*r,y+(264-263)*r}};
                    txPolygon (plain, 12);


POINT krlo[4] = {{x+(308-689)*r,y+(248-263)*r},{x+(494-689)*r,y+(249-263)*r},
                {x+(308-689)*r,y+(494-263)*r},{x+(308-689)*r,y+(248-263)*r}};
                txPolygon (krlo, 4);

//турбина
txEllipse(x+(442-689)*r,y+(301-263)*r,x+(463-689)*r,y+(348-263)*r);
POINT turbina[3] = {{x+(420-689)*r,y+(348-263)*r},{x+(443-689)*r,y+(318-263)*r},{x+(447-689)*r,y+(348-263)*r}};
txPolygon (turbina, 3);


//окна
txSetColor(TX_BLACK,3);
txSetFillColor(RGB(22,112,209));
POINT window[3]={{x+(572-689)*r,y+(212-263)*r},
                {x+(572-689)*r,y+(246-263)*r},
                {x+(651-689)*r,y+(247-263)*r}};
                txPolygon (window, 3);

POINT windows[5] = {{x+(224-689)*r,y+(212-263)*r},{x+(238-689)*r,y+(231-263)*r},
                   {x+(527-689)*r,y+(228-263)*r},{x+(543-689)*r,y+(212-263)*r},
                   {x+(224-689)*r,y+(212-263)*r}};
                    txPolygon (windows, 5);



//sled
txSetColor(RGB(108,108,108));
txLine(x+(308-689)*r,y+(84-263)*r,x+(0-689)*r,y+(84-263)*r);
txLine(x+(120-689)*r,y+(97-263)*r,x+(0-689)*r,y+(97-263)*r);
txLine(x+(307-689)*r,y+(495-263)*r,x+(0-689)*r,y+(495-263)*r);
}
void Molnya()
{
txSetColor(TX_BLACK,2);
txSetFillColor(RGB(248,248,7));
POINT molnya[12] = {{454,326},{531,183},{543,205},{590,122},{605,149},{654,57},{700,161},{633,215},{622,197},{566,256},{555,240},{454,326}};
txPolygon (molnya, 12);
}
void Fire()
{
txSetColor(TX_BLACK,2);
txSetFillColor(TX_RED);
POINT fire[8] = {{420,321},{414,282},{401,301},{376,270},{380,304},{360,291},{378,321},{420,321}};
txPolygon (fire, 8);
}
void smoke()
{
txSetColor(TX_BLACK,3);
txSetFillColor(TX_BLACK);
txEllipse(446,252,480,328);
}
void scene1()
{
    drawFon();
 }
void scene2()
{
    drawFon();
    drawSamolet(689, 263, 1);
    Molnya();
 }
 void scene3()
{
    drawFon();
    drawSamolet(689, 263, 1);
    Fire();
    smoke();
 }
void CityFon()
{
txSetColor(RGB(0,0,64));
txSetFillColor(RGB(0,0,64));
txRectangle(0,0,800,600);

txSetColor(TX_BLACK);
txSetFillColor(TX_GRAY);
txRectangle(-1,357,801,601);
}
void house(int xhouse, int yhouse,  int whouse, int hhouse,int win[])
{
    txSetColor(TX_GRAY);
    txSetFillColor(TX_BLACK);
    txRectangle(xhouse,yhouse,xhouse+whouse,yhouse+hhouse);
    txSetColor(TX_GRAY);
    int i=0;

    for(int yWin=yhouse+10; yWin<yhouse+hhouse-30; yWin+=30)
    {
        for(int xWin=xhouse+10; xWin<xhouse+whouse-10; xWin+=30)
        {
            if(win[i]%3==0)
            txSetFillColor(RGB(255,255,0));
            else
            txSetFillColor(TX_BLACK);
            txRectangle(xWin,yWin,xWin+20, yWin+20);
            i++;
        }
    }
}
void Sman(int x, int y, double r)
{
txSetColor(TX_WHITE);
txSetFillColor(RGB(64,128,128));


//туловище
txLine(x+(460-460)*r,y+(250-239)*r,x+(460-460)*r,y+(300-239)*r);
//руки
txLine(x+(460-460)*r,y+(260-239)*r,x+(430-460)*r,y+(270-239)*r);
txLine(x+(460-460)*r,y+(280-239)*r,x+(430-460)*r,y+(270-239)*r);
//ноги
txLine(x+(460-460)*r,y+(300-239)*r,x+(450-460)*r,y+(330-239)*r);
txLine(x+(460-460)*r,y+(300-239)*r,x+(480-460)*r,y+(360-239)*r);
//Доп
txLine(x+(450-460)*r,y+(330-239)*r,x+(460-460)*r,y+(350-239)*r);
//голова
txCircle (x, y, 13*r);
//ПЛАЩ
txSetColor(TX_WHITE);
txSetFillColor(TX_RED);
POINT plach[5] = {{x+(460-460)*r,y+(260-239)*r},{x+(510-460)*r,y+(300-239)*r},{x+(500-460)*r,y+(320-239)*r},
                    {x+(460-460)*r,y+(290-239)*r},{x+(460-460)*r,y+(260-239)*r}};
txPolygon (plach, 5);

}
void sman2(int x, int y, double r)
{
//ПЛАЩ
txSetColor(TX_WHITE);
txSetFillColor(TX_RED);
POINT plach[3] = {{460,255},{440,300},{480,300}};
txPolygon (plach, 3);
//----
txSetColor(TX_WHITE);
txSetFillColor(RGB(64,128,128));
//туловище
txLine(x+(460-460)*r,y+(250-239)*r,x+(460-460)*r,y+(300-239)*r);
//руки
txLine(460,260,414,287);
txLine(460,260,507,290);
//ноги
txLine(x+(460-460)*r,y+(300-239)*r,x+(450-460)*r,y+(330-239)*r);
txLine(x+(460-460)*r,y+(300-239)*r,x+(480-460)*r,y+(360-239)*r);
//Доп
txLine(x+(450-460)*r,y+(330-239)*r,x+(460-460)*r,y+(350-239)*r);
//голова
txCircle (x, y, 13*r);

}
void ZLODEY()
{
//плащ
txSetColor(RGB(154,154,154));
txSetFillColor(TX_GRAY);
POINT plzlo[4] = {{156,250},{127,315},{188,315},{156,250}};
txPolygon (plzlo, 4);

txSetColor(RGB(154,154,154));
txSetFillColor(RGB(64,128,128));
//голова
txCircle(156,230,15);
//туловище
txLine(156,245,156,311);
//руки
txLine(156,260,77,241);
txLine(156,260,236,238);
//ноги
txLine(156,310,142,361);
txLine(156,310,185,363);
}
void zlody1()
{
txSetColor(RGB(154,154,154));
txSetFillColor(RGB(64,128,128));
//голова
txCircle(90,146,31);
//тело
txLine(90,177,90,324);
//руки
txLine(90,203,184,207);
txLine(90,225,175,251);
//ноги
txLine(90,324,58,420);
txLine(90,324,132,420);
//плащ
txSetColor(TX_WHITE);
txSetFillColor(RGB(154,154,154));
POINT plzlo1[5] = {{90,177},{23,316},{72,320},{90,278},{90,177}};
txPolygon (plzlo1, 5);
}
void molnya2()
{
txSetColor(TX_BLACK,2);
txSetFillColor(RGB(248,248,7));
POINT molnya1[12] = {{287,137},{361,114},{401,149},{387,155},{432,183},{418,188},
                    {480,241},{377,201},{394,194},{334,170},{354,163},{287,137}};
                    txPolygon (molnya1, 12);
txSetColor(TX_BLACK,2);
txSetFillColor(RGB(248,248,7));
POINT molnya2[12] = {{284,404},{359,422},{400,395},{384,391},{433,371},{416,367},
                    {480,328},{378,356},{393,361},{329,379},{351,386},{284,404}};
                    txPolygon (molnya2, 12);

}
void shield()
{
txSetColor(TX_GRAY);
txArc (481, 121, 587, 504, 90, 180);
}
void luch()
{
txSetColor(TX_RED,3);
txLine(565,340,90,212);
}
void dialogzs()
{
drawFon();
tupman(460,239,1);
ZLODEY();
drawDialog(156,180, "Я всё тут уничтожу!");
txSleep(1200);
drawDialog(460,180, "Хах! Ты так думаешь?");
txSleep(1200);
drawDialog(156,180, "Кто ты!?");
txSleep(1200);
drawDialog(460,180, "Тот кто тебя победит!");
}


void chastone()
{
    Sman(618,284,1.8);
    zlody1();
}









int main()
{

int xobl1=900;
int xobl2=800;
int xSamolet=689;
int ySamolet=263;
double rSamolet=1;
int win[100];
int Yman=239;
int rText=1;
int rText2=100;

txCreateWindow(800,600);

while (rText < 100)
{
    txBegin();
    txSetColor(TX_WHITE);
    txSetFillColor(TX_BLACK);
    txRectangle(0,0,800,600);
    txSelectFont("Times", rText);
    txDrawText(0,0,800,600, "СХВАТКА...");
    rText=rText+1;
    txSleep(50);
    txEnd();
}



for (int n=0; n<2; n++)
{
    while (xobl1>-300)
    {
    scene1();
    drawTuchi(xobl1,30);
    xobl1=xobl1-20;
    tucha2(xobl2,359);
    xobl2=xobl2-20;
    drawSamolet(xSamolet, ySamolet, rSamolet);
    txSleep(40);
    }
xobl1=900;
xobl2=800;
}
scene2();
txSleep(500);
scene3();
txSleep(500);

xSamolet=0;
ySamolet=0;
rSamolet=0.1;

for (int i=0; i<100; i++)
{
    win[i]=random(0,100);
}

while (xSamolet<330)
    {
    txBegin();
    CityFon();
    //первый ряд
    house(35,170,160,300,win);
    house(200,170,100,300,win);
    house(320,70,220,400,win);
    house(560,150,100,320,win);
    house(670,20,100,450,win);
    //второй ряд
    house(25,270,190,300,win);
    house(220,295,130,275,win);
    house(360,230,190,340,win);
    house(560,230,130,340,win);
    house(695,230,100,340,win);


    drawSamolet(xSamolet, ySamolet, rSamolet);
    xSamolet=xSamolet+10;
    ySamolet=ySamolet+3;
    rSamolet=rSamolet+0.01;
    txEnd();
    txSleep(40);
    }

txSleep(2000);


while (ySamolet<800 and Yman<800)
    {
    txBegin();
    drawFon();
    drawSamolet(440, Yman+25, 1);
    ySamolet=ySamolet+5;
    Sman(460,Yman,1);
    Yman=Yman+5;
    txEnd();
    }
dialogzs();
txSleep(2000);


drawFon();

chastone();
txSleep(2000);
molnya2();
txSleep(2000);
shield();
txSleep(1200);

drawFon();

chastone();
txSleep(2000);
luch();
drawDialog(156,180, "НЕЕТ!!!");
txSleep(2000);

while (rText2 > 0)
{
    txBegin();
    txSetColor(TX_WHITE);
    txSetFillColor(TX_BLACK);
    txRectangle(0,0,800,600);
    txSelectFont("Times", rText2);
    txDrawText(0,0,800,600, "THE END!");
    rText2=rText2-1;
    txSleep(50);
    txEnd();
}

return 0;
}

