#include <stdio.h>

/*
*	Please define your functions after main().
*	You can import standard C / C++ libraries.
*	Recommended: add description of your code.
 //I make some changes
*/

//int getSum(int myArray[]);
//int getSumOfSquares(int myArray[]);
//void printAsChars(int myArray[]);
//double getAverage(int myArray[]);
int subtractAllValues(int myArray[]);
//float invertAllValues(int myArray[] );
void printGroupMemberNames();

int main(void) {
	printGroupMemberNames();

	int row[500], i;
	for (i = 0; i < 500; i++)
		row[i] = i;
	subtractAllValues(row);



	for (i = 0; i < 500; i++)
		printf("%d", row[i]);

	return 1;
}

int subtractAllValues(int myArray[])
{
	int i;
	//printf("subtractAllValues = ");
	for (i = 0; i<500; ++i) {
		myArray[i] = -myArray[i];
	}
}




void printGroupMemberNames() {
	printf("Dara Chheang\n");
	printf("Ratanaphea Chan\n");
	printf("Chhorleang Horm\n");
	printf("Sotheng Chheang\n");
	printf("Savorn Chea\n");
	printf("Madalen Iv\n");
}
