// #include<iostream>
// #include<queue>
// #include<stack>
// using namespace std;

// void reverseQueue(queue<int>& q){
//     stack<int> st;

//     while(!q.empty()){
//         int element = q.front();
//         q.pop();

//         st.push(element);
//     }
//     // aab tak saare element queue k element stack push hongye honge

//     // abb agr stack se bahr nikalenge to queue me insert honge
//     while(!st.empty()){
//         int element = st.top();
//         st.pop();

//         q.push(element);
//     }
// }

// int main(){
//     queue<int> q; // Declare the queue

//     // reverse a queue
//     // the pushment of element in the queue

//     q.push(1);
//     q.push(2);
//     q.push(3);
//     q.push(4);

//     reverseQueue(q);

//     // print all elements inside queue
//     while(!q.empty()){
//         cout << q.front() << " ";
//         q.pop();
//     }

//     return 0;
// }
 

 // this is a thing that sis used to find the reverse in the kth group
 // k is the number of elements to be reversed
 // count is the number of elements in the queue


#include <iostream>
#include <queue>
#include <stack>
using namespace std;

void reverseInKGroup(queue<int>& q, int k, int count) {
    if (count >= k) {
        // toh toh mai pakka reverse krunga 
        stack<int> s;
        for (int i = 0; i < k; i++) {
            int element = q.front();
            q.pop();
            s.push(element);
        }
        // fetch k elements from end insert them in queue
        for (int i = 0; i < k; i++) {
            int element = s.top();
            s.pop();
            q.push(element);
        }
        // 1 case muhje solve krna hai baaki recursion sambhal lega
        reverseInKGroup(q, k, count - k);
    } else {
        // count
        // iska mtlb is queuek front se
        // uthakar queue k end me to elements lo krna hai
        for (int i = 0; i < count; i++) {
            int element = q.front();
            q.pop();
            q.push(element);
        }
    }
}

int main() {
    queue<int> q;
    q.push(10);
    q.push(20);
    q.push(30);
    q.push(40);
    q.push(50);
    q.push(60);
    q.push(70);
    q.push(80);
    q.push(90);
    q.push(100);

    int k = 3;
    int size = q.size();
    // size  -> it tracks the number of elements to reverse

    reverseInKGroup(q, k, size);

    // print all elements inside queue
    while (!q.empty()) {
        cout << q.front() << " ";
        q.pop();
    }
    return 0;
}


//gfg https://www.geeksforgeeks.org/problems/interleave-the-first-half-of-the-queue-with-second-half/1



// sliding window pattern 

// this is the most important problem in this topic

