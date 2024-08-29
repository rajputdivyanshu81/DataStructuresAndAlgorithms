#include<iostream>
#include<set>
#include<unordered_set>
using namespace std;
int main(){
// unordered_set<int>::iterator it = it.begin();


    //sorted collecton of unique elements
    //elements ra estored in sorted order

set<int> st;

st.insert(20);
st.insert(30);
st.insert(40);
st.insert(50);


cout << st.size() << endl;
st.clear();
cout << st.size() << endl;

if(st.empty() ==true){
    cout << "set is empty";
    }
    else{
        cout << "set is not empty";
    }

//now traverse the whole set function
// set<int>::iterator it = st.begin();


//printing the whole
// while(it != st.end()){
//     cout << *it << " ";
//     it++;
// }
    return 0;
}