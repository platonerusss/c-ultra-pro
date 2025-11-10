#include <iostream>
#include <iomanip>
#include <limits>
using namespace std;
int main()
{
int a, b, c, d;
char dummy;
cout << "Enter a/b, c/d" << endl;
cin >> a >> dummy >> b >> c >> dummy >> d;

int n, f;
char ch;
cout << "Which operation? Enter +, -, *, /" << endl;
cin >> ch;

switch (ch) {
case '+':
	n = a * d + c * b;
	f = b * d;
	break;
case '-':
	n = a * d - c * b;
	f = b * d;
	break;
case '*':
	n = a * c;
	f = b * d;
	break;
case '/':
	n = a * d;
	f = b * c;
	break;
default:
	cout << "Invalid operation" << endl;
	return 1;
}
cout << "Answer: " << n << "/" << f << endl;
return 0;
}