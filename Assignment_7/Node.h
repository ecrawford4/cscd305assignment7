/**
 * Node.h
 * 
 * edited by Ethan Crawford
 * 
 * g++ (Ubuntu 9.4.0-1ubuntu1~20.04.2) 9.4.0
 * Copyright (C) 2019 Free Software Foundation, Inc.
 */
#ifndef NODE_H
#define NODE_H
#include <iostream>
#include <memory>
#include <string>
using namespace std;
/**
 * Node 
 */
template <typename T>
class Node {
private:
    T value;
    weak_ptr<Node<T>> prev;
    shared_ptr<Node<T>> next;

public:
    Node(T val) : value(val) {}
    ~Node() {
        cout << "Deleting node with value " << value << endl;
    }

    T getValue() const { return value; }
    void setValue(T val) { value = val; }

    shared_ptr<Node<T>> getNext() const { return next; }
    weak_ptr<Node<T>> getPrevious() const { return prev; }

    void setNext(shared_ptr<Node<T>> nextPtr) { next = nextPtr; }
    void setPrevious(shared_ptr<Node<T>> previousPtr) { prev = previousPtr; }
};
/**
 * Explicit instantiation for common types (if required)
 */
template <typename T>
void PrintForward(shared_ptr<Node<T>> start);

template <typename T>
void PrintReverse(shared_ptr<Node<T>> end);

#endif
