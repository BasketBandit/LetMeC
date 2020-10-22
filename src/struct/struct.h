#ifndef LETMEC_STRUCT_H
#define LETMEC_STRUCT_H

struct point {
    int x;
    int y;
};

struct line {
    struct point start;
    struct point end;
};

void printLine();
struct line definePoints();
struct line defineLine(int xStart, int xEnd, int yStart, int yEnd);

#endif //LETMEC_STRUCT_H
