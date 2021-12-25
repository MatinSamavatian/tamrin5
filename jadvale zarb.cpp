#include <iostream>
#include<conio.h>
#include<math.h>

using namespace std;

int main()
{
	int j, i, n, m;

	cout << "\n\n Display the multipliaction table vertically from 1 to n*m:\n";
	cout << "-------------------------------------------------------------\n";
	cout << "Input the number upto: ";
	cin >> n;
	cout << "Input the number upto: ";
	cin >> m;

	cout << "Multiplication table from 1 to " << n << endl;
	for (i = 1; i <= m; i++)
	{
		for (j = 1; j <= n; j++)
		{
			if (j <= n - 1)
				cout << j << "x" << i << "=  " << i * j << "   ";
			else
				cout << j << "x" << i << "=  " << i * j << "    ";
		}
		cout << endl;
	}


	system("pause<0");
}