#include "Compte.h"

int Compte::numeroAttribue = 0;

Compte::Compte()
{
    numeroCompte = numeroAttribue;
    numeroAttribue++;
}

Compte::~Compte()
{

}


void Compte::debiter(float mont)
{
    soldeDebit = soldeCompte - mont;
    if(soldeDebit < -decouvertMax){
        std::cout << "Opération impossible" << std::endl;
    }else{
        soldeCompte = soldeDebit;
    }

}

void Compte::crediter(float mont)
{
    soldeCompte = soldeCompte + mont;
}

void Compte::afficher()
{
    std::cout << "Le compte " << numeroCompte << " a pour nom " << nomCompte << ", son solde est de " << soldeCompte << " et son découvert maximum est de " << decouvertMax << std::endl;
}
