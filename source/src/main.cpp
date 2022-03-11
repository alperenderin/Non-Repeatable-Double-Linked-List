/**
 * @file main.cpp
 * @author Alperen Derin (alperenderinn@gmail.com)
 * @brief The task of storing the data taken from the file in a Doubly Linked List without repetition and printing them on the screen
 * @version 0.1
 * @date 11-24-2019
 * 
 * @copyright Copyright (c) 2019
 * 
 */
#include <iostream>
#include "DoublyList.h"
#include "Iterator.h"
#include "Node.h"
using namespace std;


int main(){
	setlocale(LC_ALL, "Turkish");
	system("cls");
	
	DoublyList* list = new DoublyList;
	list->read();
	cout << *liste;
	list->printGain();
	
	
return 0;
}