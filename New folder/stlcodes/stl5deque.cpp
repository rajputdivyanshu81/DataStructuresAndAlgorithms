#include<iostream>
#include<queue>
using namespace std;
int main(){

    //this is similar to the arrays bt  this have certain special things that helps. it allows efficient insertion and the removal at both the ends.
    

    //creation
    deque<int> dq;

    //insertion
    dq.push_back(10);
    dq.push_back(20);
    dq.push_back(30);
    dq.push_back(40);

//  cout << dq.size()<< endl;
//we can also use the the function called as the erase
// dq.erase(dq.begin(),dq.end());
//  cout << dq.size();
    // we can use the value of insert in this


// cout << dq.size() << endl;
// dq.clear();
// cout << dq.size();

//we can find the using the index of an array
// cout << dq[0]<< endl;
// cout << dq.at(3) << endl;


//we can use itertor to traverse the array and that helps a lot in the problems

// deque <int>::iterator it = dq.begin();
// while(it != dq.end()){
//     cout << *it << " ";
//     it++;
// }

    // dq.push_front(100);

    // dq.push_front(200);
    
    // dq.push_front(300);
    // cout << dq.size()<< endl;

    // dq.pop_front();
    //   cout << dq.size()<< endl;

     
    //  dq.pop_back();
    //    cout << dq.size()<< endl;

    return 0;
}