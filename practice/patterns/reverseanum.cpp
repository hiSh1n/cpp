#include<iostream>
using namespace std;

int main(){
    cout << "Enter your number: " << endl;
    int n;
    cin >> n;

    int rn = 0; // for storing reversed number.
    int ld; // for last digit

    while (n > 0)
    {
        ld = n % 10;
        rn = rn * 10 + ld;
        n = n/10;

        // cout << n << '\n' << ld << '\n'<< rn << endl; just for debugging
    }
    cout << rn << endl;   


}
// there's a bug for numbers ending with zero