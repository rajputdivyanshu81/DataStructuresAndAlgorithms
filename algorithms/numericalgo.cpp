#include<iostream>
#include<vector>
#include<algorithm>
#include<numeric>
using namespace std;
int main(){


//iota is just used to fill the places with the increamented values

    // vector<int> first(5);


    //   //another template is iota 
    //   //this is to fill the values

    //   iota(first.begin(),first.end(),250);
    //   for(int a : first){
    //     cout << a << " " << endl;
    //   }

//  vector<int> first;

//     first.push_back(1);
//     first.push_back(2);
//     first.push_back(3);
//       first.push_back(4);


// //this also helps in the printing of the fibonacci sequece

// vector<int> result(first.size());
// //this is another such a beautiful thing in which we hav add the all  he previous elements amnd print them in a very good manner
// partial_sum(first.begin(),first.end(),result.begin());

// for(int a: result){
//     cout << a << " ";
// }
    // vector<int> second;
    // second.push_back(3);
    // second.push_back(4);
    // second.push_back(5);

    


    //in this algo operator we multiply the both the elements of first and the second vector which we have developed
    //and then we multiply the elements and use it in a very efficient manner


//    int ans =  inner_product(first.begin(),first.end(),second.begin(),0);
//      cout << "the sum of the produncts of the inner elements is :" << ans << endl;

    // vector<int> arr(5);

    // arr[0] = 10;
    //   arr[1] = 20;
    //     arr[2] = 30;
    //       arr[3] = 40;
    //         arr[4] = 50;


//this helps in the additon of the totsl elements 

//this is like the sum function 


    //      int totalSum =   accumulate(arr.begin(),arr.end(),0);//last wale element ka kam h ki kisme vakue ko add krna h agr value k andr 1000 hoga to value bhi 150 jo add krk aaye h 1000 mai add hoke ansewer aayega

    // cout << "the total sum after addition is " << totalSum << endl;

    return 0 ;
}
