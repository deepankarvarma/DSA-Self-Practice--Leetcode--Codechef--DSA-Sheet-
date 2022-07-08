





#include <iostream>
using namespace std;
int main()
{
    int t,product=1;
    cin>>t;
    while(t>0){
        product=t*product;
        t--;
    }
    cout<<product;

    return 0;
}
