/******************
* Adam E. Ingram *
* Date: 1/1/19   *
******************/

#pragma once
#include"weapons.h"

class Gun : public weapons{
private:
	int bullet = 0;
	int mag = 0;
public:
	void draw(); 
	void reload();
	void outOfBullets(int x, int y); 
 
};
