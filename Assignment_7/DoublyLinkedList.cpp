#include "Node.h"
#include "Node.cpp"

void createDoublyLinkedList();

int main() {

	createDoublyLinkedList();

	return 0;
}

void createDoublyLinkedList() {
	Node<string>* start;
	Node<string>* end;
	Node<string>* nd = new Node<string>("Tom");

	start = nd;
	end = start;

	auto nd1 = new Node<string>("Dick");

	nd1->setPrevious(end);
	end->setNext(nd1);
	end = nd1;

	auto nd2 = new Node<string>("Harry");

	nd2->setPrevious(end);
	end->setNext(nd2);
	end = nd2;

	PrintForward(start);
	PrintReverse(end);

	deleteList(start);


}