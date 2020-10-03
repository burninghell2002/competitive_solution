//
//  main.cpp
//  Codeforces_Div 637
//
//  Created by Bharat  on 04/09/20.
//  Copyright © 2020 Bharat Tandon. All rights reserved.
//

#include <iostream>
#include <stack>
#include <vector>
using namespace std;

int main() {
    int t;
    cin>>t;
    
    while(t--){
        int a,b,i=0,j=0,k,p,z,l;
           cin>>a>>b;
           
           if(b > a){
               while(a != b){
                   
                   if(1<=b-a && b-a<= 10){
                       a = a + (b-a);
                       i++;
                   }
                   else if(b-a > 10){
                       z = b-a;
                       k = z/10;
                       a = a + (10*k);
                        
                       i = i+k;
                   }
    
               }
               cout<<i<<endl;
           }
           
           else{
               while(a != b){
                   if(1<=a-b && a-b<= 10){
                       a = a- (a-b);
                       j++;
                   }
                   else if(a-b > 10){
                       l = a-b;
                       p = l/10;
                       a = a - (10*p);
                                              
                       j = j+p;
                   }
                   
               }
               cout<<j<<endl;
           }
    }
    
    
    
   
    return 0;
}
