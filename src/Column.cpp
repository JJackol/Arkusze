#include "Column.h"



//
//  IntColumn
//
IColumn::IColumn(int s){		
		this->s=s;
		pIntTab= new IntCell[s];
	}
	
IColumn::~IColumn(){			
		delete[] pIntTab;
	}

void IColumn::resize(int newS){
		IntCell* tempT = new IntCell[newS];
		if (newS<0){
			newS=2*s;
		}
		for (int i=0; i<s && i<newS ; i++){
			tempT[i]=pIntTab[i];
		}
		s=newS;
		delete []pIntTab;
		pIntTab=tempT;		
}


//
//	StringColumn
//
StrColumn::StrColumn(int s){		
		this->s=s;
		pStrTab= new StringCell[s];		
	}
	
StrColumn::~StrColumn(){			
		delete[] pStrTab;
	}