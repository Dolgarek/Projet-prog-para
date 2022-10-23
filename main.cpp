//
// Created by Théo QUEZEL-PERRON on 17/10/2022.
//
#include "GameBoard.h"

using namespace std;

int main()
{
    GameBoard *board = new GameBoard("7");
    TetravexPiece* T1,* T2,* T3;
    T1 = new TetravexPiece(1,2,1,3);
    T2 = new TetravexPiece(1,2,1,3);
    T3 = new TetravexPiece(1,2,1,2);
    std::vector<TetravexPiece> VTp;
    VTp.push_back(*T1);
    VTp.push_back(*T2);
    VTp.push_back(*T3);


    std::cout << GameBoard::canBePlaced(0, 2, VTp);
    return 0;
}