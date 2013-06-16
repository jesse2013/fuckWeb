#include <iostream>
#include "PriorityQueue.h"
using namespace std;

int main(){
	PriorityQueue<int> PQobj(15);
	int a[10]  = {5,4,12,34,9,0,5,13,7,6};
	for(int ix=0;ix<10;++ix)
		PQobj.enqueue(a[ix]);
	
	int deqElement(0);
	for(int ix=0;ix<10;ix++){
		PQobj.dequeue(deqElement);
		cout<<deqElement<<",";
	}
	cout<<endl;
	if(PQobj.isEmpty())
		cout<<"PQobj is empty"<<endl;
	PQobj.makeEmpty();
	if(PQobj.isEmpty())
		cout<<"PQobj is empty"<<endl;
	return 0;
}