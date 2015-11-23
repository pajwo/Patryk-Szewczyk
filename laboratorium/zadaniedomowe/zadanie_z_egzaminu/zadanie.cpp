#include<iostream>
#include<fstream>
#include<string>

using namespace std;


void liczenie(string nazwa_pliku, int wystapienia[]) 
{
	for (int i = 0; i <= ('z' - 'a'); i++)
	{
		wystapienia[i] = 0;
	}
	char litera;
	ifstream plikinput;
	plikinput.open(nazwa_pliku);
	while (!plikinput.eof()) 
	{
		litera = plikinput.get();
		if (plikinput.good()) 
		{
			if (litera >= 'a' && litera <= 'z') 
			{
				wystapienia[litera - 'a']++;
			}
			else if (litera >= 'A' && l <= 'Z')
			{
				wystapienia[l - 'A']++;
			}
		}
	}
	plikinput.close();
}

int main()
{
	int wystapienia['z' - 'a'];

	liczenie("input.txt", wystapienia);
	for (char i = 'a'; i <= 'z'; i++) {
		cout << i << " - " << wystapienia[i - 'a'] << endl;
	}
	return 0;
}

