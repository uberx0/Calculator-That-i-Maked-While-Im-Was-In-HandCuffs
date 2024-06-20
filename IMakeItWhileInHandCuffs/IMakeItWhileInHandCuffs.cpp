// I make it while im in handcuffs

#include <iostream>
using namespace std;

int main() {
	float firstnum;
	char sym;
	float secondnum;
	float result;

	cout << "Write first number: ";
	cin >> firstnum;
	cout << endl << "What are we gonna do?(-, +, /, *.): ";
	cin >> sym;
	cout << endl << "Write second number: ";
	cin >> secondnum;

	switch (sym) {
	case '+': result = firstnum + secondnum; break;
	case '-': result = firstnum - secondnum; break;
	case '/': result = firstnum / secondnum; break;
	case '*': result = firstnum * secondnum; break;
	default: cout << "get the fuck out of here";
		return 0; break;
	}
	cout << "Result: " << result;

	return 0;
}