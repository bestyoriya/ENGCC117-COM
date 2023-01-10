#include <stdio.h>
#include <string.h>
#include <stdlib.h> // Add this header for the 'malloc' function

struct studentNode {
    char name[100];
    int age;
    char gender;
    float GPA;
    struct studentNode *next;
};

void SaveNode(struct studentNode *node, char *name, int age, char gender, float GPA) {
    strcpy(node->name, name);
    node->age = age;
    node->gender = gender;
    node->GPA = GPA;
    node->next = NULL;
}

int main() {
    struct studentNode *start, *now1, **now2;
    start = (struct studentNode *)malloc(sizeof(struct studentNode)); // Allocate memory for the first node
    SaveNode(start, "one", 6, 'M', 3.11);
    start->next = (struct studentNode *)malloc(sizeof(struct studentNode)); // Allocate memory for the second node
    SaveNode(start->next, "two", 8, 'F', 3.22);
    start->next->next = (struct studentNode *)malloc(sizeof(struct studentNode)); // Allocate memory for the third node
    SaveNode(start->next->next, "three", 10, 'M', 3.33);
    start->next->next->next = (struct studentNode *)malloc(sizeof(struct studentNode)); // Allocate memory for the fourth node
    SaveNode(start->next->next->next, "four", 12, 'F', 3.44);
    now1 = start;
    now2 = &start;
    printf("%s\n", now1->name);
    return 0;
}
