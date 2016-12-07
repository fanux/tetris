#include "../include/score.h"
#include "../include/cur.h"
#include "../include/cubePoint.h"

void Score::printMessage()
{
   Cur c;
   CubePoint p;

   p.setLocate(2,19);
   p.setColor(WHITE);
   p.printPoint();
   
   c.saveCur();
   c.moveCur(2,21);
   cout<<"player: "<<player;
   c.resumeCur();

   p.setLocate(4,19);
   p.setColor(GREEN);
   p.printPoint();

   c.saveCur();
   c.moveCur(4,21);
   cout<<"score : "<<score;
   c.resumeCur();

}
