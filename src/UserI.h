#pragma once
#include <string.h>
#include <iostream>
#include "Arkusz.h"


class FormatSettings{
	int rowWidth;
	int decAfterComa;
	int stringWidth;
	
	
	
};
//to do



class UserI{
	Arkusz* a;
	string helloM;
	
	
	FormatSettings sett;
	
public:
	UserI();
	~UserI();
	
	void print(Arkusz &a);
	
};



//	settings
//
