#include <iostream>
#include <iomanip>
#include <limits>

using namespace std;

int main() 
{
	int x = 0, y = 0;
int MovesLeft = 4;
	
	char move;

	while (MovesLeft > 0)
	{
			int backX = x, backY = y;
		 cout <<endl<< "Moves left: " << MovesLeft << endl;
		cout <<endl<< "Type in direction(s,n,w,e): ";
		cin >> move;
		enum location { beach, ocean, field };
		location loc;
		switch (move)
		{
		case 's':
		{
			y--;
			break;
		}
		case 'n':
		{
			y++;
			break;
		}
		case 'w':
		{
			x--;
			break;
		}
		case 'e':
		{
			x++;
			break;
		}
		}
		MovesLeft--;
	if (x<0 || x>2 || y<0 || y>2)
	{
		cout<<"Sorry there is the end of world...";
		x = backX;
		y = backY;
	}
		else
		{
		if (x == 0)
		{
			cout << "You are in the ocean\n";
			loc = ocean;
		}
		else if (x == 1)
		{
			cout << "You are on the beach\n";
			loc = beach;
		}
		else if (x == 2 && y == 1)
		{
			cout << "You are on the field\n";
			loc = field;
		}
		else if (x == 2 && y == 0)
		{
			cout << "You are on the field\n";
			loc = field;
		}
		else if (x == 2 && y ==2)
		{
			cout << "You found a treasure! Victory!!!";
			loc = field;
			return 0;
		}
		}
		cout<<endl<<"Current position: "<<x<<" "<<y;
	}
	cout << endl << endl << "GAME OVER! You ran out of moves and died! HAHAHHAHAAH!";
	cout << endl << "Final position: " << x << " " << y;
	
	return 0;
}
