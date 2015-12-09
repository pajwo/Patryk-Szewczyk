// ConsoleApplication2.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>


using namespace std;

class Ciastko {
	private:
		char* rodzaj;
		int mojNumer;
		int identyfikatorCiastka;
		static int licznikCiastek;
	public:
		Ciastko() {
			this->licznikCiastek++;
			this->rodzaj = "maslane";
			this->mojNumer = 1000 + licznikCiastek;
			cout << "Konstruktor domyœlny: " << this->rodzaj << ", ID: " << mojNumer <<", licznik: " << this->licznikCiastek << "\n";
		}
		Ciastko(char* input_rodzaj) {
			this->licznikCiastek++;
			this->rodzaj = input_rodzaj;
			this->mojNumer = 1000 + licznikCiastek;
			cout << "Konstruktor z parametrem: " << this->rodzaj << ", ID: " << mojNumer << ", licznik: " << this->licznikCiastek << "\n";
		}
		~Ciastko() {
			this->licznikCiastek--;
			cout << "Destruktor: " << this->rodzaj << ", ID: " << mojNumer << ", licznik: " << this->licznikCiastek << "\n";
		}
};

int Ciastko::licznikCiastek = 0;

int main() {

	Ciastko ciastko_statyczne_bez_parametru;
	Ciastko* ciastko_dynamiczne_bez_parametru = new Ciastko();
	//delete ciastko_dynamiczne_bez_parametru;

	Ciastko ciastko_statyczne_z_parametrem("malinowe");
	Ciastko* ciastko_dynamiczne_z_parametrem = new Ciastko("malinowe");
	//delete ciastko_dynamiczne_z_parametrem;

	ciastko_statyczne_bez_parametru = ciastko_statyczne_z_parametrem;
	cout << ciastko_statyczne_bez_parametru->mojNumer;

	Ciastko* ciastka[5];
	
	for (int i = 0; i < 5; i++)
	{
		ciastka[i] = new Ciastko("czekoladowe");
	}
	for (int i = 0; i < 5; i++)
	{
		delete ciastka[i];
	}

	return 0;

}

