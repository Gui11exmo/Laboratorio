#include <iostream>
using namespace std;

void ejemplo(int a,int& b);

int main(int argc, char **argv)
{
    int x=2 ,y=4;
    cout << "1. x = " << x << " y = " << y << endl;
    ejemplo(x,y);
    cout << "1. x = " << x << " y = " << y << endl;
}

void ejemplo (int a, int& b){
    a = 5;
    b = 8;
}