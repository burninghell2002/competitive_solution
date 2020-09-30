#include<bits/stdc++.h>
using namespace std;
#define MOD 1000000007
int allmask;
std::vector<int> caps[101];
int dp[1025][101];

long long int countWaysUtil(int mask, int i){
    if(mask == allmask) return 1;
    if(i>100) return 0;
    if(dp[mask][i]!= -1) return dp[mask][i];
    //in case the cap is skipped
    long long int ways = countWaysUtil(mask, i+1);
    int size = caps[i].size();
    // So, assign one by one ith cap to all the possible persons
    // and recur for remaining caps.
    for(int j =0;j<size;j++){
        if(mask&1<<caps[i][j]) continue;
        ways += countWaysUtil(mask | 1<<caps[i][j],i+1)
        ways %= MOD;
    }
    return dp[mask][i] = ways;
}

int main(){
    int n;
    cin>>n;
    string str,temp;
    int x;
    getline(cin,str);   // to get rid of newline character
    for(int i =0;i<n;i++){
        getline(cin,str);
        stringstream s(str);
        while(s>>temp){
            stringstream s1;
            s1<<temp;
            s1>>x;
            caps[x].push_back(i);
        }
    }
    // All mask is used to check whether all persons
    // are included or not, set all n bits as 1
    allmask = (1 << n) - 1;

    // Initialize all entries in dp as -1
    memset(dp, -1, sizeof dp);

    // Call recursive function count ways
    cout << countWaysUtil(0, 1) << endl;
    return 0;
}
