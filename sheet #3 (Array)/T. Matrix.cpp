#include <bits/stdc++.h>
#include<iostream>
using namespace std;
int main()
{
	long long arr[100][100], sum1 = 0, sum2 = 0, z = 0;
	int n;
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			cin >> arr[i][j];
		}
	}
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			if (i == j)
			{
				sum1 = sum1 + arr[i][j];
			}
		}

	}
	for (int i = 0; i < n; i++)
	{
	    int t = n-(i+1) ;
		for (int j = t ; j >= 0 ; j--)
		{
			sum2 = sum2 + arr[i][j];
			break;
		}
	}
	z = sum1 - sum2;
	if (z < 0)
	{
		z *= -1;
	}
	cout << z;
	return 0;
}
