#define _CRT_SECURE_NO_WARNINGS
#include <bits/stdc++.h>
#include<iostream>
#include<algorithm>
#include<iomanip>
#include<string>
using namespace std;

int main()
{
    std::ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    int n, m;
	char a[100][100];
	cin >> n >> m;
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			a[i][j] = 'l';
		}
	}

	for (int i = 1; i <= n; i++)
	{
		for (int j = 1; j <= m; j++)
		{
			cin >> a[i][j];
		}
	}
	int x, y,c=0,g=0;
	cin >> x>> y;
	for (int i = x - 1; i <= x + 1; i++)
	{
		for (int j = y - 1; j <= y + 1; j++)
		{

			if (a[i][j] == 'x')
			{
             if(x != i || y != j)
				c++;
			}
			if (i >= 1 && j >= 1)
			{
				g++;
			}

		}
	}

	if (g-1==c)
	{
		cout << "yes" << endl;

	}
	else
		cout << "no" << endl;

	return 0;
    return 0;
}

