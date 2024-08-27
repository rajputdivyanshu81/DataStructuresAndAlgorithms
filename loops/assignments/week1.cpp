#include <iostream>
using namespace std;


int main(){






//     // write a program to convert miles into km
//     float km;
// cout << " tell me the km" << endl;
// cin >> miles ;
// cout << "  the value in miles is "<< km / 1.60934;








// write  progarm to convert miles to km

// float miles;
// cout << " tell me the miles" << endl;
// cin >> miles ;
// cout << "  the value in km is "<< miles * 1.60934;






     // this is the function to run the code below 
    // void printAllDigits(int n){
    //  while(n){
    //      int onesPlaceDigit = n % 10;
    //      cout << " digits "<< onesPlaceDigit << endl;
    //         n /= 10;
    //  }
    // }




    // this is the program to print all digits of an integer 

    // int n;
    // cout <<" enetr the number to see its digits "<< endl;
    // cin >> n;
    // printAllDigits(n);







// function to run the program below in which we print the no by taking input how mNY DIGITS ARE THERE what are they digits




//  int createNumberUsingDigits( int numberOfDigits)
// {
//     int num = 0;
//     for (int i = 0; i< numberOfDigits ; ++i){
//     cout << " enter digit "<< endl;
//     int digit ;
//     cin >> digit ;
//     num = num * 10 + digit;
//     cout << " number created so far : " << num << endl;
// }
// return num;
// }





// // create numbers using the digits

// int numberOfDigits;
// cin >> numberOfDigits;
// int num = createNumberUsingDigits(numberOfDigits);
// cout << " number created by digits : "<< num << endl;












  // function ti find the count all set bits in the binary of any integer


    
//    int countSetBit(int n){
//      int count = 0;
//      while(n>0){
//         int bit = n % 2;
//         if (bit == 1)
//             count++;
//             n = n / 2;
//      }
//      return count;
//    }


// main ka program for the abopve function 


    // int n ;
    //  cin >> n;
    // int setBitCount = countSetBit(n);
    //  cout << setBitCount << endl;





    // convert the temperature leetcode 2469




//     class Solution {
// public:
//     vector<double> convertTemperature(double celsius) {
//         double k = celsius + 273.15;
//         double f = celsius * 1.80 + 32.00;
//         vector<double>v;
//         v.push_back(k);
//         v.push_back(f);
//         return v;
//     }
// };









    // function by which we create a program to  find factorial of small numbers

//     long long int fact(long long int n)
// {
//     long long int fact = 1;
//     for (int i = 1; i <= n; i++)
//     {
//         fact = fact * i;
//     }
//     return fact;
// }

//   main program to find factorial


// int main()
// {
//     int n;
//     cout << " enter the value of n :";
//     cin >> n;
//     long long int ans = fact(n);
//     cout << "factorial of " << n << " is " << ans << endl;
//     return 0;
// }








    // fumction of tha program which is below



    // // float circle_area(float radius){
// //     float area = 3.14 * radius * radius;
// //     return area;
// // }




    // write a prograam to print that a number is even or not


    // float radius;
    // cout << " enter the value of radius";
    // cin >> radius;
    // float area = circle_area(radius);
    // cout << " Area of circle is :" << area << endl;







// function of that program which is below


    // / bool checkEven(int n){
//     if(n%2==0){
//         return true;
//     }
//     else{
//         return false;
//     }
// }

// write a program to shw that a number is even or not




    // int n;
    // cout << "enter the value of n ";
    // cin >> n;
    // bool isEven = checkEven(n);
    // if(isEven){
    //     cout << n << " is a even number";
    // }
    // else{
    //     cout << n << " is a odd number";
    // }

    // for (int i = 0; i <=5 ;i++){
    //     cout<< i << endl;
    // // }

    //  for (int i = 0; i < 4; i++) {
    //     for (int j = 0; j < 4; j++){
    //     cout << "*";
    //     }
    //     cout << endl;
    //          }

    // output

    // ****
    // ****
    // ****
    // ****





    //  for (int i = 0; i < 3; i++) {
    //     for (int j = 0; j < 5; j++){
    //     cout << "*";
    //     }
    //     cout << endl;
    //             }

    // output

    // *****
    // *****
    // *****







    // aab mai khud dexcide krna achata hu ki rectangle mai row or column kitne kitne hnge

    // int noOfColumns;
    // cout << "enter no. of columns";
    // cin >> noOfColumns;
    // int noOfRows;
    // cout << "enter no. rows";
    // cin >> noOfRows;
    // for (int i = 0; i < noOfRows; i++)
    // {
    //     for (int j = 0; j < noOfColumns; j++)
    //     {
    //         cout << "*";
    //     }
    //     cout << endl;
    // }

    // output jaisa input doge us hisab se hi aayega

        // // output if we take input 5

    //     *****
    //     *****
    //     *****
    //     *****
    //     *****






    // code to make a square by just diciding how many rows ansd columns we want to create the sq

    // int side;
    // cout << " enter the value of side :";
    // cin >> side;
    // for (int i=1 ; i <= side ; i++){
    //     for (int j=1 ; j <= side ; j++){
    //         cout << "*";
    //     }
    //       cout << endl;
    // }



    // // output if we take input 5

    //     *****
    //     *****
    //     *****
    //     *****
    //     *****






    // code to for the hollow rwctnagle

    //   int noOfColumns;
    //     cout << "enter no. of columns :";
    //     cin >> noOfColumns;
    //     int noOfRows;
    //     cout << "enter no. row : ";
    //     cin >> noOfRows;
    //     for (int i = 0; i < noOfRows; i++){
    //         for(int j=0 ; j < noOfColumns ; j++){
    //             if( i == 0 || i == noOfRows-1){
    //                 cout << "*";
    //             }
    //             else{
    //                 if(j == 0 || j == noOfColumns-1){
    //                     cout << "*";
    //                 }
    //                 else{
    //                     cout << " ";
    //                 }
    //             }
    //         }
    //         cout << endl;
    //     }

    //      output for a hollow cylinder is below
    //         *****
    //         *   *
    //         *   *
    //         *   *
    //         *   *
    //         *   *
    //         *   *
    //         *****
               



    // // code to print the holow square



    // int sideOfSquare;
    // cout << "enter length of sideOfSquare :";
    // cin >> sideOfSquare;
    // for (int i = 0; i < sideOfSquare; i++)
    // {
    //     for (int j = 0; j < sideOfSquare; j++)
    //     {
    //         if (i == 0 || i == (sideOfSquare - 1))
    //         {
    //             cout << "* ";
    //         }
    //         else
    //         {
    //             if (j == 0 || j == sideOfSquare - 1)
    //             {
    //                 cout << "* ";
    //             }
    //             else
    //             {
    //                 cout << "  ";
    //             }
    //         }
    //     }
    //     cout << endl;
    // }


    // output if i gave input 5 to form a sqaure of side 5

    //     * * * * *
    //     *       *
    //     *       *
    //     *       *
    //     * * * * *






    // code to formm the half pyramid



    

//     int n;
//     cout << "enter no. ";
//     cin >> n;
//     for (int i = 0; i < n ; i++)
//     {
//         for (int j = 0; j < i + 1 ; j++)
//         {
//                 cout << "*";
//         }
//         cout << endl;
//     }


// output after gaving a value of 6 to form half pyramid

                
//             *
//             **
//             ***
//             ****
//             *****
//             ******
                
           



    // code to write program to form inverted half pyramid



    //  int n;
    // cout << "enter no. ";
    // cin >> n;
    //  for (int i = 0; i < n ; i++)
    //     {
    //     for (int j = 0 ; j < (n - i) ; j++)
    //     {
    //             cout << "*";
    //     }
    //     cout << endl;
    // }



    // output after gaving the vlaue 6 to the baove code _get_output_format

    //     ******
    //     *****
    //     ****
    //     ***
    //     **
    //     *





    // code to wrute a program to create  a hollow pyramid

     

//     int n;
//     cout << "enter no. ";
//     cin >> n;
//     for (int i = 0; i < n ; i++)
//     {
//         int totalJ = i + 1;
//         for (int j = 0; j < i + 1 ; j++)
//         {
//                if(i == 0 || i == 1 || i == n-1){
//                  cout << "* ";
//                }
//                else{
//                  if(j == 0 || j ==  totalJ- 1){
//                     cout << "* ";
//                 }
//                 else{
//                     cout << "  ";
//                }
//         }
        
//      }
//      cout << endl;
//   }
   



//    //output after gaving a value 6 to print holllow piramid

//         * 
//         * * 
//         *   * 
//         *     * 
//         *       * 
//         * * * * * * 







        //  write a program to creTE  A numeric half pyramid



        // int n;
        // cout << "enter the value of n";
        // cin >> n;

        // for (int i = 0 ; i < n ; i++){
        //     for (int j = 0 ; j < i + 1 ; j++){
        //         cout << (j +1)<< " " ;
        //     }
        //     cout << endl;
        // }





        // // output for the values we have given to the resultant of code




        //     1 
        //     1 2 
        //     1 2 3 
        //     1 2 3 4 
        //     1 2 3 4 5 
        //     1 2 3 4 5 6 







// code to form a inverted nmeric pyramid by taking input from the user






    // int n;
    // cout << " enter the value of n ";
    // cin >> n ;
    // for (int i = 0 ; i < n; i++){
    //     for (int j= 0; j < n - i ;j++){
    //         cout << j+1 ;
    //     }
    //     cout << endl;
    // }




    // // output after gVE AN  of 6 to form a inverted numeric pyramid




    //  enter the value of n 6
    //     123456
    //     12345
    //     1234
    //     123
    //     12
    //     1


    return 0;
}