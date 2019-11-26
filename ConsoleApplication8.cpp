
#include <stdio.h>
#include <string.h>

void swapIntegerValues(int* i1, int* i2);
void printString(char* string);
void printIntegerArray(int* arr, int len);
void printIntegerArrayBackwards(int* arr, int len);

void main()
{
	int i1 = 10, i2 = 22;
	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };

	puts("Original values:");
	printf("i1 = %d,  i2 = %d   \n", i1, i2);
	printf("\n");
	swapIntegerValues(&i1, &i2);

	puts("Swapped values:");
	printf("i1 = %d,  i2 = %d   \n", i1, i2);
	printf("\n");

	char abcd[] = "Hello There";
	puts("Printing String:");
	printf("\n");

	puts("Printing Integer Array:");
	printIntegerArray(arr, 10);
	printf("\n");

	puts("Printing Integer Array from 6th element:");
	printIntegerArray(&arr[5], 5);
	printf("\n");

	puts("Printing Integer Array Backwards:");
	printIntegerArrayBackwards(arr, 10);
	printf("\n");

}

void swapIntegerValues(int* i1, int* i2)
{
	// INSERT YOUR CODE HERE
	int t;
	t = *i1;
   *i1 = *i2;
	*i2 = t;
}

void printString(char* string)
{
	// INSERT YOUR CODE HERE
	while (*string != '\0')
	{
		putchar(*string);
		string++;
	}

}

void printIntegerArray(int* arr, int len)
{
	// INSERT YOUR CODE HERE
	int i;
	for (i = 0; i < len; i++)
		printf("%d", *(arr + i));

}

void printIntegerArrayBackwards(int* arr, int len)
{
	// INSERT YOUR CODE HERE
	int i;
	for (i = len - 1; i >= 0; i--)
		printf("%d", *(arr + i));
}
