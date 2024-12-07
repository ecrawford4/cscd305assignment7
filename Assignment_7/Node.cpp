#include "Node.h"

template <class T>
T Node<T>::getValue()
{
	return Value;
}

template <class T>

Node<T>* Node<T>::getNext()
{
	return next;
}

template <class T>
void Node<T>::setNext(Node<T>* nextPtr)
{
	next = nextPtr;
}

template <class T>
Node<T>* Node<T>::getPrevious()
{
	return prev;
}

template <class T>
void Node<T>::setPrevious(Node<T>* prevPtr)
{
	prev = prevPtr;
}


template<typename T>
void PrintForward(Node<T>* start) {
	Node<T>* temp = start;

	while (temp) {

		cout << temp->getValue() << "-> ";
		temp = temp->getNext();
	}
	cout << endl;
}
template<typename T>
void PrintReverse(Node<T>* end) {

	Node<T>* temp = end;
	while (temp) {
		cout << "<-" << temp->getValue() << " ";
		temp = temp->getPrevious();
	}
	cout << endl;
}

template <typename T>
void deleteList(Node<T>* start)
{
	Node<T>* temp = start;
	while (start) {
		temp = start;
		start = start->getNext();
		delete(temp);
	}
}
