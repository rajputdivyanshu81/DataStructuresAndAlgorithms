// // stack helps to store data structures in a very beautiful manner

// // that stores data into a lifo ordering

// // last come frist out is lifo

// //gun kartage is an basic example

// // stl ka stack

// #include <iostream>
// #include<stack>
// using namespace std;

// // int main(){

//     // creation
//     // stack<int> s;

//     // //insertion
//     // s.push(10);
//     // s.push(20);
//     // s.push(30);
//     // s.push(40);

//     // //lwts print the size of an array
//     // cout << s.size() << endl;

//     // //check empty or not
//     // cout << s.empty() << endl;

//     // // peek
//     // cout << s.top() << endl;

//     // //removal
//     // s.pop();

//     // cout << s.top() << endl;

// //we want to create stack from the scratch

// class Stack{
// public:
//     int *arr;
//     int size;
//     int top;

//     Stack(int capacity){
//         arr = new int[capacity];
//         size = capacity;
//         top = -1;
//     }

//     void push(int val) {
//         if(top == size - 1){
//             // stack is already full
//             cout << "stack overflow" << endl;
//         }
//         else{
//             // normal case, stack has space
//             top++;
//             arr[top] = val;
//         }
//     }

//     void pop(){
//         if(top == -1){
//             // stack is empty
//             cout << "stack underflow" << endl;
//         }
//         else{
//             // normal case
//             arr[top] = -1;
//             top--;
//         }
//     }

//     int getSize(){
//         return top + 1;
//     }

//     bool isEmpty(){
//         return top == -1;
//     }

//     int getTop(){
//         if(top == -1){
//             cout << "there is no element at the top, as stack is empty" << endl;
//             return -1;
//         }
//         else{
//             // normal case
//             return arr[top];
//         }
//     }

//     void print(){
//         cout << "printing stack" << endl;
//         for(int i = 0; i <= top; i++){
//             cout << arr[i] << " ";
//         }
//         cout << endl;
//     }
// };

// int main(){
//     // creating a stack of initial size 5
//     Stack s(5);
//     s.print();

//     s.push(10);
//     s.push(20);
//     s.push(30);
//     s.push(40);
//     s.push(50);
//     s.push(60);
//     s.print();

//     //we are not able to store into the sṭāck because we didn;t have the appropriate space there

//     cout << s.getTop() << endl;
//     cout << s.getSize() <<endl;
//     s.pop() ;
//     s.print();

// //jitna bhi save hua hai usi mai se save hoga baki se koi extra elements se mtkv nhi hai

//     return 0;
// }





// #include <iostream>
// using namespace std;

// class Stack {
// public:
//     int* arr;
//     int size;
//     int top1;
//     int top2;

//     Stack(int capacity) {
//         arr = new int[capacity]; // Corrected array allocation
//         size = capacity;
//         top1 = -1;
//         top2 = size;
//     }

//     void push1(int value) {
//         // Check if space is available
//         if (top2 - top1 <= 1) {
//             cout << "Stack overflow" << endl;
//         } else {
//             top1++;
//             arr[top1] = value;
//         }
//     }

//     void push2(int value) {
//         // Check if space is available
//         if (top2 - top1 <= 1) {
//             cout << "Stack overflow" << endl;
//         } else {
//             top2--;
//             arr[top2] = value;
//         }
//     }

//     void pop1() {
//         // Check if stack 1 is empty
//         if (top1 == -1) {
//             cout << "Stack underflow" << endl;
//         } else {
//             arr[top1] = 0;
//             top1--;
//         }
//     }

//     void pop2() {
//         // Check if stack 2 is empty
//         if (top2 == size) {
//             cout << "Stack underflow" << endl;
//         } else {
//             arr[top2] = 0;
//             top2++;
//         }
//     }

//     void print() {
//         cout << "top1: " << top1 << endl;
//         cout << "top2: " << top2 << endl;
//         for (int i = 0; i < size; i++) {
//             cout << arr[i] << " ";
//         }
//         cout << endl;
//     }
// };

// int main() {
//     Stack s(5);
//     s.push1(10); // Corrected method call
//     s.push2(10); // Corrected method call
//     s.push2(10); // Corrected method call
//     s.push1(20); // Corrected method call
//     s.push1(20); // Corrected method call
//     s.print();
//     return 0;
// }


// #include <iostream>
// #include <stack>
// using namespace std;

// int main() {
//     stack<char> s; // Corrected stack type to char
//     string name = "mjprukulfiwala";

//     // Push characters onto the stack
//     for (int i = 0; i < name.length(); i++) {
//         char ch = name[i];
//         s.push(ch);
//     }
    

//     // Retrieval of characters from the stack
//     while (!s.empty()) {
//         cout << s.top();
//         s.pop();
//     }
//     cout << endl;

//     return 0;
// }


//insert at the bottom ques


#include <iostream>
#include <stack>
using namespace std;

void insertAtBottom(stack<int> &s ,int value){
    //base case
    if(s.empty()){
        //insert element
        s.push(value);
        return ;
    }

    //1 case hum krenge baaki recursiom sambhal lega 
    int topElement = s.top();
    s.pop();

    //baaki recusiion ko de deya hai
    insertAtBottom(s,value);

    //back track
    s.push(topElement);
}



int main() {
    stack<int> s; // Corrected stack type to char
    s.push(10);
    s.push(20);
    s.push(30);
    s.push(40);
    s.push(50);

    int value = 12;

    insertAtBottom(s,value);

    //traverse
    while(!s.empty()){
        cout << s.top() << " ";
        s.pop();
    }
    cout << endl;
    return 0;
}
