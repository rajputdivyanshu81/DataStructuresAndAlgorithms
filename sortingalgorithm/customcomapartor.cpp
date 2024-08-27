#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

void print(vector<int> &v) {
    for (int i = 0; i < v.size(); ++i) {
        cout << v[i] << " ";
    }
    cout << endl;
}

// bool mycomp(int &a, int &b) {
//     return a > b; // decreasing order sorting
// }

// Printing for the comparator
void printvv(vector<vector<int>> &v) {
    for (int i = 0; i < v.size(); ++i) {
        vector<int> &temp = v[i];
        int a = temp[0];
        int b = temp[1];
        cout << a << " " << b << endl;
    }
}

int main() {
    // Now we will learn the concept of vectors inside a vector
    vector<vector<int>> v;
    int n;
    cout << "Enter size: " << endl;
    cin >> n;

    for (int i = 0; i < n; ++i) {
        int a, b;
        cout << "enter a,b" << endl;
        cin >> a >> b;
        vector<int> temp;
        temp.push_back(a);
        temp.push_back(b);
        v.push_back(temp);
    }
    printvv(v);

    // vector<int> v = {44, 55, 22, 11};

    // Sorting in decreasing order
    // sort(v.begin(), v.end(), mycomp);
    // print(v);

    // Sorting in increasing order
    // sort(v.begin(), v.end());
    // print(v);

    return 0;
}
