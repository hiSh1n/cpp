#include<iostream>
using namespace std;

//linear search
//function to search for key in array
int linearSearch(int arr[], int n, int key){
    for (int i = 0; i < n; i++) // counting index
    {
        if (arr[i] == key) //index found?
        {
            return i; //yes
        }
    }
    return -1; //no
}

//taking user input and stuff
int main(){
    cout << "enter size of array: " << endl;
    int n;
    cin >> n;

    cout << "enter key to find: " << endl;
    int key;
    cin >> key;

    cout << "enter array: " << endl;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    cout  << "key index is: " << endl;
    cout << linearSearch(arr,n,key);
    return 0;
}