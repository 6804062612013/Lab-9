#include<stdio.h>

//function prototype
void swapValue(int *a, int *b, int *c);
void swapArray(int a[], int b[], int size); 
//or void swapArray(int *a, int *b, int size); 

int main() {
	int a = 1, b = 2, c = 3;
	int *pt1 = &a , *pt2 = &b ,*pt3 = &c ;
	printf("Before swap function: a=%d, b=%d, c=%d\n", a, b, c);
	swapValue( pt1 , pt2 , pt3 );
	printf("After swap function: a= %d, b=%d, c=%d\n", a, b, c);
	//calling swapArray()
 
}
void swapValue(int *a, int *b, int *c){
	int temp;
	temp = *b;
	*b = *c;
	*c = *a;
	*a = temp; 
}

