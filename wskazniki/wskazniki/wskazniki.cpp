#include <iostream>
#include <ctime>
using namespace std;
int main()
{
	srand(time(NULL));
	const int N = 15;
	double tab[N];
	for (int i = 0; i < N; i++)
	{
		*(tab + 1) = rand() % 1000;
	  cout << *(tab+1) << endl;
	}

	while (1);
}