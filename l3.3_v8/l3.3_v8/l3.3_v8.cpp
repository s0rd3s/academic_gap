#include <math.h>
#include <iostream>
#include <cmath>

using namespace std;

int main()
{

	const int n = 20000;
	bool array[n];
	int prost[1000];
	for (int i = 0; i < 1000; i++)
	{
		prost[i] = i;
	}
	for (int i = 0; i < 1000; i++)
	{
		for (int j = 2; j < i; j++)

			if (i % j == 0)
			{
				prost[i] = 0;
			}
	}
	for (int i = 0; i < n; i++)
	{
		array[i] = true;
	}
	for (int i = 0; i < 1000; i++)
	{
		if (prost[i] != 0 && prost[i] != 1)
		{
			for (int j = 1000; j <= 9999; j++)
			{

				if (j % prost[i] == 0)
				{
					array[j] = false;
				}
			}
		}
	}


	for (int i = 1000; i <= 9999; i++)
	{
		if (i / 1000 + (i / 100) % 10 == i % 10 + (i % 100) / 10)
		{
			if (array[i] == true)
			{
				cout << i << endl;
			}
		}

	}
}

