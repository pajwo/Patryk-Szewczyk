#include <iostream>
#include <ctime>
using namespace std;


void wypelnij(double *tab, const int N)
{
	
	for (int i = 0; i < N; i++) 
	{
		*(tab + i) = rand() % 50;
	}
}

void wyswietl(double *tab, int N, ostream& plik)
{
	for (int i = 0; i < N; i++)
		plik << *(tab + i) << endl;
}
// Cwiczenie nr 2 - ca³ka
double calka(double a, double b, double dx, double(*pf)(double))
{
	double Pole = 0
		for (double i = a; i <= b; i += dx)
		{

		}
}

//Cwiczenie nr 3

double kwadrat(double x) { return x*x; }
double sinus(double x) { return sin(x);}
double fikusna(double x) { return x*x + 2773 / x;}

//Koniec cwiczenia nr 3

int main()
{
	srand(time(NULL));
	const int N = 5;
	double tab[N];
	wypelnij(tab, N);
	wyswietl(tab, N, cout);


		system("pause");
}

