#pragma once
#include <string.h>
#include <iostream>
#include "Cell.h"

using namespace std;

// todo int col
// abstract
class Column{
protected:
	int s=0;
	string name="";
	
 	// Cell* pTab=nullptr;
		
public:
	
    
	virtual void printVal(int n)=0;
	virtual void setVal(int , int )=0;
	virtual void setVal(int , string )=0;
    void printName();
    string getName();
		
};




class IntColumn : public Column{
	IntCell* pIntTab=nullptr;

	
public:
	IntColumn(int s, string n);
	~IntColumn();
	
	void printVal(int n);
	
	void setVal(int n, int set_val);
	void setVal(int , string );
	
	void resize(int newS = -1);
};
//koniec int Column




class StrColumn : public Column{
	StringCell* pStrTab=nullptr;
	
public:	
	StrColumn(int s, string n);	
	~StrColumn();
    
    void setVal(int , int );
	void setVal(int , string );
    
	void printVal(int n){}
	
};
// koniec str Column
