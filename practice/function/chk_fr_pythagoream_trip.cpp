#include<iostream>
using namespace std;

// Pythagorean theorem, the well-known geometric theorem that the sum of the squares on the legs of a right triangle is equal to the square on the hypotenuse (the side opposite the right angle)

//a2 + b2 == c2

bool chk_pyth(int x, int y, int z){
    int a = max(x,max(y,z)); //looking for biggest no. i.e hypotenus
    int b,c;

// we don't know value of x,y,z. so compairing a with x,y,z

    if (a == x) 
    {
        b = y;
        c = z;
    }else if (a == y)
    {
        b = y;
        c= y;
    }else
    {
        b = x;
        c = y;
    }

    if (a*a == b*b + c*c) //confirming the formula, a2 = b2 + c2
    {
        return true;
    }else{
        return false;
    }
}

int main(){
    int x,y,z;
    cin >> x >> y >> z;
    if(chk_pyth(x,y,z)){
        cout << "yeah, it pythogrean" << endl;
    }else{
        cout << "nope" << endl;
    }
}