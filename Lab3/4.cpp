#include <stdio.h> 

struct person
{
int age;
float height;
};

int main()
{
	struct person *personPtr, person1;
	personPtr = &person1;
	
	printf("Enter age: ");
	scanf("%d", &personPtr->age);
	
	printf("Enter height: ");
	scanf("%f", &personPtr->height);

	printf("Age: %d\n", personPtr->age); 
	printf("height: %f", personPtr->height);

	return 0;
}//end function