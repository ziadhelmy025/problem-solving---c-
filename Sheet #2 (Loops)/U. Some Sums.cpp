#include <iostream>
#include <conio.h>
using namespace std;
int main()
{
	int n, a, b;
	long long sum = 0, z = 0;
	cin >> n >> a >> b;
	for (int i = 1; i <=n; i++)
	{
	    int t;
	    t = i;
		for ( ; t != 0; )
		{
			sum = sum + t % 10;
			t /= 10;
		}
		if (sum >= a && sum <= b)
		{
			z = z + i;
			sum = 0;
		}
		else
		{
		    sum = 0;
		}
	}
   return 0;
}
