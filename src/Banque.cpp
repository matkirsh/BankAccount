#include "../include/Banque.h"
#include <string>

using namespace std;

Banque::Banque()
{
    //ctor
}

Banque::~Banque()
{
    //dtor
}

Banque::Banque(int nbct){
    this->nbct = nbct;
    nbc = 0;
}

Banque::Banque(const Banque& banque){
    nbct = banque.nbct;
    nbc = banque.nbc;
}

void Banque::ajouteCompte(string cpt, float soldeCpt, float decouvMax)
{
    comptes[nbc] = Compte(cpt, soldeCpt, decouvMax);
}

void Banque::supprimeCompte(string nomCompte){
    for (int i = 0; i < nbc; i++){
      if (nomCompte == comptes[i]->getNomCompte()){
        for (int j = i; j < nbc; j++){
          compte[j] = compte[j+1];
        }
      }
    }
}
