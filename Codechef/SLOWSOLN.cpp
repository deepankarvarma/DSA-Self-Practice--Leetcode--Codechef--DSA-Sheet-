#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	   int a,b,c;
	    cin>>a>>b>>c;
	    int count=0;
	    int sum=0;
	    while(count<a && c>0){
	        int d=0;
	        if(c>b){
	        d=b;
	        c=c-b;
	        }
	        else{
	        d=c;
	        c=0;
	        }
	        count++;
	        sum=sum+pow(d,2);
	    }
	    cout<<sum<<endl;
	}
	return 0;
}
