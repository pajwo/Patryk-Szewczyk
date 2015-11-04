/*

Program 1: Zapisuje do pliku N losowych liczb naturalnych.

#include <iostream>
#include <time.h>
#include <fstream>
using namespace std;

bool parametry(string path, int dol, int gora);

int main()
{
	    srand(time(NULL));
		string path = "s.txt";
		const int N = 10;
		int dol = 20;
		int gora = 40;
		int tab[N];
		ofstream plik;
		plik.open(path);
		if (!plik)
			return false;
		if (plik)
			for (int i = 0;i < N;i++)
			{
				tab[i] = rand() % gora + dol;
				plik <<tab[i]<< endl;
				
	        }
		plik.close();
	system("pause");
}

*/

/*Program 2: Funkcja, która liczy œredni¹ liczb zawartych w pliku*/

#include <iostream>
#include <time.h>
#include <fstream>
using namespace std;

double avg;

int main()
{

	ifstream plik;
	plik.open("w.txt");
		if (!plik)
			return false;
	if(plik)

}
