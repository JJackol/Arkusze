#include "Arkusz.h"
#include <stdlib.h>


Arkusz::Arkusz(int s){		
		this->s=s;
		ptCol= new Column*[s];		
}
	
Arkusz::Arkusz(int rows, int columns){
		this->s=columns;
		ptCol= new Column*[columns];
		sizeR=rows;
		sizeC=columns;
		init();
		
}

void Arkusz::setVal(int r, int c, int set_val){
		ptCol[c]->setVal(r,set_val);
	};

void Arkusz::init(){
		for (int i=0; i<sizeC ; i++){
            std::string name = "\""+std::to_string(i)+"\"";
            
			ptCol[i]=new IntColumn(sizeR, name);
		}
}

void Arkusz::pushBack(Column* pCol){
    if(s<=sizeC){
        resize(-1);//
    }
    ptCol[sizeC]=pCol;
    sizeC++;
    
}

Column* Arkusz::popBack(){
	
}

	
Arkusz::~Arkusz(){	
		clear();
}

int Arkusz::getSizeR(){
		return sizeR;
}

int Arkusz::getSizeC(){
		return sizeC;
}

void Arkusz::setSize(int r, int c){
    sizeC=c;
    sizeR=r;
}

void Arkusz::printVal(int r,int c){
	return ptCol[c]->printVal(r);
}

// doubles the size if newS<0
void Arkusz::resize(int newS){
		if (newS<0){
			newS=2*s;
		}
		Column** tempT = new Column*[newS];
		for (int i=0; i<s && i<newS ; i++){
			tempT[i]=ptCol[i];
		}
		
		clear();
		
		s=newS;
		
		ptCol=tempT;		
}

void Arkusz::clear(){
			for(int i=0; i<s; i++){
			delete ptCol[i];
		}
	
		delete[] ptCol;
		
}

void Arkusz::clearCols(){
			for(int i=0; i<s; i++){
			delete ptCol[i];
		}
		sizeC=0;
        sizeR=0;
		
}

void Arkusz::printColName(int c){
    string name="";
    name = ptCol[c]->getName();
    std::cout<<name;
    
}
