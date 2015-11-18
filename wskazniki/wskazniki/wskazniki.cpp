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


int main()
{
	srand(time(NULL));
	const int N = 5;
	double tab[N];
	wypelnij(tab, N);
	wyswietl(tab, N, cout);


		system("pause");
}