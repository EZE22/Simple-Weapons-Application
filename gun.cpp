/******************
* Adam E. Ingram *
* Date: 1/1/19   *
******************/

#include"gun.h"

void Gun::draw() {
	cout << "You just drew your gun!!!" << endl;
}
void Gun::reload() {
	cout << "You have shot your gun and now you are reloading!!!!\n" << endl;
}
void Gun::outOfBullets(int x, int y) {
	cout << "You are out of ammo!" << endl;
}
