/* problem : https://www.codechef.com/KM252020/problems/QM25P5A*/

#include<iostream>
#include<string.h>
#include<math.h>
#include<algorithm>
#include<sstream>
using namespace std;

int rotateBinary(int number){
        int res = 0;
        while(number>0){
            res=res<<1;         
            res = res|(number & 1);             
            number=number>>1;
        }
        return res;
    }

int main()
{
    
 int n;
 cin>>n;
 
 int dec = rotateBinary(n);
cout<<dec;

    return 0;
}