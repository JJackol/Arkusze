#include "Column.h"



string Column::getName(){
    return name;
}

//
//  IntColumn
//
IntColumn::IntColumn(int s, string n){		
        name=n;
		this->s=s;
		pIntTab= new IntCell[s];
	}
	
IntColumn::~IntColumn(){			
		delete[] pIntTab;
	}
	
void IntColumn::printVal(int n){
	pIntTab[n].print();
}

void IntColumn::setVal(int n, int set_val){
		pIntTab[n].setVal(set_val);
	};
void IntColumn::setVal(int , string ){
	throw int(-1);
}

void IntColumn::resize(int newS){
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
StrColumn::StrColumn(int s, string n){	
        name = n;
		this->s=s;
		pStrTab= new StringCell[s];		
	}
	
StrColumn::~StrColumn(){			
		delete[] pStrTab;
}
void StrColumn::setVal(int s, int r){}

void StrColumn::setVal(int s, string n){}
	
