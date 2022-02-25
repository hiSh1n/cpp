#include<iostream>
using namespace std;
int main(){

    int r , c; //r for no. of rows and c for columns

    cout << "Enter first int for no of rows \nsecond for no. of columns \n"; // use "" instead of '' for const string else give error for too long.
    cin >> r >> c;
    for (int i = 0; i < r; i++) // outer loop for rows
    {
        for (int j = 0; j < c; j++) // for printing '*' per column
        {
            cout << '*';
        }
        
        cout << '\n'; //going to next row
    }
    
}