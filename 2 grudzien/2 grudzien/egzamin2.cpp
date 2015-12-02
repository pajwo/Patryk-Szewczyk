#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>
using namespace std;

const string PLIK = "Barnsley.data";
//const int MAX = 10000;
const int x = 10000;
const int y = 10000;

double p1 = 85;
double p2 = 7;
double p3 = 7;
double p4 = 1;

int main()
{
    srand(time(NULL));

    double tab[x];
	for (int i = 0;i <= x;i++) 
	{
		int ktora_funkcja = rand() % 100;
		ktora_funkcja -= p1;

		if (ktora_funkcja < 0)
			tab[i] = 0.85*tab[i - 1] + 0.04*tab[j 
	}



	double tab[y];



}