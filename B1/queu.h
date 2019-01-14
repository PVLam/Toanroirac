#ifndef QUEUE_H
#define QUEUE_H
#include <iostream>
#include "node.h"
using namespace std;
template<class T>

class Queue
{
private:
	Node<T> *queue;
public:
	Queue()
	{
		queue = 0;
	};
	void EnQueue(T value)
	{
		Node <T> *n = new Node<T>;
		n->data = value;
		n->next = 0;
		if(queue == 0)
		{
			queue = n;
		}
		else
		{
			Node<T> *p = queue;
			while( p->next != 0 )
			{
				p = p->next;
			}
			p->next = n;
		}	
	};
	T DeQueue()
	{
		T t = queue->data;
		Node<T> *q = queue;
		queue = queue->next;
		delete q;
		return t;
	};
	bool IsEmpty()const
	{
		return queue == 0;
	};
};

#endif