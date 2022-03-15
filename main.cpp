#include <iostream>
#include <fstream>
#include <cstdlib>
#include <string>

using namespace std;

int i;

int main() {
	
	fstream dane;
	dane.open("dane.txt", ios::in);
	string linia;
	int nr_lini=1;
	int ilosc_liczb;
	
	if (dane.good() == false) {
		cout << "nie udalo sie otworzyc tego pliku" << endl;
	}
	
		int *szereg = new int [ilosc_liczb];
	
	while (getline(dane, linia)) {
		
		switch(nr_lini) {
			case 1: ilosc_liczb = atoi(linia.c_str()); break;
			case 2: for (i=0; i>ilosc_liczb; i++) {szereg[i] = atoi(linia.c_str()); } break;
		}
		
		nr_lini++;
	}
	
	dane.close();
	
	cout << ilosc_liczb << endl;
	cout << szereg[i] << "";	
	
	delete [] szereg;
}