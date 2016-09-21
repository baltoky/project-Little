#include "character.h"

using namespace std;

namespace gChar{
	
	gChar::gChar(){
		this->health = 10;
		this->power = 10;
		this->cClass = 'N';
	}
	
	gChar::gChar(int health, int power, int armor, string name, char cClass){
		this->health = health;
		this->power = power;
		this->armor = armor;
		this->name = name;
		this->cClass = cClass;
	}
	
	gChar::~gChar(){
		delete &health;
		delete &power;
		delete &armor;
		delete &cClass;
		delete &gCoins;
		delete &name;
	}
	
	void gChar::giveStats(){
		cout << "Health: " << this->health << endl;
		cout << "Power: " << this->power << endl;
		cout << "Armor: " << this->armor << endl;
		cout << "Class: " << this->cClass << endl;
		cout << "Name: " << this->name << endl;
	}
	
	void gChar::setStats(int health, int power, int armor, string name, char cClass){
		this->health = health;
		this->power = power;
		this->armor = armor;
		this->cClass = cClass;
		this->name = name;
	}
	
	void gChar::setHealth(int health){
		this->health = health;
	}
	
	void gChar::setPower(int power){
		this->power = power;
	}
	
	void gChar::setArmor(int armor){
		this->armor = armor;
	}
	
	void gChar::setCoins(int gCoins){
		this->gCoins = gCoins;
	}
	
	void gChar::setClass(char cClass){
		this->cClass = cClass;
	}
	
	void gChar::setName(string name){
		this->name = name;
	}
	
	int gChar::getHealth(){
		return this->health;
	}
	int gChar::getPower(){
		return this->power;
	}
	int gChar::getArmor(){
		return this->armor;
	}
	int gChar::getCoins(){
		return this->gCoins;
	}
	char gChar::getClass(){
		return this->cClass;
	}
	string gChar::getName(){
		return this->name;
	}
	
}
