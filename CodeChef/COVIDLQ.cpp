/*Link to the question: https://www.codechef.com/problems/COVIDLQ
Question Statement: 
Due to the COVID pandemic, people have been advised to stay at least 6

feet away from any other person. Now, people are lining up in a queue at 
the local shop and it is your duty to check whether they are all following this advice.

There are a total of N
spots (numbered 1 through N) where people can stand in front of the 
local shop. The distance between each pair of adjacent spots is 1 foot. 
Each spot may be either empty or occupied; you are given a sequence A1,A2,…,AN, where for 
each valid i, Ai=0 means that the i-th spot is empty, while Ai=1

means that there is a person standing at this spot. It is guaranteed that the queue is not completely empty.

For example, if N=11
and the sequence A is (0,1,0,0,0,0,0,1,0,0,1), then this is a queue in which 
people are not following the advice because there are two people at a distance of just 3

feet from each other.

You need to determine whether the people outside the local shop are following 
the social distancing advice or not. As long as some two people are standing at a distance smaller 
than 6 feet from each other, it is bad and you should report it, since social distancing is not being followed.

input

    => The first line of the input contains a single integer T denoting the number of test cases. The description of T
        test cases follows.
    => The first line of each test case contains a single integer N

    => The next line contains N space-separated integers A1,A2,…,AN.
*/


#include<iostream>
using namespace std;
void calc(int n)
{
        int a[n];
        int b[n];
        for(int i=1;i<=n;i++)
        b[i]=0;
        int k=1;
        int ctr=0;
        for(int i=1;i<=n;i++)
        cin>>a[i];
        for(int i=1;i<=n;i++)
        {
            if(a[i]==1)
            {
                b[k]=i;
                k++;
            }
            
        }
        if(b[2]==0)
            {
                cout<<"YES\n";
                return;
            }
        for(int i=1;i<=n;i++)
        {
            
            if((b[i]!=0)&&(b[i+1]!=0))
            {
                if(b[i+1] - b[i] < 6)
                    {
                        ctr++;
                    }
            }
        }
        if(ctr >= 1)
        cout<<"NO\n";
        else
        cout<<"YES\n";
}
int main()
{
    int t;
    cin>>t;
    int n;
    for(int i=1;i<=t;i++)
    {
        cin>>n;
        calc(n);
    }
    return 0;
}
