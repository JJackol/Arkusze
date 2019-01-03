#include <string.h>
#include <iostream>
"include "Cell.h"


class Kolumna{
	Cell* pTab=nullptr;
	int s=0;
	string name="";
	
public:	
	Kolumna(int s=0){		
		this->s=s
		pTab= new Cell[s];		
	}
	
	~Kolumna(){			
		delete[] pTab;
	}
};

class IKolumna{
	IntCell* pIntTab=nullptr;
	int s=0;
	string name="";
	
public:	
	IKolumna(int s=0){		
		this->s=s
		pIntTab= new IntCell[s];		
	}
	
	~IKolumna(){			
		delete[] pIntTab;
	}
};
//koniec int kolumna

class StrKolumna{
	StringCell* pStrTab=nullptr;
	int s=0;
	string name="";
	
public:	
	IKolumna(int s=0){		
		this->s=s
		pIntTab= new IntCell[s];		
	}
	
	~IKolumna(){			
		delete[] pIntTab;
	}
};
// koniec str kolumna