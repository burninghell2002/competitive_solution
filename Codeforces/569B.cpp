#include<bits/stdc++.h>
using namespace std;
 
const int N = 100 * 1000 + 20;
int n, a[N], ind1 = 1, ind2 = 1;
vector<int> idx[N];
 
int main() {
	ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0);
	cin >> n;
	for (int i = 0; i < n; i++)
		cin >> a[i];
	for (int i = 0; i < n; i++) 
		if (a[i] <= n)
			idx[a[i]].push_back(i);
	for (int i = 0; i < n; i++)
		if (a[i] > n) {
			a[i] = 1;
			idx[1].push_back(i);
		}
	while (ind1 <= n && ind2 <= n) {
		while (idx[ind1].size())
			ind1++;
		while (idx[ind2].size() < 2 && ind2 <= n)
			ind2++;
		if (ind2 > n || ind1 > n)
			break;
		a[idx[ind2].back()] = ind1;
		idx[ind1].push_back(idx[ind2].back());
		idx[ind2].pop_back();
		ind1++;
	}
	for (int i = 0; i < n; i++)
		cout << a[i] << " ";
	return cout << "\n", 0;
}