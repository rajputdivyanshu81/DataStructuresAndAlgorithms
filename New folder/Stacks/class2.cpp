// #include<iostream>
// #include<stack>
// using namespace std;


// //this is the thing which os used to print the middle of the stack

// void printMiddle(stack<int> &s,int count){
//     //base case
//     if(count  == 0){
//         cout << s.top() << endl;
//         return ;
//     }
//     //1 case sol;ve kkarna hai
//     int topElement = s.top();
//     s.pop();
//     count--;

//     //baaki recursion karega
//     printMiddle(s,count);

//     //backtrack
//     s.push(topElement);
// }


// int main (){
//     stack<int> s;
//     s.push(10);
//     s.push(20);
//     s.push(30);
//     s.push(40);
//     s.push(50);

//     int count = s.size()/2;
//     printMiddle(s,count);
//     return 0;
// }



// check a stack is sorted or not


// #include<iostream>
// #include<stack>
// #include<limits.h>
// using namespace std;

// bool checkSorted(stack<int> &s,int element1){
//     //base case
//     if(s.empty()){
//         //iska mtlb ye hai stack pooora compare ho chuka hai poora sorted hai
//         return true;
//     }

//     //1 case mai cheack kr rha hu
//     int element2 = s.top();
//     s.pop();
//     if(element2 < element1){
//         //iska mtlb aagecheck kr sakte hai
//         bool aageKaAns = checkSorted(s,element2);
//         return aageKaAns;
//     }
//     else{
//         return false;
//     }
// }

// int main(){
//     stack<int> s;
//     s.push(10);
//     s.push(50);
//     s.push(30);
//     s.push(40);
//     s.push(50);

// int element1 = INT8_MAX;
// cout << checkSorted(s,element1) << endl;
//     return 0;
// }


//reverse a stack by recursion

// #include<iostream>
// #include<stack>
// using namespace std;

// void insertAtBottom(stack<int> &s,int val){

//     // base case
//     if(s.empty()){
//         s.push(val);
//         return;
//     }

//     // 1 case mera baaki recursion ka hai
//     int topE = s.top();
//     s.pop();

//     //baaki recursion
//     insertAtBottom(s,val);

//     // backtrack
//     s.push(topE);
// }

// void reverseStack(stack<int>& s){
//     //base case
//     if(s.empty()){
//         return ;
//     }
//     // 1 case mera
//     int topE = s.top();
//     s.pop();

//     //baaki kon sambhalega recursion hi na
//     reverseStack(s);

//     //jab vapas aaunga 
//     insertAtBottom(s,topE);
// }

// void print(stack<int>& s){
// while(!s.empty()){
//     cout << s.top() << " ";
//     s.pop();
// }
// }
// int main(){
//     stack<int> s;
//     s.push(10);
//     s.push(20);
//     s.push(30);
//     s.push(40);
//     s.push(50);
//     reverseStack(s);

//     print(s);
//     return 0; 
// }


//sorted insert


// #include <iostream>
// #include <stack>
// using namespace std;

// void sortedInsert(stack<int>& s, int val) {
//     // Base case
//     if (s.empty() || s.top() < val) {
//         s.push(val);
//         return;
//     }

//     // 1 case
//     int topE = s.top();
//     s.pop();

//     // Recursive call
//     sortedInsert(s, val);

//     s.push(topE);
// }

// void print(stack<int> s) {
//     while (!s.empty()) {
//         cout << s.top() << " ";
//         s.pop();
//     }
//     cout << endl;
// }

// int main() {
//     stack<int> s;
//     s.push(10);
//     s.push(20);
//     s.push(30);
//     s.push(40);
//     s.push(50);

//     int val = 23;
//     sortedInsert(s, val);

//     print(s);
//     return 0;
// }



//valid parenthesis

// leetcode