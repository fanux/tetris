#include "graph.h"
#include "rand.h"
#include "score.h"

enum MARK{
	GAME_STOP = -1,
	GAME_PAUSE = 0,
	GAME_RUN = 1
};


class Game
{
private:
    int m_penal[24][17];
	color m_color[24][17];///////////////////////
    Context* m_graph;

	Context* nextGraph;/////////////////
	MARK mark;//////////////////////////
public:
    int x;
    int y;//当前方块的位置，方块移动或者旋转成功后才可以设置这个值

private:
    Score s;
private:
    //恢复设置（方块会探索下一个位置是否合法，不合法需恢复面板）
    bool recoverPenal();
    //是否着陆(是否碰到下边)
    bool isAttachBottom();
    //是否碰到左边
    bool isAttachLeft();
    //是否碰到右边
    bool isAttachRight();
    //随机获取方块形状
    char getShape();
    //用方块数组给面板数组赋值
    bool setPenal();
    //方块动过后要把遗留面板信息擦除
    bool erasePenal();
public:
    Game();

	~Game();

    //随机创建方块的方法
    void createCube();
    //移动的方法,移动的过程中对m_penal的改变
    void move(int dir);
    //旋转的方法。。。
    void roll();
    //方块停止
    void stop();
    //擦除满行
    void erase();
    //擦除完上面的图形整块坠落
    void down(int level);

	void printNextCube(Context* m_graph);
	void gameInit();

MARK getMark();
void setMark( MARK );

void printHelep();

};
