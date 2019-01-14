#pragma once
#include <string.h>
#include <iostream>
#include "Arkusz.h"


class FormatSettings{
	int rowWidth;
	//int decAfterComa;
	int stringWidth;
};
//to do



class UserI{
	//Arkusz* a;
	string helloM="hello";
	
	FormatSettings sett;
	
public:
	UserI();
	~UserI();
	
	void sayHello();
	
	void print(Arkusz &a);
	
};



//	todo settings
//
