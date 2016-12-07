#ifndef CUR_H_
#define CUR_H_

#include<iostream>
using namespace std;

class Cur{
public:
		void saveCur();				//保存光标位置
		void moveCur(const int x,const int y);	//移动光标位置到（x,y）坐标
		void resumeCur();			//恢复光标位置
};
#endif

