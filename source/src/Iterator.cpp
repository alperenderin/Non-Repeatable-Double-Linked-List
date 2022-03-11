/**
 * @file Iterator.cpp
 * @author Alperen Derin (alperenderinn@gmail.com)
 * @brief Iterator Class
 * @version 0.1
 * @date 11-24-2019
 * 
 * @copyright Copyright (c) 2019
 * 
 */
#include "Iterator.h"
#include "Node.h"
using namespace std;
		
	Iterator::Iterator()
		current = NULL;
	
	Iterator::Iterator(Node* node)
		current = node;
	
	string Iterator::iterWord()
		return current->getWord();
	
	int Iterator::iterData()
		return current->getData();
	
	Node* Iterator::getCurrent()
		return current;
	
	void Iterator::setCurrentNext(Node* node)
		this->current->setNext(node);
	
	bool Iterator::hasNext()
		return current->getNext() != NULL;
		
	bool Iterator::hasPrev()
		return current->getPrev() != NULL;
	
	
	void Iterator::next(){
		if(hasNext())		// Since this method is a member function, if this method is called directly with an object, it is checked whether that object has a hasNext().
			current = current -> getNext();
	}
	
	void Iterator::prev()	
	{
		if(hasPrev())
			current = current -> getPrev();
	}
	