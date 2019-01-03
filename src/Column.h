#include <string.h>
#include <iostream>
"include "Cell.h"


class Column{
	int s=0;
	string name="";
	
 	// Cell* pTab=nullptr;
		
public:	
	Column(int s=0){		
		this->s=s
		//pTab= new Cell[s];		
	}
	
	~Column(){			
		//delete[] pTab;
	}
	
	
	
};




class IColumn{
	IntCell* pIntTab=nullptr;
	// int s=0;
	// string name="";
	
public:	
	IColumn(int s=0){		
		this->s=s
		pIntTab= new IntCell[s];		
	}
	
	~IColumn(){			
		delete[] pIntTab;
	}
	
	void resize(int newS = 2 * s);
};
//koniec int Column
void IColumn::resize(int newS){
		IntCell* tempT = new Int[newS];
		
		for (int i=0; i<s && i<newS ; i++){
			tempT[i]=pIntTab[i];
		}
		s=newS;
		delete []pIntTab;
		pIntTab=tempT;		
}



class StrColumn{
	StringCell* pStrTab=nullptr;
	int s=0;
	string name="";
	
public:	
	IColumn(int s=0){		
		this->s=s
		pIntTab= new IntCell[s];		
	}
	
	~IColumn(){			
		delete[] pIntTab;
	}
};
// koniec str Column