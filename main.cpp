#include <iostream>
#include <string>
#include "./character/character.h"
#include "./utils/dice.h"
#include "./utils/action.h"

using namespace std;

int main(){
	char nC[10];
	char mC;
	string name;
	gChar::gChar Warior;
	
	system("color 0A");
	system("title A Little RPG.");
	
	cout << "\tOh you finally spawned... this is Tameria, my kingdom." 
		<< "\n\t I have summoned you. "
		<< "\n\t You are our only hope." 
		<< "\n\t  Chose a class: (Archer: \'A\', Knight: \'K\', Mage: \'M\')" << endl;
	cout << "\t\t~~Leader:"; cin >> nC;
	mC = nC[0];
	
	
	cout << "\t\tWhat would you like to be called Warior?" << endl;
	cout << "\t\t~~Leader:"; cin >> name;
	
	
	
	switch(mC){
		case 'A': 
		case 'a': Warior.setStats(100, 20, 5, name, 'A');
				cout << "\tMay you have acurate aim and a healthy stroke!" << endl;
			break;
		case 'K':
		case 'k': Warior.setStats(100, 15, 10, name, 'K');
				cout << "\tYou seem strong and healthy, Take care of yourself!" << endl;
			break;
		case 'M':
		case 'm': Warior.setStats(100, 25, 0, name, 'M');
				cout << "\tYou are skilled in the arts of magic I can tell!" << endl;
			break;
		default: cout << "\tYou chose poorly, you shall be a beggar!" << endl;
			Warior.setStats(1, 0, 0, "Failure", 'B');
			break;
	}
	
	cout << "\n";
	cout << "\tI shall fund your campaign with 100 coins of gold." 
		<< "\n\t Go to the town, get yourself a weapon and some armor." << "\n\t  The men I have given forth are well suited with the King's best."
		<< "\n\t   Good luck on your journey " << Warior.getName() << "! A messanger shall be sent with your first quest." << "\n\t    Now go Tameria counts on you!" << endl << endl;
	Warior.setCoins(100);
	
	while(Warior.getHealth() > 0){
		
		act::action(Warior);
		
	}
	
	cout << "\t\t\tThis was your score: " << Warior.getCoins() << "g" << endl;
	return 0;
}





