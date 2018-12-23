#include <iostream>
using namespace std;
bool f(int x){
	return 5>x*x;
}
int sq(int x){
	return x*x;
}
int main() 
{
    cout << "Hello, World!"<<f(1)<< endl;
	
	
	for (int i=0;i<100;i++){
		if(f(i))
			cout<<i<<" true "<<sq(i)<<endl;
	}
	
    return 0;
}