#ifndef LETTRE_H
#define LETTRE_H
#include <string>
#include <iostream>
using namespace std;
enum Color { rouge, jaune, blanc };
class Lettre
{   int Position;
    Color Couleur;
    public:
        Lettre(){}
        Lettre(int,Color);
        virtual ~Lettre();
        int getPosition()const;
        Color getCouleur()const;
        void setPosition(int );
        void setCouleur(Color );
        int Comparer(Lettre );


};

#endif // LETTRE_H
