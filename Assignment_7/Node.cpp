/**
 * Node.cpp
 * 
 * edited by Ethan Crawford
 * 
 * g++ (Ubuntu 9.4.0-1ubuntu1~20.04.2) 9.4.0
 * Copyright (C) 2019 Free Software Foundation, Inc.
 */
#include "Node.h"
/**
 * PrintForward method to print the doubly linked list
 */
template <typename T>
void PrintForward(shared_ptr<Node<T>> start) {
    auto temp = start;
    while (temp) {
        cout << temp->getValue() << " -> ";
        temp = temp->getNext();
    }
    //cout << "nullptr" << endl;
	cout << endl;
}
/**
 * PrintReverse method to print the doubly linked list in reverse order
 */
template <typename T>
void PrintReverse(shared_ptr<Node<T>> end) {
    auto temp = end;
    //cout << "nullptr ";
    while (temp) {
        cout << "<- " << temp->getValue() << " ";
        auto prev = temp->getPrevious().lock(); // Use lock() to access the shared_ptr
        temp = prev;
    }
	cout << endl;
}

/**
 * Explicit instantiation for common types (if required)
 */
template void PrintForward<string>(shared_ptr<Node<string>> start);
template void PrintReverse<string>(shared_ptr<Node<string>> end);
