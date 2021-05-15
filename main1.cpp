#include <iostream>
#include "Joueur.h"
#include "Lettre.h"
#include "Tentative.h"
using namespace std;

int main (){
	string nom ;
	cout << "veuillez entrer votre Nom :"<<endl;
	cin >> nom ;
	Joueur l(nom);


	return 0;

}
