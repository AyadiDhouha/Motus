#ifndef JOUEUR_H
#define JOUEUR_H
#include <iostream>
#include <string>
using namespace std;



class Joueur
{
	string name;
	int score , record ;
	Tentative t;
	public:
		Joueur(string a, int i=0,int j=0);
		~Joueur();
		string setName (string);
		string getName();
		void setScore(Tentative nbrt);
		int getScore();
		void setRecord();
		int getRecord();
		
	protected:
};

#endif
