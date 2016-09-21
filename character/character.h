#pragma once
#include <iostream>
#include <string>


namespace gChar{
	
	class gChar{
		private:
			int health;
			int power;
			int armor;
			int gCoins;
			char cClass;
			std::string name;
			
		public:
			void giveStats();
			~gChar();
			gChar();
			gChar(int health, int power, int armor, std::string name, char cClass);
			
			void setStats(int health, int power, int armor, std::string name, char cClass);
			void setHealth(int health);
			void setPower(int power);
			void setArmor(int armor);
			void setCoins(int gCoins);
			void setClass(char cClass);
			void setName(std::string name);
			
			//Getters:
			int getHealth();
			int getPower();
			int getArmor();
			int getCoins();
			char getClass();
			std::string getName();
	};
	
}
