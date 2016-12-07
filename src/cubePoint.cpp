#include"../include/cubePoint.h"
#include<cstdio>
void CubePoint::printPoint()
{
	Cur cur;
	cur.saveCur();
	cur.moveCur(x,y);
	switch(color)
	{
		 case BLACK     :printf("\033[40;30m  \033[0m");break;
		 case RED       :printf("\033[41;31m  \033[0m");break;
		 case GREEN     :printf("\033[42;32m  \033[0m");break;
		 case YELLOW    :printf("\033[43;33m  \033[0m");break;
		 case BLUE      :printf("\033[44;34m  \033[0m");break;
		 case PURPLE    :printf("\033[45;35m  \033[0m");break;
		 case DEEP_GREEN:printf("\033[46;36m  \033[0m");break;
		 case WHITE     :printf("\033[47;37m  \033[0m");break;
		 case CLEAR     :printf("\033[8m  ");
		 default:
		 break;
	}
	cur.resumeCur();
}
/*
int main()
{
	CubePoint p;
	system("clear");
	p.setLocate(3,3);
	p.setColor(YELLOW);
	p.printPoint();
	return 0;
}
*/
