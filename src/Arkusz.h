#pragma once
#include "Cell.h"
#include "Column.h"


class Arkusz{
	* pIntTab=nullptr;
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

// to do: rozmiary zawartość operacje