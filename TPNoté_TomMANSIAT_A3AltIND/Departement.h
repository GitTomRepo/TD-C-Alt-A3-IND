#pragma once
#include <string>
#include <vector>
using namespace std;

class Departement {
	private:
		string nom;
		int codePostal;
		vector<Ville*> listVilles;

	public:
		Departement(string nom, int codePostal);
		void ajouterVille(Ville* v);

		friend std::ostream& operator<<(std::ostream& out, const Departement&);
};