#include<iostream>
using namespace std;
int main()
{
    int a;
    cout << "Enter first number = ";
    cin >> a;
    int b;
    cout << "Enter second number = ";
    cin >> b;
    int sum = (a+b);
    int diff = (a-b);
    int mul = (a*b);
    float div = (a/b);
    float modu = (a%b);
    cout << "Sum = " << sum << endl;
    cout << "Difference = " << diff << endl;
    cout << "Multiplication = " << mul << endl;
    cout << "Division = " << div << endl;
    cout << "Modulo = " << modu << endl;
    return 0;
}