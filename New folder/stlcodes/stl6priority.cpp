#include<iostream>
#include<queue>
using namespace std;
int main(){
//here insertion is not at a constant time due to the heapify function



    // amin heap is also there and below we define it below
    priority_queue<int,vector<int>,greater<int> > pq;


    pq.push(100);
    pq.push(50);
    pq.push(75);


//yha pe top wala element sbse chota hota h and max heap mai priority wala element sbse bada hota h

    // cout << pq.top() << endl;

    // pq.pop();

    // cout << pq.top() << endl; 





    //priority queue = heap

    //in this which have the highest priority can be fetched first

    //creation
    // priority_queue<int> pq;
    //max_heap -> minimum value -> highest  priority

    // pq.push(10);
    // pq.push(20);
    // pq.push(30);
    // pq.push(40);


    //yha pe top o wala elelemnt higehsy priority wla element print hota h
    // cout << pq.top() << endl;

    // //pop krne pe higehst priority wala element pop hota h
    // pq.pop();
    // cout << pq.top() << endl;
    return 0;
}