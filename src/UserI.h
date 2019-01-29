#pragma once
#include <string.h>
#include <iostream>
#include "Arkusz.h"


class UserI{
	Arkusz* a;
	string helloM="hello";
	string menu="";
    string message="message";
    string editMenu="";

	//FormatSettings sett;

public:
	UserI(Arkusz* ark=nullptr);
	~UserI();

	void mainLoop();
	void sayHello();

	void print(Arkusz *a);

	void printMenu();
    void printEditMenu();

    void createArkusz();
    void destroyArkusz();


    void edit();

    //input methods
	string prompt(string m);
	char getChar(string);
	int getInt(string);
};



//	todo settings
//
