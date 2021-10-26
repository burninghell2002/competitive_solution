#include <iostream>
#include <cstdio>
#include <bits/stdc++.h>
#include <string>
#include <cctype>
 
using namespace std;
 
#define pb push_back
#define br "\n"
 
int main() {
	// Complete the code.

	int x;
	cin >> x;
	int n, d;
	vector<int> v;
	int flag = 0, temp;
 
	while (x--) {
		cin >> n >> d;
		for (int i = 0; i < n; ++i)
		{
			cin >> temp;
			v.pb(temp);
		}
		temp = 0;
 
		sort(v.begin(), v.end());
		if (v[0] + v[1] < d + 1)
		{
			cout << "YES" << br;
		} else {
			for (int i = 0; i < n; ++i)
			{
				if (v[i] > d)
				{
					flag = 1;
					break;
				}
			}
			if (!flag)
			{
				cout << "YES" << br;
			} else {
				cout << "NO" << br;
			}
 
		}
		flag = 0;
 
 
		v.clear();
	}
 
 
	return 0;
}
