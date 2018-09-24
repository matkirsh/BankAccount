#ifndef COMPTE_H
#define COMPTE_H
#include <string>

using namespace std;


class Compte
{
    public:
        Compte();
        virtual ~Compte();
        Compte(string, float, float);
        Compte(const Compte&);

        int getNumeroCompte() const { return numeroCompte; }
        void setNumeroCompte(int val) { numeroCompte = val; }
        string getNomCompte() const { return nomCompte; }
        void setNomCompte(string val) { nomCompte = val; }
        float getSoldeCompte() const { return soldeCompte; }
        void setSoldeCompte(float val) { soldeCompte = val; }
        float getDecouvertMax() const { return decouvertMax; }
        void setDecouvertMax(float val) { decouvertMax = val; }
        static int getDernierNumeroAttribue() { return numeroAttribue--; }
        void setNumeroAttribue(int val) { numeroAttribue = val; }

        void debiter(float);
        void crediter(float);
        void afficher();

    private:
        int numeroCompte;
        string nomCompte;
        float soldeCompte;
        float decouvertMax;
        static int numeroAttribue;
};

#endif // COMPTE_H
