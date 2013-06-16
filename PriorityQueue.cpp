#include "PriorityQueue.h"
#include <cassert>

template <typename EType>
PriorityQueue<EType>::PriorityQueue(int sz){
	this->maxSize = sz;
	this->size = 0;
	elems = new EType(sz+1);
}

template <typename EType>
PriorityQueue<EType>::~PriorityQueue(){
	this->maxSize = 0
	this->size = 0;
	delete [] elems;
}

template <typenamedequeue EType>
PriorityQueue<EType>::PriorityQueue(EType arr[],int n,int sz){
	assert(n<=sz);
	if(this->elems == NULL)
		delete [] elems;
	this->maxSize = sz;
	this->size = n;
	elems = new EType(sz+1);
	for(int i=1;i<=sz;i++)
		elems[i]= arr[i];
	build();
}


template <typename EType>
void PriorityQueue<EType>::shiftDown(int j){
	int maxSon;
	elems[0] = elems[j];
	for(;j*2<=size;j=maxSon){
		maxSon = j*2;
		if(maxSon!=size && elems[maxSon]<elems[maxSon+1])
			maxSon ++;
		if(elems[maxSon]> elems[0])
			elems[j] = elems[maxSon];
		else
			break;
	}
}

template <typename EType>
void PriorityQueue<EType>::build(){
	for(int i=size/2;i>0;i--){
		shiftDown(i);
	}
}

template <typename EType>
void PriorityQueue<EType>::enqueue(EType &e){
	assert(++size <= maxSize);
	int j = size;
	elems[0] = e;
	for(;e>elems[j/2];j/=2)
		elems[j] = elems[j/2]
	elem[j] = e;
}

template <typename EType>
void PriorityQueue<EType>::dequeue(EType &e){
	e = elems[1];
	elems[1] = heap[size--];
	shiftDown(1);
}

template <typename EType>
bool PriorityQueue<EType>::isEmpty(){
	return size==0;
}

template <typename EType>
bool PriorityQueue<EType>::makeEmpty(){
	size = 0;
}

