#include <iostream>
using namespace std;

#define n 4

bool checkMarkov(double m[][n])
{
	// access rows

	for (int i = 0; i <n; i++) {
		double sum = 0;
		//access columns
		for (int j = 0; j < n; j++)
			sum = sum + m[i][j];
		if (sum != 1)
		return false;
	}
	return true;
}

int main()
{
	// Matrix 4*4
	double m[4][4] = {
	    {0,0,0.5,0.5},
        {0.5,0.3,0.2,0},
        {1,0,0,0},
        {1,0,0,0}
        };

	// calls the function check()
	if (checkMarkov(m))
		cout << " yes ";
	else
		cout << " no ";
}
