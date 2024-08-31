#include"../../../STD_TYPES.h"
#include <stdlib.h>
#include <stdio.h>

#include"DoublyLinkedList.h"

void DoublyLinkedList_DisplayList(DNode_t* Start)
{
	if(Start == NULL)
	{
		printf("List is empty\n");
		return;
	}
	else
	{
		DNode_t* Ptr =Start;
		while(Ptr != NULL)
		{
			printf("%d\t", Ptr->Info);
			Ptr = Ptr-> Next;
		}
		printf("\n");
	}
}
uint8 DoublyLinkedList_CountNodes(DNode_t* Start)
{
	if(Start == NULL)
	{  
		printf("List is empty\n");
		return 0;
	}
	else
	{
		uint8 Counter =0u;
		DNode_t* Ptr =Start;
		while(Ptr != NULL)
		{
			Counter++;
			Ptr = Ptr-> Next;
		}
		return Counter;
	}
}

sint8 DoublyLinkedList_Search(DNode_t* Start, sint32 Data)
{
	
		sint8 Pos=1;
		DNode_t* Ptr =Start;
		while(Ptr != NULL)
		{
			if(Ptr->Info == Data)
			{
				return Pos;
			}
			Ptr = Ptr-> Next;
			Pos++;
		}
		if(Ptr == NULL)
		{
			return -1;
		}
		
	
	
}