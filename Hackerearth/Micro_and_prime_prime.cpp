// Problem Link - https://www.hackerearth.com/practice/math/number-theory/primality-tests/practice-problems/algorithm/micro-and-prime-prime-1/


#include<bits/stdc++.h>
using namespace std ;
#define maxN 1000001 
vector<long long int> prime(maxN , 1) ;
vector<int> pp(maxN);
 
 
 
void sieve(){
    prime[0] = prime[1] = 0 ;
	for(long long int i = 2 ; i*i <= maxN ; i++){
        if(prime[i] == 1){
			for(long long int j = i * i ; j <= maxN ; j+= i){
				prime[j] = 0 ;
			}
		}
	}
 
    int count = 0 ;
	for(int i = 1 ; i <= maxN ; i++){
		if(prime[i]) count++;
		if(prime[count] == 1) pp[i] = 1 ;
		else pp[i] = 0 ;
	}
 
	for(int i = 1 ; i <= maxN ; i++){
		pp[i] += pp[i-1] ;
	}
 
}
 
 
 
 
int main(){
   
   sieve();
  
   int t ;
   cin >> t ;
   while(t--){
	   int l , r ;
	   cin >> l >> r ;
     int c = 0 ;
	//  for( int i = l ; i <= r ; i++){
	// 	 c += pp[i];
 
	//  }
	//  cout<<c<<endl;
 
	cout<<pp[r]-pp[l-1]<<endl;
 
   }
	return 0 ;
}
