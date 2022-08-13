#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	    int ns=0,m=0,s=0;
	    cin>>ns;
	    int arr[ns-1];
	    
	    for(int i=0;i<ns-1;i++){
	        cin>>arr[i];
	    }
	    for(int i=0;i<ns-1;i++){
	        s+=arr[i];
	        m=max(arr[i],m);
	    }
	    cout<<s+m<<endl;
	}
	return 0;
}
