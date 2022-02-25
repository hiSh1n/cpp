// learning arrrays
// syntax dt arr_name[size]; use index to get array element 
#include<iostream>
#include<climits>
using namespace std;

int main(){

    int n;
    cin >> n;

    int arr[n];

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    cout << "Content of array is: " << endl;
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << endl;
    }
    int no = INT16_MIN;
    cout << no << endl;
    cout << INT_MIN << endl; //int min gives lowest possible int in cpp
    
}