#ifndef LINKEDLISTHEADER_H_
#define LINKEDLISTHEADER_H_

#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

template <class Type>
class LinkedList
{
	private:
	struct Node
	{
		Type Data;
		Node* Next;
	};
	typedef Node* NodePointer;
	NodePointer Head;

	public:
	// Default Constructor
	LinkedList();
	// Default Destructor
	~LinkedList();
	// Check If Empty
	bool isEmpty();
	// Add A Node
	void Add(Type Data);
	// Delete Node
	void Delete(Type Data);
	// Outputs All
	void Output()const;
};

// Default Constructor
template <class Type>
LinkedList<Type>::LinkedList()
{
	Head = NULL;
}

// Default Destructor
template <class Type>
LinkedList<Type>::~LinkedList()
{
	if(!isEmpty())
	{
		NodePointer Temp;
		while(!isEmpty())
		{
			Temp = Head;
			Head = Head->Next;
			delete Temp;
		}
		Temp = NULL;
	}
}

// Chack If Empty
template <class Type>
bool LinkedList<Type>::isEmpty()
{
	return (Head == NULL);
}

// Add To List
template <class Type>
void LinkedList<Type>::Add(Type Data)
{
	NodePointer NewNode;
	NodePointer TempPtr;
	NodePointer LastPtr;

	NewNode       = new Node;
	NewNode->Data = Data;
	LastPtr       = NULL;
	TempPtr 	  = Head;

	while(TempPtr != NULL && Data > TempPtr->Data)
	{
		LastPtr = TempPtr;
		TempPtr = TempPtr->Next;
	}

	NewNode->Next = TempPtr;

	if(LastPtr == NULL)
	{
		Head = NewNode;
	}
	else
	{
		LastPtr->Next = NewNode;
	}
}

// Remove From List
template <class Type>
void LinkedList<Type>::Delete(Type Data)
{
	NodePointer TempPtr;
	NodePointer LastPtr;

	TempPtr = Head;

	while(TempPtr != NULL && TempPtr->Data != Data)
	{
		LastPtr = TempPtr;
		TempPtr = TempPtr->Next;
	}

	if(TempPtr->Data == Data)
	{
		LastPtr->Next = TempPtr->Next;
		delete TempPtr;
	}
}

// Outputs the List
template <class Type>
void LinkedList<Type>::Output()const
{
	NodePointer TempPtr;
	TempPtr = Head;

	cout << setprecision(2) << fixed;

	while(TempPtr != NULL)
	{
		cout << TempPtr->Data << ' ';
		TempPtr = TempPtr->Next;
	}
	cout << endl;
}
#endif /* LINKEDLISTHEADER_H_ */
