#pragmaonce
#include <string.h>
#include <iostream>

class Cell{
public:
	Cell(){	}
};




class IntCell : public Cell{
	int val;
	
public:
	IntCell(int val=0){
		this->val=val;
	}
	void setVal(int set_val)
	
	int getVal(){
		return val;
	}
	
};	
//koniec Int cell




class StringCell : public Cell{
	string val;
	
public:
	StringCell(int val=0){
		this->val=val;
	}
	void setVal(int set_val)
	
	string getVal(){
		return val;
	}
};
//koniec stringCell