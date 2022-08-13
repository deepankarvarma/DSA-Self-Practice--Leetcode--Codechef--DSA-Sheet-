#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
    loop:
	while(t--){
	    int n;
	    cin>>n;
	    for(int i=1;i*i<=n;i++){
	        
	            if((n-2*i)%(2+i)==0 && n!=2*i){
	            cout<<"YES"<<endl;
	            goto loop;
	            }
	       
	    }
	    cout<<"NO"<<endl;
	}
	return 0;
}
