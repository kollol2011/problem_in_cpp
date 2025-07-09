#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int T;
	cin>>T;
	for(int i=0;i<T;i++){
	   int A,B,C;
	    cin>>A>>B>>C;
	 double average=(A+B)/2.0;
	   if(average>C){
	       cout<<"YES\n";
	   }else{
	       cout<<"NO\n";
	   }     
	}
}

