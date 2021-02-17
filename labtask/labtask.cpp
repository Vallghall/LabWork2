#include <iostream>
bool isInArea(double x, double y);
double f(double x);
using namespace std;
void main()
{
	double x, y, result;
	int n;
	cout << "    " << "Greetings, Dear User!" << "\n" <<
		"Two tasks will be offered to you further. You will have to choose one of them." << "\n" << 
		"Task 1. The task is to check if the dot (x;y) is located witin a given area. " << "\n" <<
		"Task 2. Solution of the given system of equations." << "\n" << 
		"Please, enter the number of one of the given tasks: ";
err:
	cin >> n;
	switch (n)
	{
	case 1:
		cout << "Very well! Enter the coordinates x ans y one by one:" << "\n";
		cin >> x >> y;
		result = isInArea(x, y);
		cout << result;
		break;
	case 2:
		cout << "Very well! Enter the variable x:";
		cin >> x;
		result = f(x);
		cout << result;
		break;
	default:
		cout << "Error! You should enter the numbers of the given tasks only!" << "\n" << "Try again: ";
		goto err;
		break;
	}
}