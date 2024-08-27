#include <iostream>
#include<cstring>
using namespace std;



// int getLength(char arr[],int size){
//     int count = 0;
//       //jab tak array me null chahcter nhii milta tab tak bhadte chlo array k andar
//         //tab tak increment karo
//         //and aage badho
//     for(int index = 0;index<size ;index++){
//         if(arr[index] != '\0'){
//             break;
//         }
//         else{
//             count++;
//         }
//     }
        
      
// }

// for converting the @into the space

// void replaceCharacter(char originalChar, char newChar,char arr[],int size){
//     for(int i = 0;i<size;i++){
//         if (arr[i]==originalChar){
//             arr[i] = newChar;
//         }
//     }
// }



// this is the function to convert the upper case into he lower case character
// void convertIntoUpperCase(char arr[], int n)
// {
//     int len = getLength(arr, n);
//     for (int i = 0; i < len; i++)
//     {
//         char ch = arr[i];
//         //if letter is a lower case letter then only we can do some of these operations
//         if (ch >= 'a' && ch <= 'z')
//         {
//             ch = ch - 'a' + 'A';
//         }
//         arr[i] = ch;
//     }
// }



//THIS CODE IS T CONVERT THE CHARACTER INTO THE LOWER CASE CHARACTER

// void convertIntoLowerCase(char arr[], int n)
// {
//     int len = getLength(arr, n);
//     for (int i = 0; i < len; i++)
//     {
//         char ch = arr[i];
//         //if letter is a lower case letter then only we can do some of these operations
//         if (ch >= 'A' && ch <= 'Z')
//         {
//             ch = ch - 'A' + 'a';
//         }
//         arr[i] = ch;
//     }
// }


//this code is to print the reverse character array
// void reverseCharArray(char arr[],int n)
// {
//     int len = getLength(arr,n);

//     int i = 0;
//     int j = len-1;

//     while(i<=j){
//         swap(arr[i],arr[j]);
//         i++;
//         j--;
//     }
// }



//this is the function to say that the given string is a palindrome or not
// bool checkPalindrome(char arr[],int n){
//     int len = getLength(arr,n);
//     int i = 0;
//     int j = len -1;

//     while(i <= j){
//         if(arr[i] == arr[j]){
//             i++;
//             j--;
//         }
//         else{
//             //not a palindrome
//             return false;
//         }
//     }
//       return true;
//     //yha tak aaye h to sare character check kr chuk h
// }


int main()
{

    // char arr1[100];
    // cout << "enter the input" << endl;
    // cin >> arr1;

    // char arr2[100];
    // cout << "enter the input" << endl;
    // cin >> arr2;


    // char arr3[200];
   // cout << strcat(arr1,arr2) << endl;
    //it means strcat se hum kinhi bhi do arrays ko collab krk ekk array mai store kara sakte h


//agr maine resulted bana leya to usme kuch aisa hoga ki vo poore array ka length print kr dega


//this is used to find the length of the array

   // cout << strlen(arr1) << endl;


//char arr[1000];
//cin >> arr;

// this is the code to check the given is a plaindrome or not and verify it 
//cout << "palindrome or not :" << checkPalindrome(arr,1000) << endl;




// char arr[1000];
//     cin >> arr;
//     reverseCharArray(arr, 1000);
//     cout << "after the reversal of the array the array so formed  is given below"<< endl;
//     cout << arr << endl;

    

    // char ch;
    // cin >> ch;
    //this is known as the typecasting
    //cout << (int)ch;

    // char arr[1000];
    // cin >> arr;
    // convertIntoLowerCase(arr, 1000);
    // cout << arr << endl;




    // char arr[1000];
    // cin >> arr;
    // convertIntoUpperCase(arr, 1000);
    // cout << arr << endl;



    // this is to convrt the upper case character int the lower case character

    // char arr[1000];
    // cout << "enter the word ";
    // cin >> arr;

    // time complixiety is of O(N)
    // constant space

    // replaceCharacter('@',' ',arr,1000);
    // cout << arr << endl;
    //  cout  << getLength(arr,1000) << endl;

    // how to create the array of char
    // char arr[10];
    // where we can store multiple characters with continuous memory locatin

    // how can we acces the element from the array
    // arr[0];

    // how can we take input into the array
    // cin >> arr[0];

    // how to print the paricular element into the array
    // cout << arr[0];

    // there is charcte which use is to show that the array is ended and it gaves the sign that array is ended
    //     /0 -> null  character -> stop sign -> terminator

    // we can taket the whole value as an input
    // we can print the whole array by the single time
    // in integer type of array only single value can print at a time

    // char arr[100];
    // cout << "enter your name :";
    // taking input
    // cin >> arr;

    // jab bhi hum cin k through input lete h tab space k bad array fully input ho gya h aisa soch leya jata h
    // delimeter-> yha pr input lena band ho gya h

    // this is the anotehr best way to take the values as input
    // cin.getline(arr,100);
    // iski madad  se kitne bhi space ho sb print ho jate h  and koi erro bhi nhi aata

    // //printing array
    // cout << "your name is :" << arr << endl;
    // cout << arr[0] << "->" << (int)arr[0] << endl;//printing the ascii values by typecasting
    // cout << arr[1] << "->" << (int)arr[1]<< endl;
    // cout << arr[2] << "->" << (int)arr[2]<< endl;
    // cout << arr[3]<< "->" << (int)arr[3] << endl;
    // cout << arr[4] << "->" << (int)arr[4]<< endl;

    // now we have a function claled a getline which will resolve this problem

    //    "/t" is used as a delimeter when it doesn't hit it allows to print or taking input the character

    return 0;
}