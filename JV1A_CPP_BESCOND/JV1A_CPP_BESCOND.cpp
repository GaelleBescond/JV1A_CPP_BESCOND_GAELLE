#include <iostream>
#include <string>
#include <vector>
#include "Lieu.h"
#include "Lieu.cpp"
using namespace std;

//Note: une classe personnage aurait été sûrement pratique pour stocker l'endurance et le lieu actuel

int main(){

    int lieuActuel = 0;
    int stamina = 100;
    string choix = "";
    string choixDestination = " ";

    Lieu * lieu0 = new Lieu("nulle part", 0, "c'est vide", 1, true);

    /*
    Lieu lieu1 = (string name = "Paris", int ranking = 1, string description = "ville de merde", int difficulty = 10, list<int> destinations = { 3,2 });
    Lieu lieu2 = (string name = "Rennes", int ranking = 2, string description = "La plus belle ville du monde", int difficulty = 1, list<int> destinations = { 3,1 });
    Lieu lieu3 = (string name = "Quimper", int ranking = 3, string description = "C'est pas fou mais c'est la Bretagne", int difficulty = 5, list<int> destinations = { 1,2 });
    */

    vector<class Type> lieux(&lieu0);

    cout << "Vous êtes " << lieu0.getName() << lieu0.getDescription() << endl;
    //Ca marchait avant d'aborder l'exercice 3
    while (choixDestination != lieu2.getName() && choixDestination != lieu3.getName()) {
        std::cout << "Ou voulez-vous aller?" << std::endl;
        std::cout << lieu2.getName() << " ou " << lieu3.getName() << std::endl;
        std::cin >> choixDestination;
    }
    lieuActuel = deplacement(stamina, choixDestination);


    if (lieux[lieuActuel].checkRefuge() || lieux[lieuActuel].checkRested()) {
        cout << "Voulez vous vous reposer?";
        cin >> choix;
        if (choix == "Oui") {
            repos(stamina);
        }
    }
}

void deplacement(int stamina, choix) {
    cout << "Vous allez vers " << choix << endl;
    //stamina -= diffi destination +diffi départ;

}


void campement() {
    //utiliser pointeurs
    //appliquer .changeDifficulty()
    //appliquer .addRefuge()

}

int repos(int stamina) {
    stamina += 50;
    if (stamina > 100) {
        stamina = 100;
    }
    return stamina;
    cout << "Vous vous reposez";
    //lieux[lieuActuel].hasRested();
}


//Zone de test
/*




*/
