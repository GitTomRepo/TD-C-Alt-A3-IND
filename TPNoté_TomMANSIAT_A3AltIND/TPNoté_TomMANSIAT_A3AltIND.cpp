#include <iostream>
#include <string>

#include "Ville.h"
#include "Departement.h"

using namespace std;

// CLASS : VILLE
Ville::Ville (string nom, int nombreHabitant) {
	this->nom = nom;
	this->nombreHabitant = nombreHabitant;
}

ostream& operator<<(ostream& out, const Ville& v) {
	out << v.nom << ": " << v.nombreHabitant << endl;
	return out;
}


// CLASS : DEPARTEMENT
Departement::Departement(string nom, int codePostal) {
	this->nom = nom;
	this->codePostal = codePostal;
}

void Departement::ajouterVille(Ville* v) {
	this->listVilles.push_back(v);
}

ostream& operator<<(ostream& out, const Departement & d) {
	out << d.nom << ": " << d.codePostal << endl;

	for (int i = 0; i < d.listVilles.size(); i++) {
		out << *d.listVilles[i];
	}

	return out<<endl;
}

int main()
{
	// Création des objets
	Departement d = Departement("Haut de Seine", 9200);
	Ville V1 = Ville("Suresnes", 10);
	Ville V2 = Ville("Saint Cloud", 40);

	// Ajout des villes dans le département
	d.ajouterVille(&V1);
	d.ajouterVille(&V2);

	// Avant changements
	cout << d;

	// Après changements
	V1 + 100;
	V2 - 10;
	cout << d;
}
