#include "Tentative.h"
#include <iostream>
#include <string>
//#include "Joueur.h"
using namespace std;


Tentative::Tentative(string mot,int nb=0 ) : Nbessais(nb)
{
	Nbessais++;

}
/////////////////////////////
Tentative::~Tentative()
{

}
/////////////////////////////
/*Joueur Tentative::getuser()const{
	return user;
}
/////////////////////////////
void Tentative::setuser(Joueur j){
	user=j;
}*/
/////////////////////////////
int Tentative::getNbessais(){
	return Nbessais;
}
/////////////////////////////
bool Tentative::controlesaisie(string mot){
	if (mot.length() == motsaisi.length()){
	
	i=0;
	do {
		i++;	
	}
	while ( mot[i-1].comparer(motsaisi[i-1])==true && i<mot.length() ) 
	
} else {
	cout<<"Nombre de lettres incompatible !"<<endl;
   }
   
   if (i==mot.length()){
   	return true;
   }
}

/////////////////////////////
void Tentative::setmotsaisi(string mot){
	do {
		cout<<"Saisir votre essai numéro:"<< Nbessais+1 <<endl;
		cin>>motsaisi;
	}
	while (controlesaisie(mot)==false);
}
/////////////////////////////
string Tentative::getmotsaisi()const{
	return motsaisi;
}


/////////////////////////////


