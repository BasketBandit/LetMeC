#include <stdio.h>
#include "struct.h"

void printLine() {
    printf("Enter new line points in order \"x_start x_end y_start y_end\".\n");
    struct line line = definePoints();
    printf("X: %d,%d - Y: %d,%d", line.start.x, line.end.x, line.start.y, line.end.y);
}

struct line definePoints() {
    int x1, x2, y1, y2;
    scanf("%d %d %d %d", &x1, &x2, &y1, &y2);
    return defineLine(x1, x2, y1, y2);
}

struct line defineLine(int xStart, int xEnd, int yStart, int yEnd) {
    struct line line;
    line.start.x = xStart;
    line.start.y = yStart;
    line.end.x = xEnd;
    line.end.y = yEnd;
    return line;
}
