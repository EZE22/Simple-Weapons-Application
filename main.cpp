/******************
 * Adam E. Ingram * 
 * Date: 1/1/19   *
******************/

#include<iostream>
#include"weapons.h"
#include"gun.h"
#include"shotgun.h"
#include"crossbow.h"
#include<string>	
using namespace std; 

int main() {
	Gun Browning; 
	Shotgun Benelli; 
	Crossbow Hunter;
	weapons *pistol = &Browning;
	weapons *pump = &Benelli; 
	weapons *bow = &Hunter; 

		cout << "I am going to get my gun!" << endl;
		pistol->draw();
		pistol->reload();
		cout << "I am going to get my shotgun!" << endl;
		pump->draw();
		pump->reload();
		cout << "I am going to get my bow!" << endl;
		bow->draw();
		bow->reload();
			
	system("pause"); 
	return 0; 
}
