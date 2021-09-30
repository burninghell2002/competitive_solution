//https://practice.geeksforgeeks.org/problems/break-numbers0435/0/
#include <bits/stdc++.h>
#define ll long long int
using namespace std;
ll count_of_ways(ll n)
{
    ll count;
    count = (n + 1) * (n + 2) / 2;
    return count;
}
 
// Driver Function
int main()
{
    ll n = 3;
    cout << count_of_ways(n) << endl;
    return 0;
}