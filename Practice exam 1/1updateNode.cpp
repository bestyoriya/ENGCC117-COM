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
void UpdateNode(struct Node **protoNode,int data, int Ndata) ;
void ShowAll(struct Node *protoNode) ;

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


void UpdateNode(struct Node **protoNode,int data,int Ndata){
	while(*protoNode != NULL){
		if((*protoNode)->data == data){
			break;
		}//end if
		protoNode = &(*protoNode)->next;
	}//end while
	if((*protoNode) != NULL){
		(*protoNode)->data = Ndata ;
	}//end if
}//end Update

int main() {
    struct Node *start; // main node
	start = NULL;// set up node
    AddNode(&start, 10);
    AddNode(&start, 20);
    AddNode(&start, 30);
    AddNode(&start, 40);
    ShowAll(start);//output 10 20 30 40
	UpdateNode(&start,10,99);
	ShowAll(start);//output 99 20 30 40
	UpdateNode(&start,10,98);
	ShowAll(start);//output 98 20 30 40
    return 0;
}//end main
