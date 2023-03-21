#ifndef LIEU_H
#define LIEU_H

#include <iostream>
#include <string>
#include <vector>
#include <list>
using namespace std;

class Lieu {
    protected:
        string _name;
        int _ranking;
        string _description;
        int _difficulty;
        list<int> _destinations;
        bool _refuge;
        bool _rested;
    public:

        Lieu();
        string getName();
        string getDescription();
        int getDifficulty();
        bool checkRefuge();
        bool checkRested();
        void hasRested();
        void changeDifficulty();
        void addRefuge();
};

/*classes filles possibles pour �viter de d�clarer � gogo plein d'attributs:
- montagne => plus difficile
- ville => refuge naturel
- for�t => diff moyenne
etc...

*/

#endif
