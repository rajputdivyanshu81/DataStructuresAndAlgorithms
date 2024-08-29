#include<iostream>
#include<stack>
using namespace std;
int main(){

    /*stack data structue provides a way to serve as a data structure
    adapter class that provides a last in first out (LIFO) data structure..
    it can also be implemented by using the ot her data structure of the code and the algorithms

    */
    stack<int> st;
    st.push(10);
    st.push(20);
    st.push(30);
    st.push(40);

    // if(st.empty() == true){
    //     cout << "the stack is empty";
    // }
    // else{

    //     cout << "the stack is n not empty";

    // }

    //we cannot traverse the stack there is no such thing like iterator in this 



    // cout << "the size of the stack is :" << st.size() << endl;


//this is to delete the last element from the stack formed

    // st.pop();
    // cout <<"when we pop the number of elements gets reduced and the current size is :" <<  st.size() << endl;
    
    //this is to show that which is the top most and the latest element added into the   stack element
    // cout << st.top() << endl;
    return 0;
}