// this is to use those things which are preinbuilt progrmams i.e. they are used for not to write algo again and again

// common components in stl are as follows
// containers : vector ,list ,queue , stack ,set , map etc
// iterators
// functors
// algorithm : sort , binary search,reverse etc

/*
containers  : in c++ are the classes that are designed to store and manage objects
1st we taked about the vector in detail

*/
#include <iostream>
#include <vector>
using namespace std;
int main() 
{


//this is give no of columns to a every specific element into an array

    // vector<vector<int> > brr(4);;
    // brr[0] = vector<int> (4);
    // brr[1]=vector<int> (2);
    // brr[2]= vector<int> (5);
    // brr[3]= vector<int> (3);



// vector<vector<int>>  arr(5,vector<int>(4,0));
// int totalRows = arr.size();
// int totalColumns = arr[0].size();
// //arr mai no of rows and hr ekk row mai kya hoga vo bhi lkhna hoga
// //2d array craeted with 5 rows and 5 columns
// cout << totalRows << endl;
// cout << totalColumns;


 


    //how to create or we can say initialize  a 2d array
    // vector<vector<int>> 



    // vector<int> first;
    // //vector<int> second;

    // first.push_back(10);
    // first.push_back(11);
    //     first.push_back(12);
    //         first.push_back(13);


    // //traversing the vector using the iterator


    // //craeting an iterator
    // vector<int>::iterator it = first.begin();


// this is to print the wholesum array

    // while(it != first.end()){
    //     cout << *it << " ";
    //     it++;
    // }



    //         second.push_back(100);
    // second.push_back(200);
    //     second.push_back(300);
    //         second.push_back(400);

    //         first.swap(second);

    //         cout << first[0] << endl;

    //         // this is for printong the whole array into the terminal

    //         for (int i:first){
    //             cout << i << " " ;
    //       }
    //       cout << endl;

    //       for(int i:second){
    //         cout << i << " ";
    //       }

    // another use of this type of cases
    // vector <int> age;
    // age[0] = 10;

    // creation of an vector
    // vector<int> marks;

    // this is to input the values and fill them into  an array

    // marks.push_back(10);
    // marks.push_back(20);
    // marks.push_back(30);
    // marks.push_back(40);
    // marks.push_back(50); 

    //value of size befoere using the erasing function
    // cout << marks.size() << endl;

    //erase function is used to delete an particular elment or to delete the numbers from the certain position to a another certain position
    // marks.erase(marks.begin(),marks.end());

    //erase function is to earse the whole array every value into an arrray is being deleted from the array

    // cout << marks.size() << endl;

    // insert(iterator,value we needs to be inserted)

    //this is to insert the value at a very specific place we can; add that value which we wants to insert
    
//    marks.insert(marks.begin(),50);

//    cout << marks.size() << endl;

//     this is for printing the new value of 1st element into an is_array

//    cout << marks[0] << endl;

    //this is to clear the whole array
    // marks.clear(); 
    

    //and now when we pritnthe array the size of array is found to be 0;
    // cout << marks.size() << endl;


    // how to excess elements into an array
    // cout << marks[0] << endl;

    //this is the another to print the aray
    // cout << marks.at(0) << endl;


    
    // thsi is how u can update the value of an element in an is_array
    // marks[0] = 100;


    // after updation printing the value of that element
    // cout << marks[0] << endl;


    // the pritning of array is same as that of simple is_array
    // cout << marks[0];


// this is the use of empty statements and how to deal with it

    // if(marks.empty() == true){
    //     cout << " vector is empty";
    // }
    // else{
    //     cout << "vector is not empty";
    // }


    // this is to print the front element from the is_array

    // cout << marks.front() << endl;

    // this is tp print the last element from the is_array
    // cout << marks.back() << endl;



    // this is to print the size of an array

    // cout << "size of an resulted array is :" << marks.size() << endl;

    // this is to remove the last element from the array

    // marks.pop_back();

    // again printing the size of an array
    //  cout << "size of an resulted array is :" << marks.size() << endl;

    // cout << *(marks.begin()) << endl ;

    // vector can also be initialized as
    //  vector<int> miles{10};

    // this os aslo a way to initialise a vector
    //  vector<int> distances{15,0};

    return 0;
}