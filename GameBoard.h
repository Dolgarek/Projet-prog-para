//
// Created by Théo QUEZEL-PERRON on 17/10/2022.
//

#ifndef PROJET_GAMEBOARD_H
#define PROJET_GAMEBOARD_H

#include "TetravexPiece.h"
#include <iostream>
#include <fstream>
#include <queue>
#include <algorithm>

class GameBoard {

public:
    virtual ~GameBoard() {};

    GameBoard(std::string type);

    bool backtracking(std::vector<TetravexPiece> Tboard, std::vector<TetravexPiece> Thand, int x, int y);

    int col;
    int row;
    int size;
    std::queue<TetravexPiece> pieces;
    std::vector<std::vector<TetravexPiece> > result;
    TetravexPiece** plateau;

    static bool canBePlaced(int x, int y, std::vector<TetravexPiece> Tp);
};


#endif //PROJET_GAMEBOARD_H
