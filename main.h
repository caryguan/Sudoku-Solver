#include <stdlib.h>

typedef struct _node{
    int possibleValues[9];
}node;

typedef struct _sudoku{
    node grid[9][9];
}sudoku;

void printHello();
