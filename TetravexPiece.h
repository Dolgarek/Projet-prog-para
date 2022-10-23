//
// Created by Théo QUEZEL-PERRON on 17/10/2022.
//

#include <vector>

#ifndef PROJET_TETRAVEX_H
#define PROJET_TETRAVEX_H


class TetravexPiece {

private:
public:
    explicit TetravexPiece(int o, int n, int e, int s);

private:
public:
    const std::vector<int> &getValue() const;

    void setValue(const std::vector<int> &value);

    int getNorth();

    int getSouth();

    int getEast();

    int getWest();


private:
    std::vector<int> value;
    bool tracked;
public:
    bool isTracked() const;

    void setTracked(bool tracked);


};


#endif //PROJET_TETRAVEX_H
