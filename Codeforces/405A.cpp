#include<iostream>

using namespace std;

int main(){

 int n;

 int cube[100];

 cin>>n;

 for(int i=0;i<n;i++){

		cin>>cube[i]; }

 for(int i =0; i<n ; i++){

        int temp;

        for(int j =i+1; j<n ; j++){

            if (cube[j]< cube[i]){

                    temp =cube[i];

                    cube[i]=cube[j];

			     	cube[j]=temp;

    }

        }

 }

 for(int i=0;i<n;i++){

  cout<<cube[i];

	cout<<endl;

  

 }

    

return 0;

}
