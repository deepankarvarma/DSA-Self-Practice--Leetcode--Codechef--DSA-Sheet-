#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	    int a,b,count=0;
	    cin>>a>>b;
	    if(a>b){
	       while(b<a){
	           b=b+4;
	           count++;
	       }
	    }
	    else{
	       count=0;
	    }
	    cout<<count<<endl;
	}
	return 0;
}
