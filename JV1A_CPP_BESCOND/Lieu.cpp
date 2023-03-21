#ifndef LIEU_CPP
#define LIEU_CPP


#include "Lieu.h"
#include <iostream>
#include <string>
#include <vector>
#include <list>
using namespace std;

Lieu::Lieu() : _name(), _ranking(), _description(), _difficulty(), _refuge() {
    list<int> _destinations = { _ranking - 1, _ranking + 1 };
    _rested = false;
}

string Lieu::getName() {
    return this->_name;
}

string Lieu::getDescription() {
    return this->_description;
}


int Lieu::getDifficulty() {
    return _difficulty;
}

bool Lieu::checkRefuge() {
    return _refuge;
}

bool Lieu::checkRested() {
    return _rested;
}

void Lieu::hasRested() {
    _rested = false;
}

void Lieu::changeDifficulty() {
    _difficulty = _difficulty / 2;
}

void Lieu::addRefuge() {
    _refuge = true;
    _description += "Il y a un campement dans ce lieu.\n";
}

#endif
