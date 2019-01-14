#include "UserI.h"

UserI::UserI(){
	
}
UserI::~UserI(){
	
}

void UserI::print(Arkusz &a){
	
	for(int r=0; r<a.getSizeR(); r++){
		for (int c=0; c< a.getSizeC(); c++){
			a.printVal(r,c);
			cout<<'\t';
		}
		std::cout<<std::endl;
		
	}
	
}

	
void UserI::sayHello(){
	cout<<helloM<<endl;
	
}