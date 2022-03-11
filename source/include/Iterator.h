/**
 * @file Iterator.h
 * @author Alperen Derin (alperenderinn@gmail.com)
 * @brief Iterator Class
 * @version 0.1
 * @date 11-24-2019
 * 
 * @copyright Copyright (c) 2019
 * 
 */
#ifndef Iterator_h
#define Iterator_h
#include "Node.h"

using namespace std;

class Iterator{
	private:
		Node* current;
	public:
			
		bool hasNext();
		bool hasPrev();
		
		void next();
		void prev();
				
		Iterator();
		Iterator(Node*);
		
		string iterWord();
		int iterData();
		
		Node* getCurrent();
		void setCurrentNext(Node*);
};
#endif