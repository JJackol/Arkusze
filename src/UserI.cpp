#include "UserI.h"

UserI::UserI(Arkusz* ark){	
	a=ark;
    menu= "";
	menu+=  "1.Nowy arkusz\n";
	menu+=	"2.Usun arkusz\n";
	menu+=	"3.Edytuj arkusz\n";
	menu+=	"4.Zapisz arkusz";
	menu+=	"5.Wczytaj arkusz";
}
UserI::~UserI(){
		
}

void UserI::mainLoop(){
	int select=0;
	do{
		print(a);
        cout<<endl<<message<<endl<<endl;
		printMenu();
		select=getInt("Wprowadz liczbe  [0 aby wyjsc]");
		
		switch(select){
			case 1:
				createArkusz(a);
				break;
			case 2:
				break;
				destroyArkusz();
			case 3:
				break;
			case 4:
				break;
			case 5:
				break;
			case 6:
				break;
			case 7:
				break;
			case 8:
				break;

			default:
				break;
		
		}
		
		
	}while(select);
	
}

void UserI::print(Arkusz *a){
	for (int c=0; c< a->getSizeC(); c++){
        a->printColName(c);
        cout<<'\t';
    }
    cout<<endl;
	for(int r=0; r<a->getSizeR(); r++){
        
		for (int c=0; c< a->getSizeC(); c++){
			a->printVal(r,c);
			cout<<'\t';
		}
		std::cout<<std::endl;
		
	}
	
}

	
void UserI::sayHello(){
	cout<<helloM<<endl;
	
}
string UserI::prompt(string m){
	string c="";
	cout<<m<<endl;
	cin>>c;
	return c;
}

char UserI::getChar(string m){
	char c=0;
	cout<<m<<endl;
	cin>>c;
	return c;
}
int UserI::getInt(string m){
	int c=0;
	cout<<m<<endl;
	cin>>c;
	return c;
}
void UserI::printMenu(){
		cout<<menu<<endl;
	}

void UserI::createArkusz(Arkusz* a){
    a->clearCols();
    Column* tempCol=nullptr;
    cout<<"creating arkusz"<<endl;
    int rows=getInt("Podaj liczbe wierszy:");
    int cols=getInt("Podaj liczbe kolumn:");
    a->setSize(rows,cols);
    
    cout<<"Podaj kolejno typy kolumn [wprowadz pojedyncze znaki; i=int, s=string]"<<endl;
    char c;
    string tempName;
    for(int i=0;i<cols;i++){
        
        c=getChar("Podaj typ kolumny");
        if (c=='i')
        {
            tempName=prompt("Podaj nazwe kolumny");
            tempCol=new IntColumn(rows, tempName);
            //a->ptCol[i]=tempCol;
            a->pushBack(tempCol);
        }
        else if(c=='s')
        {
            tempName=prompt("Podaj nazwe kolumny");
			if(tempName=="")
				std::string name = "\""+std::to_string(i)+"\"";

            tempCol=new StrColumn(rows, tempName);
            //a->ptCol[i]=tempCol;

            a->pushBack(tempCol);
        }
        else
        {
            cout<<"niepoprwany typ"<<endl;
            i--;
        }
        //
        
        
    }
    
    
}

void UserI::destroyArkusz(){
    cout<< "destroy"<<endl;
    
}
