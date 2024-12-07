#ifndef NODE_H
#define NODE_H

#include <iostream>
#include <string>

using namespace std;

template <typename T>
class Node {
private:
	T Value;
	Node<T>* prev;
	Node<T>* next;
public:
	Node<T>(T val) : Value(val) {}
	~Node<T>() {
		cout << "Deleting node with a value " << Value << endl;
	}
	T getValue();
	void setValue(T val) { Value = val; }
	Node<T>* getNext();
	Node<T>* getPrevious();
	void setNext(Node<T>* nextPtr);
	void setPrevious(Node<T>* previousPtr);
};

#endif
