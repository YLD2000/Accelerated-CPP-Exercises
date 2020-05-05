#include <iostream>
#include <string>

using std::cin; using std::cout; using std::endl; using std::string;

// Exercise 2-4

/*
int main()
{
	cout << "Enter your first name: ";

	string name;
	cin >> name;

	cout << "Specify the number of spaces between the boarder and greeting message: ";

	double padcols;
	cin >> padcols;

	cout << "Specify the number of rows between the boarder and greeting message: ";

	double padrows;
	cin >> padrows;

	string greeting = "Hello, " + name + " !";

	const int rows = padrows * 2 + 3;
	string::size_type cols = greeting.size() + padcols * 2 + 2;

	double spacecounter = 0;

	cout << endl;

	for (int r = 0; r != rows; ++r)
	{
		string::size_type c = 0;

		while (c != cols) {

			if (r == 0 || c == 0 || r == rows - 1 || c == cols - 1) {
				cout << "*";
			}
			else if (r == padrows + 1 && c == padcols + 1) {
				cout << greeting;
				c += greeting.size()-1;
			}
			else {
				cout << " ";
				++spacecounter;
			}

			++c;
		}
		cout << endl;
	}

	cout << endl << "The number of spaces in the greetings are: " << spacecounter << endl;

	return 0;
}

*/

/*

// Exercise 2-5

int main() {

	cout << "Do you want a Square, Rectangle, or Triangle?" << endl;

	string shape;
	cin >> shape;

	string square = "Square", rectangle = "Rectangle", triangle = "Triangle";

	if (shape == square)
	{
		cout << "What is the desired side length?" << endl;

		int squarelength;
		cin >> squarelength;

		for (int r = 0;r != squarelength;++r)
		{
			for (int c = 0;c != squarelength;++c)
			{
				if (r == 0 || r == squarelength - 1 || c == 0 || c == squarelength - 1)
				{
					cout << "*";
				}
				else cout << " ";
			}
			cout << endl;
		}
	}
	else if (shape == rectangle)
	{
		cout << "What is the desired length?" << endl;

		int length;
		cin >> length;

		cout << "What is the desired width?" << endl;

		int width;
		cin >> width;

		for (int r = 0;r != length;++r)
		{
			for (int c = 0;c != width;++c)
			{
				if (r == 0 || r == length - 1 || c == 0 || c == width - 1)
				{
					cout << "*";
				}
				else cout << " ";
			}
			cout << endl;
		}

	}
	// Triangle program doesn't work yet...
	else if (shape == triangle)
	{
		cout << "What is the desired width (odd numbers only)?" << endl;

		int width;
		cin >> width;

		cout << "What is the desired height?" << endl << endl << endl;

		int height;
		cin >> height;

		int midpoint = width / 2;

		int ratio = height / width;

		if (ratio == 0)
		{
			ratio = width / height;
		}

		for (int r = 0; r != height; ++r)
		{
			for (int c = 0; c != width; ++c)
			{
				if (r == 0 && c == midpoint)
				{
					cout << "*";
				}
				else if (r == height - 1)
				{
					cout << "*";
				}
				else if (r > 0 && r < height - 1)
				{
					if (width / height != 0)
					{
						if (c == r * ratio + midpoint || c == r * ratio - midpoint)
						{
							cout << "*";
						}
						else
						{
							cout << " ";
						}
					}
					else if (height / width != 0)
					{
						if (r % (midpoint - 2) == 0 && c == midpoint - r/ratio || c == midpoint + r/ratio )
						{
							cout << "*";
						}
						else
						{
							cout << " ";
						}
					}
				}
				else
				{
					cout << " ";
				}
			}
			cout << endl;
		}
	}
	else
	{
		cout << "Invalid shape input." << endl;
	}
}

*/

//Exercise 2-7

int main() {
	for (int i = 10; i >= -5; --i)
		cout << i << endl;
}

