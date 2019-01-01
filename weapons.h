/******************
* Adam E. Ingram *
* Date: 1/1/19   *
******************/

#pragma once
#include<iostream>
using namespace std; 

class weapons {
public:
	virtual void draw() = 0;
	virtual void reload() = 0;
	 

	virtual ~weapons(){}
};
