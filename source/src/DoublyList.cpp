/**
 * @file DoublyList.cpp
 * @author Alperen Derin (alperenderinn@gmail.com)
 * @brief Doubly Linked List Class
 * @version 0.1
 * @date 11-24-2019
 * 
 * @copyright Copyright (c) 2019
 * 
 */

#include <cstring>
#include "DoublyList.h"
#include "Iterator.h"
#include "Node.h"

DoublyList::DoublyList() { 
	head = new Node; 
	head->setNext(NULL); 
	head->setPrev(NULL); 
}

Iterator DoublyList::firstNode() {
	if (head == NULL) { 
		cout << "Liste Bos" << endl; 
		return 0; 
	}
	return Iterator(head);	// return the iterator reference, this reference has the first node.
}

bool DoublyList::isEmpty() { 
	return head->getNext() == NULL; 
}

void DoublyList::insert(string a_word, int a_data) {

	if (size == 0) {	// add to the head of the list
		head->setWord(a_word);
		head->setData(0);
	}
	else {				// other situations
		Iterator* iter = new Iterator(head);
		while (iter->hasNext()) iter->next();

		Node* temporaryNode = new Node;
		temporaryNode->setPrev(iter->getCurrent());
		iter->setCurrentNext(temporaryNode);

		temporaryNode->setData(a_data);
		temporaryNode->setWord(a_word);

		delete iter;
	}

	size++;
}

void DoublyList::isSame(string a_word) {	// checks if the words are the same 

	Iterator* iter = new Iterator(head);

	int index = 0;
	int point = -1;							// If it's the same, it will point to that element

	if (size == 0)							// first entered value
		insert(a_word, point);
	else {
		do {
			if (iter->iterWord() == a_word)
			{
				point = index;
				gain += a_word.length()-1;	// we find the net gain obtained by subtracting 1 minus the numerical value.
			}
			iter->next();
			index++;

		} while (iter->hasNext());
		
		if(iter->iterWord() == a_word){		// check the last element because of the algorthm above so that doesn't check the last element due to last->hasNext() == NULL
			point = index;				
			if(size != 1)					// the first element was adding gain both above and here.
				gain += a_word.length()-1;	// in addition, since overlapping elements are not checked in while, other operations are performed here
		}

		if (point == -1)
			insert(a_word, 0);
		else if (point == 0 && size == 1)	
			insert(" ", index - point);		
		else if (point >= 0 && size > 0)    
			insert(" ", index - point + 1);
	}

	delete iter;
}

void DoublyList::read() {

	file.open(".\\doc\\icerik.txt", ios::in);
	string b_word;

	while (file >> b_word) {
		isSame(b_word);
	}

	file.close();
}

ostream& operator << (ostream& screen, DoublyList& right) {
	if (right.isEmpty()) screen << "Liste Bos";
	else {
		Iterator iterator = right.firstNode();

		if(iterator.hasPrev() == false)
			screen <<"NULL<-| ";
		
		for (iterator; iterator.hasNext(); iterator.next()){	
			screen << "|" << iterator.iterWord() << " - " << iterator.iterData() << "|<=>";
		}
		
		screen << iterator.iterWord() << "-" << iterator.iterData(); // print the last item manually, as iterator.hasNext() == NULL does not check for the last item  
		if(iterator.hasNext() == false)
			screen <<"|->NULL"<<endl;
	}

	return screen;
}

void DoublyList::printGain() {		
	cout << "Toplam Kazanc: " << gain << endl;
}

DoublyList::~DoublyList() {
	delete head;
}
