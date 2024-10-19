#include<iostream>
using namespace std;

int main(){
    int a = 5;
    float b = 5.6;
    char ds = 'c';
    double d = 100.99;
    bool e = true;

    int price = (int)d;
    //cout << a << b << ds << d << e << price <<endl;
    int age;
    cout << "ENter the age = ";
    cin>>age;
    cout << age;

    int s = a / (float)d;
    cout << s <<endl;
    return 0;
}
