#include "Banque.h"

Banque::Banque()
{
    //ctor
}

Banque::~Banque()
{
    //dtor
}

void Banque::ajouteCompte(string cpt, float soldeCpt, float decouvMax)
{
        comptes[nbc] = Compte(cpt, soldeCpt, decouvMax);
}
