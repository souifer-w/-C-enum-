#include <iostream>

using namespace std;

enum encolor { red = 1 , green = 2 ,blue = 3,  };

int main() {

	cout << "the color " << endl;
	cout << "***********************************" << endl;
	cout << " please enter your color" << endl;
	cout << " (1) red" << endl;
	cout << " (2) green" << endl;
	cout << " (3) blue" << endl;
	cout << "**********************************" << endl;
	cout << " your color" << endl;

		int c;
		encolor color;
		
		cin >> c;
		color = (encolor)c;


		switch (color)
		{
		case encolor::red:

			system("color F4");

			break;

		case encolor::green:

			system("color 1F");
			break;



		case encolor::blue:
			system("color F2");
			break;


		
		}



		return 0;

}