template <typename EType>
class PriorityQueue{
public:
	PriorityQueue(int sz);
	PriorityQueue(EType arr[],int n,int sz);
	~PriorityQueue();
	void build(); 
	void enqueue(EType &e);
	void dequeue(EType &e);
	bool isEmpty();
	void makeEmpty();
private:
	int size;
	int maxSize;
	EType *elems;
	void shiftDown(int j);
};