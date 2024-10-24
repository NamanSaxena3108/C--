#include<iostream>
using namespace std;
int main(){

    // Check if number is negative or positive

    int n= 45;
    if (n>=0){
        cout<< "Positive"<<endl;
    } else {
        cout << "Negative"<<endl; 
    }

    //Cheking the age

    int age;
    cout<<"Enter the age :";
    cin >> age;
    if (age>=18){
        cout<<"you can vote";
    } else {
        cout <<"you can't vote";
    }

    // Checking for odd or Even

    int n;
    cout << "Enter number : ";
    cin >> n;
    if (n %2 ==0){
        cout<<"Even \n";
    } else {
        cout << "Odd \n";
    }

    //Else If statement

    int marks;
    cout << "Enter marks : ";
    cin >> marks;

    if (marks>=90){
        cout<< "A\n";
    } else if (marks>=80 && marks<90)
    {
        cout<<"B\n";
    } else {
        cout<<"C\n";
    }

    //Checking for lower case or upper case

    char ch;
    cout << "Enter a Character : ";
    cin >> ch;

    if (ch >= 'a' && ch <= 'z'){
        cout << "lowercase \n";
    } else {
        cout << "uppercase \n";
    }

    //Same but different approach

    if (ch >=65 && ch <=90) {
        cout << "uppercase";
    } else {
        cout << "lowercase";
    }
    
    // Ternary Operation
    // Syntax  condition  ? str1 : str2;

    int n= -45;
    cout << (n >=0 ? "Positive" : "negative") << endl;
    
    return 0;
}