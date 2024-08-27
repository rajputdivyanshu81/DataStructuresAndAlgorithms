#include<iostream>
#include<map>
#include<unordered_map>
using namespace std;
int main(){
    //containers that stores the key value pairs
   // allows the efficient retrieval and the modification of the values based on the keys..
    //keys are unique with the maps


    //maps are of teo types and thye sre called as unorfered an dthe ordered one ....


//creation of map
unordered_map<string , string> table;




//insertion
//1st way to insert somr of he values into the map function

table["in"] = "India";

//second way to insert the values inti the fnction

table.insert(make_pair("en","England"));

//third way to insert the values into the function

// pair<string , string> p;
// p.first = "br";
// p.second = "brazil";
// table.insert(p);



// unordered_map<string,string>::iterator it = table.begin();


//how can we traverse the whole into an whole map
// while(it != table.end()){
//     pair<string,string> p = *it;
// cout << p.first << " " << p.second << endl;
//     it++;
// }

//this is to find out what value is assigned at what place
// cout << table.at("in") << endl;


//this is for the updation for nay key value pair
// table.at("in") = "Bharat";
// cout << table.at("in") << endl;




// cout << table.size() << endl;

// table.clear();
// cout << table.size() << endl;

// if(table.empty() == true)
// {
//     cout << "the map is empty";
// }   
// else{
//     cout << "the map is not empty";
// }
 return 0;
}