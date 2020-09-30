
/*problem statement : https://www.codechef.com/problems/HS08TEST*/

#include <iostream>
using namespace std;

int main() {
    int amount;
    double balance;
    cin>>amount;
    cin>>balance;
    if((amount % 5 == 0) && (amount <= balance) && (amount+0.5)<=balance)
    {
        cout<<balance-amount-0.5;
    }
    else
    {
        cout<<balance;
    }
	return 0;
}
