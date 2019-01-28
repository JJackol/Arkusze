#pragma once
#include <stdlib.h>
#include <string.h>
#include "Cell.h"
#include "Column.h"



class Arkusz{
	int sizeR=0;
	int sizeC=0;
	Column** ptCol=nullptr;
	int s=1;
	string name="";
	
public:	
	Arkusz(int s=0);
	
	Arkusz(int rows, int columns);
	
	~Arkusz();
	
	int getSizeR();
	int getSizeC();
    void setSize(int r, int c);
	
	void printVal(int r,int c);
	
	void setVal(int r, int c, int set_val);
	
	void init();
    void pushBack(Column* pCol);
	
	void resize(int newS = -1);
	void clear();
    void clearCols();
    void printColName(int c);
};

// to do: rozmiary zawartość operacje
