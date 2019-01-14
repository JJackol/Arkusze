#include "Arkusz.h"



Arkusz::Arkusz(int s){		
		this->s=s;
		ptCol= new Column*[s];		
}
	
Arkusz::Arkusz(int rows, int columns){
		this->s=0;
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
			ptCol[i]=new IntColumn(sizeR);
		}
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

void Arkusz::printVal(int r,int c){
	return ptCol[c]->printVal(r);
}


void Arkusz::resize(int newS){
		Column** tempT = new Column*[newS];
		if (newS<0){
			newS=2*s;
		}
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
		s=0;
}
