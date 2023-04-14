#include <graphics.h>

int main()
{
    int gd = DETECT, gm;
    initgraph(&gd, &gm, "");
    //For M
 line(50,50,50,90);
 line(50,50,60,70);
 line(70,50,60,70);
 line(70,50,70,90);
  //For I
    line(80,50,80,90);
    line(75,50,85,50);
    line(75,90,85,90);

    //For R
    line(100,50,100,90);
    line(100,50,120,50);
    line(120,50,120,70);
    line(100,70,120,70);
    line(100,70,120,90);

    //For A
    line(140,50,130,90);
    line(140,50,150,90);
    line(135,70,145,70);

    //For Z
    line(160,50,180,50);
    line(160,90,180,50);
    line(160,90,180,90);

    //For C
    line(50,120,50,150);
    line(50,120,65,120);
    line(50,150,65,150);

    //For S
    line(80,120,95,120);
    line(80,120,80,135);
    line(80,135,95,135);
    line(95,135,95,150);
    line(80,150,95,150);

    //For E
    line(110,120,110,150);
    line(110,120,125,120);
    line(110,135,125,135);
    line(110,150,125,150);

    //For 2
    line(140,120,155,120);
    line(155,120,155,135);
    line(155,135,140,135);
    line(140,135,140,150);
    line(140,150,155,150);

    //For 0
    line(170,120,170,150);
    line(170,120,185,120);
    line(185,120,185,150);
    line(170,150,185,150);

    //For 0
    line(200,120,200,150);
    line(200,120,215,120);
    line(215,120,215,150);
    line(200,150,215,150);


    //For 1
    line(230,120,230,150);

    //For 0
    line(245,120,245,150);
    line(245,120,260,120);
    line(260,120,260,150);
    line(245,150,260,150);

    //For 1
    line(275,120,275,150);

    //for 9
    line(290,120,290,135);
    line(290,120,305,120);
    line(305,120,305,150);
    line(290,135,305,135);

    //For 1
    line(315,120,315,150);

    //For 8
    line(330,120,330,150);
    line(350,120,350,150);
    line(330,120,350,120);
    line(330,135,350,135);
    line(330,150,350,150);

    //For 1
    line(365,120,365,150);

   //For HOUSE
   setcolor(CYAN);
   setfillstyle(SOLID_FILL,CYAN);
    rectangle(80,270,300,380);
    floodfill(81,271,CYAN);


    //For DOOR
    setcolor(WHITE);
    setfillstyle(SLASH_FILL,WHITE);
    rectangle(95,320,125,380);
    floodfill(110,350,WHITE);

    //For WINDOW
  setcolor(BROWN);
  setfillstyle(SOLID_FILL,BROWN);
    rectangle(190,320,250,350);
    floodfill(191,321,BROWN);

    //FOR SHED
    setcolor(CYAN);
    line(300,270,270,200);
    line(110,200,270,200);

    setcolor(CYAN);
    setfillstyle(HATCH_FILL,CYAN);
    line(80,270,110,200);
    line(110,200,140,270);
    floodfill(110,235,CYAN);
    setcolor(BLACK);
    line(140,270,140,380);




    setcolor(WHITE);
    setfillstyle(SOLID_FILL,WHITE);
    rectangle(70,380,140,390);
    floodfill(71,381,WHITE);
    rectangle(140,380,310,390);
    floodfill(141,381,WHITE);


    /* for (int i=625;i>=-100; i--){
    outtextxy(i,400,"HOUSE");
    delay(30);
}*/



     getch();
    closegraph();
    return 0;


    }
