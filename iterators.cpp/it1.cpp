#include<iostream>
#include<vector>
#include<forward_list>
#include<list>
using namespace std;
int main(){

    /*
    typees of iterator are of five types
    input iterator,read only foraward moving     output iterator,write only forward moving
       forward iterator,read nasd write and as welll as forward moving        bidirestional iterator,read and write  and forward moving and as well as backward moving     random access iterator,read and write and forward and backward and random access 

       */

// vector<int> arr;
// arr.push_back(10);
// arr.push_back(20);
// arr.push_back(30);
// arr.push_back(40);
// arr.push_back(50);


//i wants to traverse to all the elements
//creating an iterator

//vector<int>::iterator it = arr.begin();

// while(it != arr.end()){
//     cout << *it << endl;
//     it++;
// }


//how t create an input stream iterator
// istream_iterator<int> input_itr(cin);


// creation of output stream iterator
// ostream_iterator<int> output_itr(cout," ");



//this is for the forward iterator

// forward_list<int> list;
// list.push_front(10);
// list.push_front(20);
// list.push_front(30);
// list.push_front(40);
// list.push_front(50);

// //initialise an iterator to a point
//  forward_list<int>::iterator it = list.begin(); 

// while(it != list.end()){
//     cout << *it << " ";
//     it++;
// }

//for moving backward we did'nt need anything just changed the name.begin function with the name.end() N YOU will be getting the answer



//bi directional type of iterator

// list<int> myList;

// myList.push_back(10);
// myList.push_back(20);
// myList.push_back(30);
// myList.push_back(40);


// list<int>::iterator it = myList.begin();

// while(it != myList.end()){
//     //write
//     (*it) = (*it +2);
//     //read
//     cout << (*it) << " ";
//     //forward move
//     it++;
//     }




    //lets try to moving backward in list
    // list<int>::iterator vt = myList.end();

    // while(vt != myList.begin()){
        //backward move
    //     vt--;
    //     cout << *vt << " ";
    // }




//random access iterator
// vector<int>::iterator it = arr.begin();
    return 0;
}