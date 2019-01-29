#include "UserI.h"

UserI::UserI(Arkusz* ark){

	a=ark;

    menu= "";
	menu+=  "1.Nowy arkusz\n";
	menu+=	"2.Usun arkusz\n";
	menu+=	"3.Edytuj arkusz\n";
    menu+=	"4.Inne operacje\n";
	//menu+=	"4.Zapisz arkusz\n";
	//menu+=	"5.Wczytaj arkusz";

	editMenu="";
	editMenu+="1.Zmien wartosc komorki \n";
	editMenu+="2.resetuj wartosc komorki \n";
	editMenu+="3.resetuj wszystkie komorki ";

}
UserI::~UserI(){

}

void UserI::mainLoop(){
	int select=0;
	do{
		print(a);
        cout<<endl<<message<<endl<<endl;
        message="";
		printMenu();
		select=getInt("Wprowadz liczbe  [0 aby wyjsc]");

		switch(select){
			case 1:
				createArkusz();
				break;
			case 2:
			    destroyArkusz();
				break;

			case 3:
			    edit();
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
    if(a==nullptr){
        message += " - brak arkusza do wyswietlenia, stworz nowy arkusz \n";
        return;
    }

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
void UserI::printEditMenu(){
    cout<<editMenu<<endl;
}


void UserI::createArkusz(){
    //delete a;
    Column* tempCol=nullptr;
    cout<<"creating arkusz"<<endl;
    int rows=getInt("Podaj liczbe wierszy:");
    int cols=getInt("Podaj liczbe kolumn:");

    a=new Arkusz(rows,cols);
    //a->setSize(rows,cols);
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
    delete a;
    a=nullptr;

}


void UserI::edit()
{
    cout<<"edit..."<<endl;
    int r,c,v;
    int s=1;

    do{
		print(a);
        cout<<endl<<message<<endl<<endl;
        message="";
		printEditMenu();
		s=getInt("Wprowadz liczbe  [0 aby wyjsc]");


		switch(s){
			case 1:
			    cout<<"Wprowadzanie wartosci:\n";
				r=getInt("ktory wiersz? \t (numerowane od zera)");
				c=getInt("ktora kolumna? \t (numerowane od zera)");
				v=getInt("wprowadz wartosc)");
				a->setVal(r,c,v);
				break;
			case 2:
			    cout<<"resetowanie wartosci:\n";
				r=getInt("ktory wiersz? \t (numerowane od zera)");
				c=getInt("ktora kolumna? \t (numerowane od zera)");
				a->setVal(r,c,0);
				break;

			case 3:
                a->reset();
				break;
            default:
				break;

		}


	}while(s);




}
