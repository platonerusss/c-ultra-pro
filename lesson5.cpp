#include <iostream>
using namespace std;
int main()
{
	int x, y;
	enum location { beach, ocean, field };
	location loc;
	cout << "Enter x,y " << endl;
	cin >> x >> y;
	   if (y > -x + 3)
	   {
		loc = beach;
	   }
	   else if (y < -x + 3)
	   {
		loc = ocean;
	   }
	   else {
		loc = field;
	   }
	switch (loc) {
	   case ocean:
		     cout << "ocean";
		     break;
	   case beach:
		     cout << "beach";
		     break;
	   default:
		cout << "field";
	}
		return 0;
}
