#include <iostream>
#include <cstdlib>
#include <stdlib.h>
using namespace std;

int A1 = 0, B1 = 0, C1 = 0;
int A2 = 0, B2 = 0, C2 = 0;
int A3 = 0, B3 = 0, C3 = 0;

void plansza(int &round, int &gamer){
		
		cout << "Kolko i krzyzyk \n\n";
		cout << "\t" << "A" << "    " << "B" << "    " << "C" << "\n";
		cout << "1.\t" << A1 << " _|_" << B1 << "_|_ " << C1 << "\n";
		cout << "2.\t" << A2 << " _|_" << B2 << "_|_ " << C2 << "\n"; 
		cout << "3.\t" << A3 << "  | " << B3 << " |  " << C3 << "\n\n";
		cout << "Runda: " << round << endl;
		cout << "Gracz: " << gamer << endl << endl;
}

void wskazanie(int &gamer){
	bool j = true;
	while (j == true){
			   int i;
			   cout << "Podaj pole w ktore chcesz wstawic " << gamer << endl;
			   cout << "[1] - A1; [2] - B1; [3] - C1" << endl;
			   cout << "[4] - A2; [5] - B2; [6] - C2" << endl;
			   cout << "[7] - A3; [8] - B3; [9] - C3\n" << endl;
			   cin >> i;
			   switch (i){
			   	case 1: {
			   		if (A1 == 0)
					{
					A1 = gamer;
			   		cout << "Wybrales A1" << endl;
			   		j = false;
					break;
					} else { cout << "A1 jest juz zajete, sprobuj ponownie\n" << endl; }
					
				   }
			   	case 2: {
			   		if (B1 == 0)
					{
					B1 = gamer;
			   		cout << "Wybrales B1" << endl;
					j = false;
					break;
					} else {cout << "B1 jest juz zajete, sprobuj ponownie\n" << endl; }
				   }
			    case 3: {
			   		if (C1 == 0)
					{
					C1 = gamer;
			   		cout << "Wybrales C1" << endl;
			   		j = false;
					break;
					} else { cout << "C1 jest juz zajete, sprobuj ponownie\n" << endl; 	}
				   }
				case 4: {
			   		if (A2 == 0)
					{
					A2 = gamer;
					cout << "Wybrales A2" << endl;
					j = false;
					break;
					} else { cout << "A2 jest juz zajete, sprobuj ponownie\n" << endl;}
				   }
				case 5: {
			   		if (B2 == 0)
					{
					B2 = gamer;
			   		cout << "Wybrales B2" << endl;
			   		j = false;
					break;
					} else {cout << "B2 jest juz zajete, sprobuj ponownie\n" << endl; }
				   }
				case 6: {
			   		if (C2 == 0)
					{
					C2 = gamer;
					j = false;
			   		cout << "Wybrales C2" << endl;
					break;
					} 
					else { cout << "C2 jest juz zajete, sprobuj ponownie\n" << endl;}
				   }   
				case 7: {
			   		if (A3 == 0)
					{
					A3 = gamer;
			   		cout << "Wybrales A3" << endl;
			   		j = false;
					break;
					} else { cout << "A3 jest juz zajete, sprobuj ponownie\n" << endl;	}
				   }      
			   	case 8: {
					if (B3 == 0)
					{
					B3 = gamer; 
					cout << "Wybrales B3" << endl;	
					j = false;
					break;
					} 
					else {cout << "B3 jest juz zajete, sprobuj ponownie\n" << endl;	}
				  
				  }
				case 9: {
			   		if (C3 == 0)
					{
					C3 = gamer; 
					cout << "Wybrales C3" << endl; 
					j = false;
					break;
					} 
					else {cout << "C3 jest juz zajete, sprobuj ponownie\n" << endl;	}
			      }
			    
				default: cout << "Zla wartosc" << endl; 
			   } 
			   
						
						
					   
	
	}	

	

}	

void zmiana (int &gamer, int & round) {


	if (gamer == 1) {
		gamer = 2;
	} else {
		gamer = 1;
		++round;
	}	
	
}

void sprawdzenie (int &gamer, bool &win, int &round){


	    if ( A1 == (1 || 2) && B1 == (1 || 2) && C1 == (1 || 2)){
	    	win = true;
	    	cout << "Zwyciestwo! Wygral gracz nr " << gamer;	    	
		}
		else if ( A2 == (1 || 2) && B2 == (1 || 2) && C2 == (1 || 2)){
	    	win = true;
	    	cout << "Zwyciestwo! Wygral gracz nr " << gamer;
		}
		else if ( A3 == (1 || 2) && B3 == (1 || 2) && C3 == (1 || 2)){
	    	win = true;
	    	cout << "Zwyciestwo! Wygral gracz nr " << gamer;
		}
		else if ( A1 == (1 || 2) && A2 == (1 || 2) && A3 == (1 || 2)){
	    	win = true;
	    	cout << "Zwyciestwo! Wygral gracz nr " << gamer;   	
		}
		else if ( B1 == (1 || 2) && B2 == (1 || 2) && B3 == (1 || 2)){
	    	win = true;
	    	cout << "Zwyciestwo! Wygral gracz nr " << gamer;
	 	}		
		else if ( C1 == (1 || 2) && C2 == (1 || 2) && C3 == (1 || 2)){
	    	win = true;
	    	cout << "Zwyciestwo! Wygral gracz nr " << gamer;
	 	}		
		else if ( A1 == (1 || 2) && B2 == (1 || 2) && C3 == (1 || 2)){
	    	win = true;
	    	cout << "Zwyciestwo! Wygral gracz nr " << gamer;
		}		
		else if ( A3 == (1 || 2) &&  B2 == (1 || 2) && C1 == (1 || 2)){
	    	win = true;
	    	cout << "Zwyciestwo! Wygral gracz nr " << gamer;
		}
		
		else   if ( A1 != 0 && B1 != 0 && C1 != 0 &&
				  A2 != 0 && B2 != 0 && C2 != 0 &&
				  A3 != 0 && B3 != 0 && C3 != 0){
				  	
				  	cout << "Koniec gry. Nikt nie wygral" << endl;
				  	cout << "Czy chcesz zagrac ponownie?" << endl;
				  	cout << "1. TAK" << endl;
				  	cout << "2. NIE" << endl;
				  	int again;
				  	cin >> again;
				  	if (again = 1) {
						A1 = 0, B1 = 0, C1 = 0;
						A2 = 0, B2 = 0, C2 = 0;
						A3 = 0, B3 = 0, C3 = 0;
					  round = 1;
					  gamer =1;
					   }
				  	else {
					  cout << " bye bye"; 
					  win = true;
					  }
				}
		
}


int main(){

bool wygrana = false;
int runda = 1;
int player = 1;


	while(wygrana != true)
	{
	
		
// rysuje plansze

		plansza(runda, player);
		
// Ruch: gracz pierwszy
		
		wskazanie(player);
		
		plansza(runda, player);

// sprawdzenie 

		sprawdzenie(player, wygrana, runda);
		
// zmiana gracza


		if (wygrana != true){
			zmiana(player, runda);
		}
				
	}	
		
		
return 0;		
		
}

