//#pragma once
#include <iostream>
#include "Arkusz.h"
#include "UserI.h"

using namespace std;

void mainLoop();


int main() 
{
	
	Arkusz a(4,5);
	a.setVal(1,1,2);
    cout << "Hello, World!"<< endl;
	UserI ui;
	ui.print(a);
	
	
    return 0;
}


void mainLoop(){
	int c=0;
	do{
		
		
		
		
	}while(c);
	
	
	
}