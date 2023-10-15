#include <iostream>
using namespace std;

/* int main()
{
	static int k = 1;
	k++; 
	if (k < 11) 
	{
		main();

	}
	else
	{
		cout << "k to 10\n";
	}
	k--;
	cout << k << "\n";
} */

//int main()
//{
//	static int k = 1;
//	int x = k;
//	k++;
//	if (k < 11)
//	{
//		main();
//	}
//	else
//	{
//		cout << "k to 1\n";
//	}
//
//	cout << x << "\n";
//} 

//<summary>
// Count from one to your number
//</summary>
//< param name ="n">End point of counting</param>
//<returns>Show count in console</returns>
void fromOneToN(int n) {
	int y = n;
	static int x = 1;
	cout << x << " ";
	if(x < n) 
	{
		x++;
		fromOneToN(y);
	}
	else {
		exit(0);
	}
}

//<summary>
// Count in diapason from a to b
//</summary>
//< param name ="a">Start point of counting</param>
//< param name ="b">End point of counting</param>
//<returns>Show count in console</returns>
void fromAToB(int a, int b) {
	static int primary_a = a;
	static int primary_b = b;

	if (primary_a < primary_b) {
		int x = a;
		int y = b;
		cout << x << " ";
		if (x < y ) {
			x++;
			fromAToB(x, y);
		}
		else {
			exit(0);
		}
	}
	else {
		int x = a;
		int y = b;
		cout << x << " ";
		if (x > y) {
			x--;
			fromAToB(x, y);
		}
		else {
			exit(0);
		}
	}
}

//<summary>
// Check is number is degree of two
//</summary>
//< param name ="number">Number for checking</param>
//<returns>Show in console is number is degree of two</returns>
void isDegreeOfTwo(float number) {
	if (number == 2) {
		cout << "YES";
		exit(0);
	}
	else if (number < 2) {
		cout << "NO";
		exit(0);
	}
	else {
		isDegreeOfTwo(number / 2);
	}
}

//<summary>
// Count sum of every separated number from right side
//</summary>
//< param name ="number">Your number for summing</param>
//<returns>Return sum of every separated number from right side </returns>
int sumFromRight(int number) {
	static int result = 0;
	if (number == 0) {
		return 0;
	} 
	else {
		return number % 10 + sumFromRight(number / 10);
	}
}

//<summary>
// Count sum of every separated number from left side
//</summary>
//< param name ="number">Your number for summing</param>
//<returns>Return sum of every separated number from left side </returns>
int sumFromLeft(int number) {
	int result = number % 10;
	if (number == 0) {
		return 0;
	}
	else {
		sumFromLeft(number / 10);
	}
	cout << result << " ";
}

//<summary>
// Calculate fibonacci numeric
//</summary>
//< param name ="index">Index of end point of fibonacci numeric</param>
//<returns>Return fibonacci numeric of preseted number </returns>
int fibonacci(int index) {
	static int counter = 0;
	counter++;
	cout << counter << "\n";
	if (index == 0) {
		return 0;
	}
	if (index == 1) {
		return 1;
	}
	return fibonacci(index - 1) + fibonacci(index - 2);
}

//<summary>
// Reverse number
//</summary>
//< param name ="number">Number to reverse</param>
//<returns>Show reversed numeric in console</returns>
void reverse_number(int number) {
	int x = number;
	if (number != 0) {
		cout << x % 10;
		reverse_number(number / 10);
	}
}

//<summary>
// Calculate degree of numeric
//</summary>
//< param name ="number">Number you want to raise to a power</param>
//< param name ="degree">Degree what you want to use of number</param>
//<returns>Return number in power </returns>
int degree_of_number(int number, int degree) {
	if (degree != 1) {
		return degree_of_number(number*number, degree - 1);
	}
	return number;
}

//<summary>
// Count in diapason from a to b
//</summary>
//< param name ="a">Start point of counting</param>
//< param name ="b">End point of counting</param>
//<returns>Show count in console</returns>
int countFromAToB(int start, int finish) {
	static int counter = start;
	if (start < finish) {
		counter += start + 1;
		return countFromAToB(start + 1, finish);
	}
	return counter;
}


int main(){

	//fromOneToN(5);

	//fromAToB(10, 5);6

	//isDegreeOfTwo(256);

	//cout << sumFromRight(179);

	//sumFromLeft(179);

	//cout << fibonachi(12);

	/*reverse_number(321);*/

	//cout << degree_of_number(5, 3);

	cout << countFromAToB(100, 1000);
}
