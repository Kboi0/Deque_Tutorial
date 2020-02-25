// Deque_Tutorial.cpp 
#include <iostream>
#include <deque>
#include <stdio.h>
using namespace std;

void printDeque(deque<int> q) {
	
	while (!q.empty()) {
		cout << q.front() << " ";
		q.pop_front;
	}
	cout << endl;
}

int main()
{
	std::deque<int> mydeque;
	int myInt;
	std::cout << "Enter a few numbers to add to the deque (enter 0 to end):\n";

	do {
		std::cin >> myInt;
		mydeque.push_back(myInt);
	} while (myInt);

	printDeque(mydeque);



}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
