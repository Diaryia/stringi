#include <iostream>
#include <string>
using namespace std;

int
main ()
{
  string film = "Avatar";
  cout << film << endl;
  string tytul (" Legenda Aanga");	// przekazujemy do konstruktora przez tytul -konstruktor stworzony przez nas
  cout << tytul << endl;
  string tytul1 = film + tytul;
  cout << tytul1 << endl;
  cout << "\n";			// nowa linia kodu 
  cout << "----------------------------" << endl;
  //indeksowanie zaczynamy od 0!!!
  string zdanie ("Najlepszy film to Avatar");
  cout << zdanie[0] << endl;
  cout << zdanie[1] << endl;
  cout << zdanie[2] << endl;
  cout << zdanie[9] << endl;	// puste miejsce teE< zajmuje numerek indeksu
  cout << zdanie.empty () << endl;	// funkcja typu bool(0 - falsz(obiekt jest zapelniony) 1 - prawda)
  // sprawdza czy nas obiekt jest pusty (czy nie posiada zadnego lancucha znakow)
  cout << zdanie.substr (10, 4) << endl;	// funkcja sub string od ktC3rego indeksu chcemy zeby funkcja odczytac dany znak
  //od znaku 10 ma wypisac 4 indeksu
  cout << zdanie.length () << endl;	// ilosc znakC3w
   cout<<zdanie.size()<<endl; //ilosc znakow
  
  cout<<zdanie.max_size()<<endl;
  
  zdanie.resize(9); // ucina ciag znaków od 9
  cout<<zdanie<<endl;
  
  return 0;
}
