// maxcoloumn.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
int main()
{
	int A[2][2];
	cout << "enter elements" << endl;
	for (int i = 0; i < 2; i++)
	{
		for (int j = 0;j < 2;j++)
		{
			cin >> A[i][j];
			
		}
		
	}
	for (int i = 0; i < 2; i++)
	{
		for (int j = 0;j < 2;j++)
		{
			cout << A[i][j] << " ";
		}
		cout << endl;
	}
	cout << "max element in each column" << endl;
	for (int j = 0; j < 2; j++)
	{
		int max = A[0][j];
		for (int i = 1; i < 2; i++)
		{
			if (A[i][j] > max)
			{
				max = A[i][j];
			}
		}
		cout << " coloum " << j << " : " << max << endl;
	}
}
