//THIS METHOD MAKES DYNAMIC ARRAY (SIZE CAN BE ALTERED)
//DYNAMIC ARRAY MEANS THAT LETS SAY
//THE SIZE OF VECTOR IS 4 AND WE TRY TO ENTER THE 5TH ELEMENT
//VECTOR WILL MAKE A NEW VECTOR OF SIZE DOUBLE I.E. 8
//AND WILL MOVE ALL THE ELEMENTS OF 1ST VECTOR TO 2ND ONE

//VECTOR ALSO USES CONTIGUOUS MEMORY ALLOCATION 
#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int> v;
    vector<int> a(5,1); //means makes a vector of size 5 and initializes all the element by 1, if no value given initializes by 0
    vector<int> last(a); //the vector last is copy of vector a with all the elements of a pasted in last
    //DIFFERENCE BETWEEN SIZE AND CAPACITY IS THAT SIZE IS THE NUMBER OF ELEMENTS STORED AND CAPACITY IS THE AMOUNT OF MEMORY IT IS OBTAINING
    cout<<"Capacity->"<<v.capacity()<<endl;
    //initially there is no memory assigned

    v.push_back(1);
        cout<<"Capacity->"<<v.capacity()<<endl;
    v.push_back(2);
        cout<<"Capacity->"<<v.capacity()<<endl;
    v.push_back(3);
        cout<<"Capacity->"<<v.capacity()<<endl;
        cout<<"Size->"<<v.size()<<endl;
    //When we tried to insert 3 into vector , it said i dont have memory enough to store only 2 elements and hence 3 was not inserted 
    //due to which a new array of double size was created
    v.push_back(4);
     cout<<"Capacity->"<<v.capacity()<<endl;
     cout<<"Size->"<<v.size()<<endl;
    //this time the space was enough to store 4 as en element hence no new memory was allocated

    cout<<"Element at 2nd index "<<v.at(2)<<endl;
    cout<<"Front "<<v.front()<<endl;
    cout<<"Back "<<v.back()<<endl;
    cout<<"Before pop "<<endl;
    for(int i=0;i<v.size();i++){
        cout<<v.at(i)<<endl;
    }
    v.pop_back();
    cout<<"After pop "<<endl;
    for(int i=0;i<v.size();i++){
        cout<<v.at(i)<<endl;
    }
    //pop always removes the last element which was inserted
    cout<<"Size and capacity before using clear operation "<<v.size()<<" "<<v.capacity()<<endl;
    v.clear();
    cout<<"Size and capacity after using clear operation "<<v.size()<<" "<<v.capacity()<<endl;
    //it is observable that clear operation doesn't removes the memory allocated
    
    //Another way to print all the elements of a vector
    for(int i:a){
        cout<<i<<endl;
    }
    cout<<"Empty of not (return 0/1) "<<a.empty()<<endl;

    return 0;
}