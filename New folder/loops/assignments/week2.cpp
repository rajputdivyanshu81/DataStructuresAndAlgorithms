#include<iostream>
using namespace std;
int main (){






// ths is the code to find the set bit 
// here setbits means how many 1's are there in bits we get in the buinary form



// int number = 10;
// int setBitCount = 0;
// while(number != 0){
//     int lastBit = (number&1);
//     if (lastBit == 1){
//      setBitCount = setBitCount+ 1;
//     }
//     //right shift
//     number = number >> 1;
// }
//     cout << "total set bit :"<< setBitCount << endl;







    // in their codebase mostly used to use this is 

    // int n = 16;
    // if(n&1){
    //     cout <<"odd number";
    // }
    // else{
    //     cout <<" even number";
    // }

// check whether a no. is even or odd with the help of logical operators


// int n = 12;
// if ((n & 1) == 0){
//     cout<< "even number"<< endl;
// }
// else {
//     cout << " odd number"<< endl;
// }

    // cout << (5 & 3)<< endl;
    // //and operator
    // cout << (5 | 3)<< endl;
    // // or operator
    // cout << (5 ^ 5 ^ 9)<< endl;
    // // xor operator
    // cout<< ( 25 << 2)<< endl;
    // // left shift operator
    //     cout<< ( -10 << 1)<< endl;
    // // left shift operator
    //   cout<< ((-10) >>  1)<< endl;



    // left shift operator



    // here >> means to say that divide by 2 ki pow n 

    //  >> right shift mai kya krte h ki sare
    // bits ko righht shift krte h or last wali bit jo khLI rah jati h usko 0 se fill kr dete h    
    // << left shift mai kya krte h ki sare bits ko left shift krte h or last wali bit jo khLI rah jati h usko 0 se fill kr dete h

    // if we say that 5 << n then it means to say that 5 * 2pow(n)

    // xor ka use krte h cancel krne wali chizo k leye
    // iska use lwtcd k find unique elements wale ques k leye krte h

    // 2s compliment 

    // isme phale 1's compliment krte h usk badd + 1 kr dete has_facet

    // 1's complinet mtlb sari digits ki bits ko reverse krk likh dena
    // 1 h to zero kr do agr zero h to 1 kr do




    // bitwise operators 

    // & --> and 
    // | --> out_of_range
    // ^ --> xor
    // ~ --> not 
    // << --> left shift
    // >> --> right shift


    // this is the function to print the code below



//     void hollowPyramid(int n){
//     // for spaces
//     for (int i = 0; i < n ; i++){
//         for  (int j = 0 ; j < n-i-1 ; j++)
//         cout <<" ";

//         //stars
//         for (int j = 0 ; j < i+1  ;j++){
//         if(i==0 || i== n-1 ||j==0 || j==i+1-1)
//         cout << "* ";
//         else
//         cout << "  ";
//     }
//     cout << endl;
// }
// }





    // code to print yhe the hollow pyramid




    //    int n;
    // cout << " enter the value of n";
    // cin >> n;
    // hollowPyramid(n);



// this is the output after gaving input of 8

    //        * 
    //       * * 
    //      *   * 
    //     *     * 
    //    *       * 
    //   *         * 
    //  *           * 
    // * * * * * * * *







    // this is the required function for the program of full pyramid




// void fullPyramid(int n){
//     // for spaces
//     for (int row = 0; row < n ; row++){
    // this loop is for space
//         for (int col = 0; col < n - row - 1 ;col++)
//             cout << " ";
// this loop is for stars
//         for (int col = 0;col < row +1; col++)
//             cout << "* ";   
//              cout << endl; 
//     }   
// }


    // program to set the full pyramid the below is the required code



//     int n;
// cout << " enter the value of n" << endl;
// cin >> n ;
// fullPyramid(n);




// out after giving the value of n = 5 
//        *
//       * *
//      * * *
//     * * * *
//    * * * * *


    return 0;
}