/**
 * @file Node.h
 * @author Alperen Derin (alperenderinn@gmail.com)
 * @brief Node Class
 * @version 0.1
 * @date 11-24-2019
 * 
 * @copyright Copyright (c) 2019
 * 
 */
#ifndef Node_h
#define Node_h

#include <iostream>

using namespace std;

class Node{
private:
	string word;
	int data;
	Node* next;
	Node* prev;
public:
	
	Node();
	
	string getWord();
	void setWord(string);
	
	int getData();
	void setData(int);
	
	Node* getNext();
	void setNext(Node*);
	
	Node* getPrev();
	void setPrev(Node*);
};

#endif 