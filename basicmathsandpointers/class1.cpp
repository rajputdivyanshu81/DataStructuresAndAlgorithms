#include<iostream>
using namespace std;
int main(){

    char ch[10] = "RacecaR";
    char *ptr = &ch[0]; 
    cout << ch << endl;
    cout << &ch << endl;
    cout << *(ch+3) << endl;
    cout << ptr << endl;
    cout << *ptr << endl;
    cout << *(ptr + 3)<< endl;;
    cout << ptr +2 << endl;








    // char ch[100]= "Babbar";
    // char *cptr = ch;
    // cout << "ch" <<ch<< endl;
    // cout << "&ch" <<&ch << endl;
    // cout << "ch[0]" << ch[0]<< endl;
    // cout << "&cptr" << &cptr << endl;
    // cout << "*(cptr+3)" << *(cptr+3) << endl;
    // cout << "cptr" << cptr << endl;
    //iska special dhyan rakhna h




    /*
    as we know that in arrays we say that arr[i] = i[arr]
    this means to say that *(arr+i)=*(i+arr)  
    */




    //  int arr[ ] = {10,20,30,40};
    // int *ptr = arr;
    // ptr = ptr + 1;



    // basic diagram to understand the concept of pointer

// int a =56;
// int  *p = &a;
// int *q = p;
// int *r = q;


// cout << a << endl;
// cout << &a<< endl;
// // cout << *a << endl;
// cout << p << endl;
// cout << *p << endl;



//code to understand the concepts of pointers

    // int a =5;
    // int *ptr = &a;
    // cout << &a;
    // // cout << *a;   /it thows an error
    // cout<< ptr;
    // cout << endl;
    // cout << *ptr<< endl;
    // ptr = ptr +1;
    // cout << ptr;


    //to create null pointer
    //  int* ptr = 0;




    // the size of pointer doesnot depends onto the type of data and it can  be dependendt ontpo the different types of computers




    // int a = 5;
    // int* ptr;
    // cout << *ptr;

    // isko print krne pe hmko ekk garbage value milti hai and vo compiler dependent hoti hai and usko maintain krne k leye han jo hai ekk null pointer ka use krte hai and usko hum use krenge
    

    // int  a = 5;
    // int* ptr = &a;
    // cout << sizeof(ptr);

// char ch = 'a';
// char*  ptr = &ch;
// cout << sizeof(ptr);  

//very thing is starts showing the value of 8 and this is same for all



//     int a = 5;
//     int* ptr = &a;
//     cout << &a;
//     cout << ptr;
//     cout << &ptr;
//     cout << *ptr;
//     cout << endl;


//     cout << "yha tak code chal rha h";
//  int xyz = 15;
//  int pqr = 12;
//  int* ptr1 = &xyz;
//  int* ptr2 =&pqr;
//     cout << "yha tak code chal rha h";

// what is pointer 
// it is basically what just to store data address in  a varibale we cannot simply store data into a varibale but after using the pointer variable we can store it 

// int a = 5;
// cout << a ;
// int* ptr = &a;


//if wwe want to store the data we can use diiferent datatype  according to the need
//if we want char we can use char*
// if we want to store int we can use int*
//and if we want to print the long we can use long*

    return 0;
}