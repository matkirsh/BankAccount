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

void Banque::supprimeCompte(string cpt)
{
    for (int i(0);i<nbc;i++)
    {
        if (comptes[i]== Compte(cpt))
        {
            for(int j(i+1);j<nbc;j++)
            {
                comptes[j]=comptes[j+1];
            }
        }
    }
}

void Banque::supprimeCompte(int numCpt)
{
    for (int i(0);i<nbc;i++)
    {
        if (comptes[i]==Compte(numCpt))
        {
            for(int j(i+1);j<nbc;j++)
            {
                comptes[j]=comptes[j+1];
            }
        }
    }
}

void redimensionneTableauComptes(int nouvelleTaille)
{
    
}
