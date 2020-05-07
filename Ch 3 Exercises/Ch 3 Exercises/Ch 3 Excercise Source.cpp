#include <algorithm>
#include <iomanip>
#include <ios>
#include <iostream>
#include <string>
#include <vector>

using std::cin;
using std::cout; 
using std::endl;
using std::setprecision;
using std::sort;
using std::streamsize;
using std::string;
using std::vector;

// Chapter example

/*
int main()
{
	cout << "Please enter your name: ";

	string name;
	cin >> name;

	cout << endl << "Hello " << name << "!" << endl;

	cout << endl << "Please enter your Midterm grade: ";

	double midterm;
	cin >> midterm;

	cout << endl << "Please ender you Final grade: ";

	double final;
	cin >> final;

	cout << endl << "Please enter your Homework grades: ";

	double x, sum = 0, counter = 0, average;
	vector<double> homework;

	while (cin >> x) 
	{
		homework.push_back(x);
		++counter;
		sum += x;
	}

	typedef vector<double>::size_type vec_sz;
	vec_sz size = homework.size();

	if (size == 0)
	{
		cout << "Please enter homework grades!" << endl;
		return 1;
	}

	sort(homework.begin(), homework.end());
	
	vec_sz mid = size / 2;

	double median = size % 2 == 0 ? (homework[mid] + homework[mid - 1]) / 2 : homework[mid];

	streamsize prec = cout.precision();

	cout << "Your final grade is " << setprecision(3) << 0.2 * midterm + 0.4 * final + 0.4 * median << setprecision(prec) << "." << endl;

	return 0;
}
*/

// Exercsie 3-2

/*
int main()
{
	cout << "Enter a set of numbers: ";

	double x;
	vector <double> numset;

	while (cin >> x)
	{
		numset.push_back(x);
	}
	
	typedef vector<double>::size_type vec_sz;

	vec_sz size = numset.size();

	if (size == 0)
	{
		cout << "Failed to enter numbers" << endl;
		return 1;
	}

	sort(numset.begin(), numset.end());

	vec_sz q1 = size/4, q2 = size/4*2, q3 = size/4*3, q4 = size;
	
	cout << endl << "The first quartile is ";
	
	for (vec_sz i = q4; i > q3; --i)
	{
		cout << numset[i-1] << ", ";
	}
	
	cout << endl << "The second quartile is ";

	for (vec_sz i = q3; i > q2; --i)
	{
		cout << numset[i-1] << ", ";
	}
	
	cout << endl << "The third quartile is ";

	for (vec_sz i = q2; i > q1; --i)
	{
		cout << numset[i-1] << ", ";
	}
	
	cout << endl << "The fourth quartile is ";

	for (vec_sz i = q1; i > 0; --i)
	{
		cout << numset[i-1] << ", ";
	}

	cout << endl;

	return 0;
}
*/

// Exercise 3-3

int main()
{
	cout << "Type a sentence: ";

	string x;

	vector<string> words;
	vector<double> wordcounter;
	
	typedef vector<string>::size_type vec_sz;

	int j = 0;

	while (cin >> x)
	{
		words.push_back(x);
		wordcounter.push_back(1);

		bool matchindicator = 0; 

		vec_sz stringsize = words.size();

		if (j >= 1)
		{
			for (vec_sz i = 0; i < stringsize - 1 && matchindicator == 0; ++i)
			{
				if (x == words[i])
				{
					++wordcounter[i];
					matchindicator = 1;
					break;
				}
			}

			if (matchindicator == 1)
			{
				words.pop_back();
				wordcounter.pop_back();
			}
		}
		++j;
	}

	vec_sz stringsize = words.size();

	cout << "The number of times each word was repeated in the entered sentence is: " << endl;

	for (int i = 0; i < stringsize; ++i)
	{
		cout << words[i] << ": " << wordcounter[i] << endl;
	}

	return 0;
}