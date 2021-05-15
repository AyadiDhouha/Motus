#include "Joueur.h"
#include <iostream>
#include<fstream>
#include <string>
using namespace std;

Joueur::Joueur(string a , int i ,int j):score(i),record(j),name(a)
{
	cout<<"construction"<<endl;
	cout<<"votre nom est : "<<name<<"et votre score est :"<<score<<"votre record est : "<<record <<endl;
}

Joueur::~Joueur()
{
	cout<<"destruction"<<endl;
}
string Joueur::setName(string a){
	name=a;
}
string Joueur::getName(){
	return name ;
}
void Joueur::setScore(Tentative t){
	int nbrt;
	nbrt=t.getNbessais;
	for (int i =1;i<=7;i++) {
		if nbrt=i
		score=+7-i+1;
	}
	       
}
int Joueur::getScore(){
	return score ;
}
int Joueur::setRecord(){
	int bestScore;
	ifstream f("best_score.txt");
	
	f>>bestScore;
	ofstream ff("best_score.txt");
	if (score > bestScore){
		ff<<score;
	}
	else{
		ff<<bestScore;
	}
	
}

int Joueur::getRecord(){
	return record ;
}


