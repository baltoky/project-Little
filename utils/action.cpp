#include "action.h"

namespace act{
	
	void action(gChar::gChar& player){
		using namespace std;
		string act;
		
		cout << "\tSoul: What now? Adventure Awaits!" << endl;
		cout << "\t\t~~" << player.getName() << ": "; cin >> act;
		
		if(act.find("/help") != string::npos){
			cout << "\t/kill (character(use \"me\" for main character)): character dies and the game ends" << endl;
		}
		else if(act.find("option") != string::npos){
			if(act.find("1") != string::npos){
				
			}
			if(act.find("2") != string::npos){
				
			}
			if(act.find("3") != string::npos){
				
			}
			if(act.find("4") != string::npos){
				
			}
		}
		else if(act.find("/kill") != string::npos){
			
			cout << "\t\t"; cin >> act;
			
			if(act.find("me") != string::npos || act.find(player.getName()) != string::npos){
				cout << "\tThor: It shall be done." << endl;
				cout << "\n\n\t A Bolt Of Lightning Hits You." << endl;
				player.setHealth(0);
			}
			else if(act.find("help") != string::npos){
				cout << "\t\tWarior index: " << player.getName() << endl;
			}
		}
		else{
			cout << "\n" << "\tIf you need help type /help" << endl;
		}
		delete &act;
	}
}