//#pragma once
#include <iostream>
#include "Arkusz.h"
#include "UserI.h"

using namespace std;

void mainLoop();


int main() 
{
	
	Arkusz a(4,5);
    a.init();
	a.setVal(1,1,2);
    
	UserI ui(&a);
	
	ui.sayHello();
	ui.mainLoop();
	
	
    return 0;
}


void mainLoop(){
	int c=0;
	do{
		
	}while(c);
	
}
