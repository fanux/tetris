#include "../include/graph.h"
#include <unistd.h>
void Gbase::printG(int color)
{
    int i,j;
    CubePoint p;
    for(i = x; i < x+3; i++)
        for(j = y; j < y+3; j++)
        {
            if(a[i - x][j - y] == 1)
            {
                p.setLocate(i,j);
                p.setColor(color);
                p.printPoint();
            }
        }
}
int Gbase::move(int dir)
{
	switch(dir)
	{
		case DOWN:x++;break;
		case LEFT:y--;break;
		case RIGHT:y++;break;
		default:
				break;
	}
    return 0;
}

int Gbase::roll()
{
    int i,j;
    int b[3][3];
    for(i = 0; i < 3; i++)
        for(j = 0; j < 3; j++)
        {
            b[2-j][i] = a[i][j];
        }
    for(i = 0; i < 3; i++)
        for(j = 0; j < 3; j++)
        {
            a[i][j] = b[i][j];
        }
}


