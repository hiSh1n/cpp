#include<iostream>
using namespace std;

int main(){
    int row, col;

    //taking user input
    cout << "first input for rows \nsecond for column" << endl; 

    cin >> row >> col;

    for (int i = 1; i <= row; i++) //for each row
    {   
        cout << "*";
        for (int j = 1; j <= col-2; j++) //for chars in columns
        {
            if (i == 1 || i == row)
            {
                cout << "*";
            }else{
                cout << " ";
            }
            
        }
        cout << "*";
        cout << "\n";
    }
     

}