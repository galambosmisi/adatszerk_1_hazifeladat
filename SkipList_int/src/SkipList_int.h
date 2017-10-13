/*
 * SkipList_int.h
 *
 *  Created on: Oct 13, 2017
 *      Author: galambosmihaly
 */

#ifndef SKIPLIST_INT_H_
#define SKIPLIST_INT_H_

#include "listexception.hpp"
#include <iostream>
#include <vector>

using namespace std;


class skiplist{
	private:
			class Node
			{
				public:
					int data;				  //Tárolt érték
					vector<Node*> next;       //A következő elem(ek)re mutató pointer(ek)

					Node(const int& _data);
					Node(const int& _data, Node* _next);
			};
			Node *min;               //A lista minimumára mutató pointer
			Node *max;               //A lista maximumára mutató pointer
			Node *cur;               //A lista aktuális elemére mutató pointer
	public:
			skiplist();
			~skiplist();

			//Feladathoz tartozó föggvények
			void insert(int);  			//Elem beszúrása a listába (ha még nincs ilyen elem)
			void erase(int);				//Elem törlése a listábol (ha van ilyen elem)
			bool contains(int) const;	//Vissza adja, hogy szerepel-e az elem a listában
			int size() const;			//Megmondja a lista elemeinek számát

			//Segédfüggvények
			bool TwoChanses() const;
			void removeLast();
			Node* returnSmaller(Node*) const;

};


#endif /* SKIPLIST_INT_H_ */
