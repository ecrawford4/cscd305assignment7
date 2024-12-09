/**
 * DoublyLinkedList.cpp
 * 
 * edited by Ethan Crawford
 * 
 * g++ (Ubuntu 9.4.0-1ubuntu1~20.04.2) 9.4.0
 * Copyright (C) 2019 Free Software Foundation, Inc.
 */
#include "Node.h"
/**
 * CreateDoublyLinkedList method
 */
void createDoublyLinkedList();
/**
 * Main function
 */
int main() {
    createDoublyLinkedList();
    return 0;
}
/**
 * Create a doubly linked list with three nodes
 */
void createDoublyLinkedList() {
    shared_ptr<Node<string>> start;
    shared_ptr<Node<string>> end;

    auto nd = make_shared<Node<string>>("Tom");
    start = nd;
    end = start;

    auto nd1 = make_shared<Node<string>>("Dick");
    nd1->setPrevious(end);
    end->setNext(nd1);
    end = nd1;

    auto nd2 = make_shared<Node<string>>("Harry");
    nd2->setPrevious(end);
    end->setNext(nd2);
    end = nd2;

    PrintForward(start);
    PrintReverse(end);
}