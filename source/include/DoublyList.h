/**
 * @file DoublyList.h
 * @author Alperen Derin (alperenderinn@gmail.com)
 * @brief Doubly Linked List Class
 * @version 0.1
 * @date 11-24-2019
 * 
 * @copyright Copyright (c) 2019
 * 
 */

#ifndef DoublyList_h
#define DoublyList_h

#include "Node.h"
#include "Iterator.h"
#include <fstream>

using namespace std;

class DoublyList {
private:
	int size = 0;
	int gain = 0;	// how many bytes do we save by using a non-repeating linked list structure
	Node* head;

public:
	Iterator firstNode();
	void insert(string,int);
	friend ostream& operator<<(ostream& screen, DoublyList &right);
	bool isEmpty();
	DoublyList();
	
	void isSame(string);
	
	fstream file;
	void read();
	
	void printGain();
	~DoublyList();
};
#endif