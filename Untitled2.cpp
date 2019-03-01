#include<iostream>
using namespace std;
int factorial(int x)
    {
        cout << "x = " << x <<" at " << &x << endl;
        if (x==1 or x==0) {return 1;}
        return x*factorial(x-1);
    }
int main()
{
    int n;cin>>n;
    cout<<factorial(n);
}
/* day giam dan o cot thu 2 tinh tu ben phai 2 don vi;
kich thuoc cua ham factorial la 32( = 2*16^1)*/
