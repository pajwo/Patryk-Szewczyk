#include <iostream>
#include <algorithm>
#include <vector>
#include <ctime>

using namespace std;
int n = 20;
vector<char>patryk(int n);

double iloczyn(double x, double y) {
	return x*y;


}

int main()
{
	srand(time(NULL));

	cout << iloczyn(8, 9) << endl;

	int a = 40;
	int b = 60;
	swap(a, b);
	cout << a << ", " << b << endl;

	vector<char>w;
	for (int i = 0; i < n; i++) 
	{	char t = rand() % ('z' - 'a' + 1) + 'a';
		w.push_back(t);
	}

        for (int i = 0; i < n - 1; i++)
		for (int j = 0; j < n - 1; j++)
			if (w[j]>w[j + 1])
				swap(w[j], w[j + 1]);

	    for (int i = 0; i < n; i++)
		  cout << w[i];




	cout << endl;
	system("pause");
}