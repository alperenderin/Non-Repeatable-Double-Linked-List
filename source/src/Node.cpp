/**
 * @file Node.cpp
 * @author Alperen Derin (alperenderinn@gmail.com)
 * @brief Node Class
 * @version 0.1
 * @date 11-24-2019
 * 
 * @copyright Copyright (c) 2019
 * 
 */
#include "Node.h"

	Node::Node(){
		next = NULL; 
		prev = NULL; 
		data = 0;
	}
	
	string Node::getWord()
		return word;
	
	void Node::setWord(string word)
		this->word = word;
	
	int Node::getData()
		return data;
	
	void Node::setData(int data)
		this->data = data;
	
	Node* Node::getNext()
		return next;
	
	void Node::setNext(Node* next)
		this->next = next;
	
	Node* Node::getPrev()
		return prev;
	
	void Node::setPrev(Node* prev)
		this->prev = prev;
	

	
