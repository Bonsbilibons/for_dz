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

int sumFromRight(int number) {
	static int result = 0;
	if (number == 0) {
		return 0;
	} 
	else {
		return number % 10 + sumFromRight(number / 10);
	}
}

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

int fibonachi(int index) {
	static int counter = 0;
	counter++;
	cout << counter << "\n";
	if (index == 0) {
		return 0;
	}
	if (index == 1) {
		return 1;
	}
	return fibonachi(index - 1) + fibonachi(index - 2);
}

void reverse_number(int number) {
	int x = number;
	if (number != 0) {
		cout << x % 10;
		reverse_number(number / 10);
	}
}

int degree_of_number(int number, int degree) {
	if (degree != 1) {
		return degree_of_number(number*number, degree - 1);
	}
	return number;
}

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