// #include<iostream>
// #include<queue>
// using namespace std;

// class Queue {
//     private:
//     int *arr;
//     int n;
//     int front;
//     int rear;

//     public:
//     Queue(int size) {
//         arr = new int[size];
//         n = size;
//         front = -1;
//         rear = -1;
//     }

//     void push(int val) {
//         if(rear == n - 1) {
//             cout << "overflow" << endl;
//         } else if(front == -1 && rear == -1) {
//             // inserting first element
//             rear++;
//             front++;
//             arr[rear] = val;
//         } else {
//             // normal flow
//             rear++;
//             arr[rear] = val;
//         }
//     }

//     void pop() {
//         if(front == -1 && rear == -1) {
//             // queue is empty
//             cout << "underflow" << endl;
//         } else if(front == rear) {
//             arr[rear] = -1;
//             front = -1;
//             rear = -1;
//         } else {
//             // normal flow
//             arr[front] = -1;
//             front++;
//         }
//     }

//     int getSize() {
//         // number of elements inside a queue
//         if(front == -1 && rear == -1) {
//             return 0;
//         } else {
//             return rear - front + 1;
//         }
//     }

//     int getFront() {
//         if(front == -1) {
//             cout << "Queue is empty" << endl;
//             return -1; // Return a value indicating the queue is empty
//         } else {
//             return arr[front];
//         }
//     }

//     bool isEmpty() {
//         if(front == -1 && rear == -1) {
//             return true;
//         } else {
//             return false;
//         }
//     }

//     int getRear() {
//         if(rear == -1) {
//             cout << "Queue is empty" << endl;
//             return -1; // Return a value indicating the queue is empty
//         } else {
//             return arr[rear];
//         }
//     }
// };
// int main(){
//     // queue<int> q;
//     // //inaertion
//     // q.push(10);
//     // q.push(20);
//     // q.push(30);
//     // q.push(40);

//     // cout << q.front() << endl;
//     // q.pop();
//     // cout << q.front() << endl;

// // doubly ended queue

// // deque<int> dq;
// // // insertion
// // dq.push_front(10);
// // dq.push_front(30);
// // dq.push_front(50);
// // dq.push_back(70);

// // cout << dq.size() << endl;
// // cout << dq.front() << endl;

// // dq.pop_front();
// // cout <<dq.front();

//   Queue q(5);

//     q.push(10);
//     q.push(20);
//     q.push(30);

//     cout << "Front element: " << q.getFront() << endl;
//     cout << "Rear element: " << q.getRear() << endl;
//     cout << "Queue size: " << q.getSize() << endl;

//     q.pop();
//     cout << "Front element after pop: " << q.getFront() << endl;
//     cout << "Queue size after pop: " << q.getSize() << endl;

// }

// #include <iostream>
// #include <deque>
// using namespace std;

// class Deque
// {
//     int *arr;
//     int n;
//     int front;
//     int rear;

// public:
//     Deque(int size)
//     {
//         this->n = size;
//         arr = new int[size];
//         front = -1;
//         rear = -1;
//     }
//     void pushFront(int val)
//     {
//         if(front == 0){
//             // iska mtlb mere pass left side me koi or jagah nhi hai
//             //insert krne k leye
//             cout << " overflow"<< endl;

//         }
//         else if(front == -1 && rear == -1){
//             //quwuw phale empty thi aab mai first element insert krne aay ahu
//             front++;
//             rear++;
//             arr[front] = val;
//         }
//         else{
//             //normal flow
//             front--;
//             arr[front] = val;
//         }
//     }
//     void popBack()
//     {
//         if(front == -1 &&  rear == -1){
//             // is case mai queue phale se hi empty hai
//             cout << "underflow" << endl;
//         }
//         else if(front == rear){
//             // queue mai ekk hi element hai isko remove kr doge to khali ho jayega
//             arr[rear] = -1;
//             front = -1;
//             rear = -1;
//         }
//         else{
//             //normal flow
//             arr[rear] = -1;
//             rear--;
//         }
//     }
//     void pushBack(int val)
//     {
//         if (rear == n - 1)
//         {
//             cout << "overflow" << endl;
//         }
//         else if (front == -1 && rear == -1)
//         {
//             // inserting first element
//             rear++;
//             front++;
//             arr[rear] = val;
//         }
//         else
//         {
//             // normal flow
//             rear++;
//             arr[rear] = val;
//         }
//     }
//     void popFront()
//     {
//         if (front == -1 && rear == -1)
//         {
//             // queue is empty
//             cout << "underflow" << endl;
//         }
//         else if (front == rear)
//         {
//             arr[rear] = -1;
//             front = -1;
//             rear = -1;
//         }
//         else
//         {
//             // normal flow
//             arr[front] = -1;
//             front++;
//         }
//     }
//     void print(){
//         for(int i = 0;i<n;i++){
//             cout << arr[i] << " " ;

//         }
//         cout << endl;
//     }
// };

// int main()
// {

// Deque dq(5);
//   dq.pushFront(10);
//   dq.print();
//   dq.pushFront(20);
//   dq.print();
//   dq.pushBack(35);
//   dq.print();
//     return 0;
// }

// circular queue

#include <iostream>
using namespace std;

class CircularQueue {
public:
    int *arr;
    int n;
    int front;
    int rear;

    CircularQueue(int size) {
        this->n = size;
        arr = new int[size];
        front = -1;
        rear = -1;
    }

    void push(int val) {
        // 4 cases: overflow, first element, circular element, normal flow
        if ((front == 0 && rear == n - 1) || (rear == front - 1)) {
            cout << "overflow ho gya hai" << endl;
        } else if (front == -1 && rear == -1) {
            // inserting first element
            front = rear = 0;
            arr[rear] = val;
        } else if (rear == n - 1 && front != 0) {
            // circular nature
            rear = 0;
            arr[rear] = val;
        } else {
            // normal flow
            rear++;
            arr[rear] = val;
        }
    }

    void pop() {
        // 4 cases: underflow, single element, circular nature, normal case
        if (front == -1 && rear == -1) {
            cout << "underflow" << endl;
        } else if (front == rear) {
            // single element
            arr[front] = -1;
            front = rear = -1;
        } else if (front == n - 1) {
            // circular nature
            arr[front] = -1;
            front = 0;
        } else {
            // normal case
            arr[front] = -1;
            front++;
        }
    }

    int getFront() {
        if (front == -1) {
            cout << "Queue is empty" << endl;
            return -1; // Return a value indicating the queue is empty
        } else {
            return arr[front];
        }
    }

    int getSize() {
        if (front == -1) {
            return 0;
        } else if (rear >= front) {
            return rear - front + 1;
        } else {
            return (n - front) + (rear + 1);
        }
    }

    bool isEmpty() {
        return (front == -1);
    }
};

int main() {
    CircularQueue q(5);

    q.push(10);
    q.push(20);
    q.push(30);
    q.push(40);
    q.push(50);

    cout << "Front element: " << q.getFront() << endl;
    cout << "Queue size: " << q.getSize() << endl;

    q.pop();
    cout << "Front element after pop: " << q.getFront() << endl;
    cout << "Queue size after pop: " << q.getSize() << endl;

    q.push(60);
    cout << "Front element after pushing 60: " << q.getFront() << endl;
    cout << "Queue size after pushing 60: " << q.getSize() << endl;

    return 0;
}

