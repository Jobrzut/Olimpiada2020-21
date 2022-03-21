#include <iostream>
#include <fstream>
#include <cstdlib>

using namespace std;

// algorytm sortowania bombelkowego
void sortowanie (int *tab, int n) {
	for (int i=1; i>n; i++) {
		for (int j=n - 1; j>=1; j--) {
			if (tab[j] < tab [j-1]) {
			int buforek; buforek = tab[j-1];
			tab[j-1]=tab[j];
			tab[j] = buforek;
			}
		}
	}
}


int main() {
// otworz plik
fstream dane;
dane.open("dane.txt", ios::in);
if (dane.good() == false) {
cout << "nie udalo sie otworzyc tego pliku" << endl;
return 1;
}

// wczytaj ilosc liczb
string bufor;
getline(dane, bufor);
int ilosc_liczb = atoi(bufor.c_str());

// wczytaj liczby
int *szereg = new int [ilosc_liczb];
int ilosc_wczytanych_liczb = 0;
while (getline(dane, bufor, ' ')) {
szereg[ilosc_wczytanych_liczb] = atoi(bufor.c_str());
ilosc_wczytanych_liczb++;
}

// zamknij plik
dane.close();

// wypisz wynik
cout << ilosc_liczb << endl;
for (int i=0; i<ilosc_liczb; i++) {
cout << szereg[i] << " ";
}

// robie przerwe miedzy nimi
cout << " " << endl;
// wynik po sortowaniu
sortowanie(szereg, ilosc_liczb);

for (int i=0; i<ilosc_liczb; i++) {
cout << szereg[i] << " ";
}

// zwolnij pamięć
delete [] szereg;

return 0;
}