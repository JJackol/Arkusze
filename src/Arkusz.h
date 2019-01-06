#pragma once
#include "Cell.h"
#include "Column.h"


class Arkusz{
	int sizeR=0;
	int sizeC=0;
	Column** ptCol=nullptr;
	int s=0;
	string name="";
	
public:	
	Arkusz(int s=0);
	
	Arkusz(int rows, int columns);
	
	~Arkusz();
	
	int getSizeR();
	int getSizeC();
	
	int getVal(int r,int c);
	
	void init();
	
	void resize(int newS = -1);
	void clear();
};

// to do: rozmiary zawartość operacje