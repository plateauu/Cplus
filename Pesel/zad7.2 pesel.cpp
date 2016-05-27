#include <iostream>
using namespace std;

int main(){ 

unsigned long long int pesel;

	cout << "Podaj PESEL: \n";
	cin>>pesel;
	
	//sprawdzanie dlugosci ciagu. Pesel ma 11 cyfr
	
	int d = 0;
	unsigned long long int dlugosc = pesel;
	while (dlugosc != 0)
	{
		dlugosc /= 10;
		d++;
	}
	if (d != 11) 
	{
		cout << "PESEL musi miec 11 cyfr\n" << d;
		return 0;
	}
	
	// poprawnosc numeru pesel na podstawie wzoru (a+3b+7c+9d+e+3f+7g+9h+i+3j+k)%10==0
	//											   0  1  2 3  4 5   6  7 8  9 10
	
	int tablica[10];
	long long int krotki_pesel = pesel;
	for ( int i = 10; i >= 0; i-- )
	{
		tablica[i] = krotki_pesel%10;
		krotki_pesel /= 10;
	}

	int pesel_test = (
	tablica[0]+
	tablica[1]*3+
	tablica[2]*7+
	tablica[3]*9+
	tablica[4]+
	tablica[5]*3+
	tablica[6]*7+
	tablica[7]*9+
	tablica[8]+
	tablica[9]*3+
	tablica[10])%10;
	
	if (pesel_test != 0)
	{
		cout<<"Niepoprawna wartosc kontrolna";
		return 0;
	}
		
	//sprawdzamy p³ec
	
	int plec = (pesel / 10)%2;
	if (plec == 0) 
	{
		cout << "kobieta\n";
	}
	else 
	{
		cout << "mezczyzna\n";
	}
	
	// Data urodzenia 
	// Wypisze datê urodzenia zakodowan¹ w PESELu w formacie DD.MM.RRRR. Dla dnia i miesi¹ca mniejszych od 10 nale¿y u¿yæ zera wiod¹cego, np. zamiast "5.1.2000" program wyœwietli "05.01.2000"
	if (tablica[2]==8 || tablica[2]==9)
	{
		cout << tablica[4] << tablica[5] << "." << tablica[2] - 8 << tablica[3] << ".18" <<tablica[0]<<tablica[1];
	}
	else if (tablica[2]==0 || tablica[2]==1)
	{
		cout << tablica[4] << tablica[5] << "." << tablica[2] << tablica[3] << ".19" <<tablica[0]<<tablica[1];
	}
	else if (tablica[2]==2 || tablica[2]==3)
	{
		cout << tablica[4] << tablica[5] << "." << tablica[2] - 2 << tablica[3] << ".20" <<tablica[0]<<tablica[1];
	}
	else if (tablica[2]==4 || tablica[2]==5)
	{
		cout << tablica[4] << tablica[5] << "." << tablica[2] - 4 << tablica[3] << ".21" <<tablica[0]<<tablica[1];
	}  	
	else if (tablica[2]==6 || tablica[2]==7)
	{
		cout << tablica[4] << tablica[5] << "." << tablica[2] - 6 << tablica[3] << ".22" <<tablica[0]<<tablica[1];
	}	
return 0;

}
