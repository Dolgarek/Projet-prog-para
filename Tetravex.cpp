//
// Created by Théo QUEZEL-PERRON on 17/10/2022.
//

#include "TetravexPiece.h"

TetravexPiece::TetravexPiece(int o, int n, int e, int s) {
    std::vector<int> value;
    value.push_back(o);
    value.push_back(n);
    value.push_back(e);
    value.push_back(s);
    this->setValue(value);
    this->setTracked(false);
}

const std::vector<int> &TetravexPiece::getValue() const {
    return value;
}

void TetravexPiece::setValue(const std::vector<int> &value) {
    TetravexPiece::value = value;
}

int TetravexPiece::getNorth() {
    return this->getValue().at(1);
}

int TetravexPiece::getEast() {
    return this->getValue().at(2);
}

int TetravexPiece::getSouth() {
    return this->getValue().at(3);
}

int TetravexPiece::getWest() {
    return this->getValue().at(0);
}

bool TetravexPiece::isTracked() const {
    return tracked;
}

void TetravexPiece::setTracked(bool tracked) {
    TetravexPiece::tracked = tracked;
}
