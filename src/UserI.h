#pragma once
#include <string.h>
#include <iostream>
#include "Arkusz.h"


class UserI{
	Arkusz* a;
	string helloM="hello";
	string menu="";
    string message="message";

	//FormatSettings sett;

public:
	UserI(Arkusz* ark=nullptr);
	~UserI();

	void mainLoop();
	void sayHello();

	void print(Arkusz *a);
	string prompt(string m);
	char getChar(string);
	int getInt(string);
	void printMenu();

    void createArkusz();
    void destroyArkusz();

};



//	todo settings
//
