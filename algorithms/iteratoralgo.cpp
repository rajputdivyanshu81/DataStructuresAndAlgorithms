#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

// void printDouble(int a){
//     cout << 2*a << " " << endl;
// }

bool checkEven(int a){
    return a%2==0;
}
int main(){



//in case agr hmko kisi containr k andr kisi specific range k andr koi function apply krna ho to hum aese kr sakte h


vector<int> arr(6);

arr[0] = 10;
arr[1] = 11;
arr[2] = 12;
arr[3] = 13;
arr[4] = 14;
arr[5] = 15;

auto it = partition(arr.begin(),arr.end(),checkEven);

for (int a :arr){
    cout << a << " ";
}

//unique is a function that delets the dulplictaes element from the array
// auto it = unique(arr.begin(),arr.end());
// arr.erase(it,arr.end());
// for (int a: arr){
//     cout << a << " " << endl;
// }




// cout << "before :" << endl;
// for (int a : arr){
//     cout << a << endl;
// }


//this is to rotate from a particular place

// rotate(arr.begin(),arr.begin()+3,arr.end());
// cout << "after" << endl;
// for (int a:arr){
//     cout << a << " ";
// }

//this is to rotate the array



//this is to print the whoe array in the form of of the ascending order

// sort(arr.begin(),arr.end());
//this is known as for each loop
// for(int a : arr){
//     cout << a << " "<< endl;
// }



// cout << endl;
// //this is to print the whole array and in the reverse order

// reverse(arr.begin(),arr.end());
// for(int a : arr){
//     cout << a << " "<< endl;
// }



//int ans = count_if(arr.begin(),arr.end(),checkEven);
//cout << ans << endl;
//now this is a conditional wala statement
// auto it = find_if(arr.begin(),arr.end(),checkEven);
// cout << *it << endl;



// for_each(arr.begin(),arr.end(),printDouble);


// int target = 400;

// auto it = find(arr.begin(),arr.end(),target);
// cout << *it << endl;


    return 0;
}