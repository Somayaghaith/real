#ifndef DOUBLYLINKEDLIST_H
#define DOUBLYLINKEDLIST_H


typedef struct dnode
{
	struct dnode* Prev;
	struct dnode* Next;
	sint32 Info;
	
}DNode_t;
void DoublyLinkedList_DisplayList(DNode_t* Start);

uint8 DoublyLinkedList_CountNodes(DNode_t* Start);

sint8 DoublyLinkedList_Search(DNode_t* Start, sint32 Data);


#endif