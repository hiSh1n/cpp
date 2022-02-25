#include<iostream>
using namespace std;

//binary search
int binarysearch(int arr[], int n, int key){ // function
    int s = 0; //starting index
    int e = n; //ending point
    while (s <= e ) // loop while sp = ep;
    {
        int mid = (s+e)/2; // mid  value
        
        if (arr[mid] == key) //mid value is  key?
        {
            return mid; //yes!
        }else if (arr[mid] > key) //no?, mid value greater than key?
        {
            e = mid - 1; //shift end point from right
        }else{
            s = mid + 1; //mid value lesser than key?, shift from starting point.
        }
    }
    return -1;
}
int main(){
    cout << "enter no. of arrays: " << endl;
    int n;
    cin >> n;

    cout << "enter array: " << endl;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    cout << "enter key to find: " << endl;
    int key;
    cin >> key;

    cout << "key is found in position: " << binarysearch(arr,n,key) << endl;
    
    return 0;
}