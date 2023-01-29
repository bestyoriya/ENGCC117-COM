//นายพัขรพล โยริยะ 65543206025-0 Section 1
//https://www.youtube.com/watch?v=N4zfslpa8DM
#include<stdio.h>
#include<stdlib.h>
#include<iostream>

struct Node {
    int data;
    struct Node *next;
};//is the preset

void AddNode(struct Node **protoNode, int data) ;
void ShowAll(struct Node *protoNode) ;
void Swap(struct Node **protoNode,int swapX,int swapY);

void AddNode(struct Node **protoNode, int data){
	while(*protoNode != NULL){
		protoNode = &(*protoNode)->next;
	}//end while

	*protoNode = new struct Node;
	(*protoNode)->data = data;
	(*protoNode)->next = NULL;
}//end Addnode

void ShowAll(struct Node *protoNode){
	printf(" ");//as a value indicator
	
	while (protoNode != NULL){
		printf("%d ", protoNode->data);
		protoNode = protoNode->next;
	}//end while
	printf(" \n");
}//end ShowAll

void Swap(struct Node **protoNode,int swapX,int swapY){
	int a = 0 ;
	struct Node *holder = *protoNode ;
	while(holder != NULL){ //
		if(holder->data == swapX){
			a++ ;
		}//end if
		else if(holder->data == swapY){
			a++ ;
		}//end else if
		holder = holder -> next ;
	}//end while
	if ( a!= 2) return;
	while(*protoNode != NULL){
		if((*protoNode)->data == swapX){
			(*protoNode)->data = swapY;
		}//endif
		else if((*protoNode)->data == swapY){
			(*protoNode)->data = swapX;
		}//endelseif
		protoNode = &(*protoNode)->next;
	}//endwhile
}

int main() {
    struct Node *start; // main node
	start = NULL;// set up node
    AddNode(&start, 10);
    AddNode(&start, 20);
    AddNode(&start, 30);
    AddNode(&start, 40);
    ShowAll(start); //output 10 20 30 40
    Swap(&start, 20, 30);
    ShowAll(start); //output 10 30 20 40
    Swap(&start, 40, 10);
    ShowAll(start); //output 40 30 20 10
    return 0;
}//end main
