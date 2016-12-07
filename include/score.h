#ifndef SCORE_H
#define SCORE_H
#include <iostream>
#include <string>
using namespace std;

class Score{
    string player;
    int score;
	

public:
    Score(){player = "viMer";score = 0;};
    void setName(string name){player = name;};
    void setScore(int s){score = s;};

    void printMessage();
};

#endif
