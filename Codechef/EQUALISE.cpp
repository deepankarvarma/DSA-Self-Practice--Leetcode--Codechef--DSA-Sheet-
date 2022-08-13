#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	    int a,b;
	    cin>>a>>b;
	    if(a>b){
	        while(b<a){
	            b*=2;
                
	        }
	       if(b==a)
	       cout<<"YES"<<endl;
	       else
	       cout<<"NO"<<endl;
	    }
	    else if(a==b)
	    cout<<"YES";
	    else{
	        while(b>a){
	            a*=2;
	        }
	        if(b==a)
	       cout<<"YES"<<endl;
	       else
	       cout<<"NO"<<endl;
	    }
	}
	return 0;
}
