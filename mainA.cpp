#include <iostream>
#include <fstream>
#include <cstdlib>

using namespace std;

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

// zwolnij pamięć
delete [] szereg;

return 0;
}