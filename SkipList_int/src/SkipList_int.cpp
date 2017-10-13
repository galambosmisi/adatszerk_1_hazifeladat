//============================================================================
// Name        : SkipList_int.cpp
// Author      :  Mihaly Galambos
// Version     :
// Copyright   : Just use.
// Description : Adatszerk elso hazifeladat in C++, Ansi-style
//============================================================================

#include <iostream>
#include "SkipList_int.h"
#include <vector>

using namespace std;

//Konstruktorok, destruktorok
skiplist::Node::Node(const int& _data) : data(_data) {next.push_back(nullptr);} 				///TODO Feljebb lévő szintekhez való kapcsolódás
skiplist::Node::Node(const int& _data, Node* _next) : data(_data) {next.push_back(_next);}

skiplist::skiplist() : min(nullptr), max(nullptr), cur(nullptr) {}
skiplist::~skiplist() {}																		///TODO Destruktor implementálása memória szivárgás nélül



//Feladathoz tartozó függvények implementálása
void skiplist::insert(int) {																	///TODO Elem befűzésének implementálása

}

void skiplist::erase(int) {																	///TODO Elem törlésének implementálása

}

bool skiplist::contains(int) const {															///TODO Tartalmazás visszajelző implementálésa

	return 1;
}

int skiplist::size() const {																	///TODO Méret lekérdező implementálása

	return 1;
}




//Segédfüggvények implementálása
bool skiplist::TwoChanses() const {															///TODO 50%-os random 0/1

	return 1;
}
void skiplist::removeLast() {																///TODO Utolsó törlésének implementálása


}
skiplist::Node* skiplist::returnSmaller(skiplist::Node*) const {								///Tetszóleges értékhez vissazadja az utolsó nála kisebb csomópontot minden szinten

	return nullptr;
}




int main() {
	cout << "!!!Adatszerk hazifeladat!!!" << endl; // prints !!!Hello World!!!
	return 0;
}
