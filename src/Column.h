#pragma once
#include <string.h>
#include <iostream>
#include "Cell.h"

using namespace std;


class Column{
protected:
	int s=0;
	string name="";
	
 	// Cell* pTab=nullptr;
		
public:	
	Column(int s=0){		
		this->s=s;
		//pTab= new Cell[s];		
	}
	
	~Column(){			
		//delete[] pTab;
	}
	
	virtual void printVal(int n)=0;
	virtual void setVal(int , int )=0;
		
};




class IColumn : public Column{
	IntCell* pIntTab=nullptr;

	
public:	
	IColumn(int s=0);
	~IColumn();
	
	void printVal(int n);
	
	void setVal(int n, int set_val);
	
	void resize(int newS = -1);
};
//koniec int Column




class StrColumn : public Column{
	StringCell* pStrTab=nullptr;
	
public:	
	StrColumn(int s=0);	
	~StrColumn();
	void printVal(int n){}
	
};
// koniec str Column