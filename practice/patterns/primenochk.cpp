#include<iostream>
using namespace std;

int main(){

    int n;
    cout << "Enter a number: ";
    cin >> n;

    bool flag = 0; // var for confirmation (assuming n is prime;)
    for (int i = 2; i < n; i++) // 1 divides evry no so we strt frm 2
    {
        if (n % i == 0) //chking fr divisibility
        { 
            cout << n << " not a prime" << endl;
            flag = 1; //if not prime
            break;
        }         
    }
    if (flag == 0) // if prime
    {
        cout << n << " is a prime" << endl;
    }
    return 0;
}