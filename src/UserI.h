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
	Arkusz* a;
	string helloM="hello";
	string menu="";
	
	//FormatSettings sett;
	
public:
	UserI(Arkusz* ark);
	~UserI();
	
	void mainLoop();
	void sayHello();
	
	void print(Arkusz &a);
	string prompt(string m);
	char getChar(string);
	int getInt(string);
	void printMenu();
	
	

};



//	todo settings
//
