#pragma once
#include <string>
using namespace std;

class Ville {
	private:
		string nom;
		int nombreHabitant;

	public:
		Ville(string nom, int nombreHabitant);
		friend std::ostream& operator<<(std::ostream& out, const Ville &);

		void operator+ (int hab) {
			nombreHabitant += hab;
		}
		void operator- (int hab) {
			nombreHabitant -= hab;
		}
};