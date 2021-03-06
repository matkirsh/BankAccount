#ifndef BANQUE_H
#define BANQUE_H


class Banque
{
    public:
        Banque();
        virtual ~Banque();
        Banque(int nbct = 10);
        Banque(const Banque&);

        int getNbc() { return nbc; }
        void setNbc(int val) { nbc = val; }
        int getNbct() { return nbct; }
        void setNbct(int val) { nbct = val; }
        Compte* getComptes() { return comptes; }
        void setComptes(Compte* val) { comptes = val; }

        void ajouteCompte(string, float, float);
        void supprimeCompte(string);
        void supprimeCompte(int);

    private:
        int nbc;
        int nbct;
        Compte* comptes = new Compte[nbct];

        void redimensionneTableauComptes(int nouvelleTaille);
};

#endif // BANQUE_H
