#include "stdafx.h"
#include <iostream>
#include <cmath>

using namespace std;

int main () 
{
	long long N, count, width, sumCount; 
	cin >> N;
	width = ceil((long double)sqrt(1.0*N));
	for (int row = 0; row < width; row++)
	{
		for (int column = 0; column < width; column++)
		{
			count = 2;
			if (row == 0) count += 1; 
			if (column == 0) count += 1; 
			sumCount += count;
			N--;
			if (N == 0) break;
		}
		if (N == 0) break;
	}
	cout << sumCount << endl;
	return 0;
}

