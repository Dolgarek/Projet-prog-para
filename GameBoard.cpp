//
// Created by Théo QUEZEL-PERRON on 17/10/2022.
//

#include "GameBoard.h"
#include <filesystem>
#include <utility>

GameBoard::GameBoard(std::string type) {
    std::ifstream file(type+"x"+type+".txt");
    //std::ifstream file("5x5.txt");

    int n, o, s, e;
    if (!file.is_open()) {
        throw std::invalid_argument("Erreur lors de l'ouverture du fichier!");
    }
    std::queue<TetravexPiece> pieces;
    this->pieces = pieces;
    file >> col >> row;
    this->size = col*row;
    //this->plateau = [this->col];
    while (file >> o >> n >> e >> s) {
        TetravexPiece T = TetravexPiece(o, n, e, s);
        pieces.push(T);
    }
}

bool GameBoard::backtracking(std::vector<TetravexPiece> Tboard, std::vector<TetravexPiece> Thand, int x, int y) {

    std::vector<TetravexPiece> board = std::move(Tboard);
    std::vector<TetravexPiece> hand = std::move(Thand);
    while (!hand.empty()) {
        std::vector<TetravexPiece> toBeTested;
        if (!x && !y) {
            board.push_back(toBeTested.front());
            board.
        }
        if (y > 0) {
            if (x != 0) {
                toBeTested.push_back(hand.front());

            }
            //Tp.push_back(hand.at)
        }
        if (canBePlaced(x, y, toBeTested))
    }
    return false;
}

bool GameBoard::canBePlaced(int x, int y, std::vector<TetravexPiece> Tp) {
    bool result = false;
    if (x==0 && y==0) return true;
    if (y > 0) {
        if (x > 0) {
            Tp.at(0).getWest() != Tp.at(1).getEast() ? NULL
            : Tp.at(0).getNorth() == Tp.at(2).getSouth() ? result = true : result = false;
            return result;
        }
        Tp.at(0).getNorth() == Tp.at(1).getSouth() ? result = true : result = false;
        return result;
    }
    if (x > 0) {
        Tp.at(0).getWest() != Tp.at(1).getEast() ? NULL : result = true;
        return result;
    }
    return result;
}