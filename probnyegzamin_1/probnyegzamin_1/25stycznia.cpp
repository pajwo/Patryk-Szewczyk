#include <iostream>
#include <string>
using namespace std;

struct lekarz
{
	string imie, nazwisko;
	lekarz * lewy, prawy;
	wizyta * wizyty;

};
struct wizyta {
	string imie, nazwisko;
	string data_wizytyA;
	wizyta * next,
		*prev;
};

int main()
{

}