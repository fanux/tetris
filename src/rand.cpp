#include "../include/rand.h"
#include <ctime>
#include <stdlib.h>
#include <iostream>
using namespace std;

//使用随机数的一个错误的方式就是每次都去srand,这样当多次调用很接近时值就会
//一样（和时间关系很大）而srand一次就不存在这个问题了。
Rand::Rand()
{
    srand(unsigned(time(0)));
}

int Rand::randNum(int x,int y)
{
    int randNum;
    double random(double,double);
    randNum = int(random(x,y));
    return randNum;
}

double random(double start,double end)
{
    return start + (end - start)*rand()/(RAND_MAX + 1.0);
}
/*
int main()
{
    Rand a;
    for(int i = 0;i < 50;i++)
    cout<<a.randNum(1,100)<<endl;
}
*/
