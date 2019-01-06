#pragma once
#include <string.h>
#include <iostream>
#include "Interfaces.h"

using namespace std;

class Cell : public IPrintable{
public:
	Cell(){	}
	void print(){};
};




class IntCell : public Cell{
	int val;
	
public:
	IntCell(int val=0){
		this->val=val;
	}
	void setVal(int set_val);
	
	int getVal(){
		return val;
	}
	
};	
//koniec Int cell




class StringCell : public Cell{
	string val;
	
public:
	StringCell(string val=0){
		this->val=val;
	}
	void setVal(string set_val);
	
	string getVal(){
		return val;
	}
};
//koniec stringCell

//to do zamiana setstring, 