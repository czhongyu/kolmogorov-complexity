//#include <bits/stdc++.h>
#include <iostream>
#include <fstream>
using namespace std;

int main()
{
	int i;
	char k;
	char c;
	freopen("part1-1.txt", "rb", stdin);
	freopen("part1-1char.txt", "wb", stdout);
	do
	{
		for (i = 0, k = 0; i < 8 && (c = getchar()) != EOF; i++)
			k = k * 2 + c - '0';
	} while (c != EOF && cout << k);
}