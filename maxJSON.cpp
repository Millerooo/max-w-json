#include <iostream>
#include <fstream>
#include <windows.h>

using namespace std;

int main ()
{
	HANDLE hOut;
	
	hOut = GetStdHandle( STD_OUTPUT_HANDLE );
    int tablica[500];
    
 
    string linia;
    fstream plik;
 
    plik.open("a.txt", ios::in);
    if(plik.good() == true)
    {
        while(!plik.eof())
        {
            getline(plik, linia);
            cout << linia << endl;
        }
        plik.close();
	}                   
	{
     SetConsoleTextAttribute( hOut, BACKGROUND_GREEN);
	int max, tab[]={3, 5, 123, 2, 3, 4, 3, 2, 1, -1}; 
	
	max = tab[0]; 
	
	for(int i=1;i<10;i++) 
		if(max<tab[i])
		
		
			max = tab[i];
	SetConsoleTextAttribute( hOut, BACKGROUND_RED);
	cout<<"Najwieksza wczytana liczba jest "<<max<<endl;
   
   
    ofstream plik2;              
    plik2.open("b.txt",ios::out); 
	plik2<<"[  \n { \n \"MAKSIMUM\" : \" ";       
    plik2<<max ;
	plik2<<endl;   
	
	 SetConsoleTextAttribute( hOut, BACKGROUND_GREEN);
	cout<<endl<<"Wcisnij enter, aby zamknac program...";
	
	 SetConsoleTextAttribute( hOut, BACKGROUND_BLUE);
	 cout<<endl<<"Mikolaj Miller";
}
			SetConsoleTextAttribute( hOut, FOREGROUND_GREEN | FOREGROUND_BLUE | FOREGROUND_RED);
       return 0; 
    }







