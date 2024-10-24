#include<iostream>
using namespace std;

int main(){

    //WHILE LOOP

    int count = 1;
    while (count<=10)
    {
        cout<<count<<" ";
        count++;
    }
    cout<<endl;

    //FOR LOOP

    int n=10;
    for (int i=1; i<=n; i++){
        cout<<i<<" ";
    }
    cout<<endl;

    // SUM OF ITERATION

    int n =5;
    int sum = 0;
    int count=1;

    for (int i=1; i<=n; i++){
        sum +=i;
    }
    cout<<"Sum = "<<sum<<endl;

    // same but with while loop

    while (count<=n)
    {
        sum+=count;
        count++;
    }
    cout<<"Sum = "<<sum<<endl;

    //Use of Break Statement    

    int n =50;
    int sum = 0;
    for (int i=1; i<=n; i++){
        sum +=i;
        if (i == 5){
            break;
        }
    }
    cout<<"Sum = "<<sum<<endl;

    //Odd Number

    int n = 5;
    for (int i=1; i<=n; i++) {
        if (i %2 != 0){
            cout << i <<" ";
        }
    }

    //ODD SUM

    int n = 5;
    int oddSum = 0;
    for (int i=1; i<=n; i++) {
        if (i %2 != 0){
            oddSum += i;
        }
    }
    cout<< "odd sum = "<<oddSum<<endl;

    // DO WHILE LOOP

    int n =10;
    int i=1;

    do {
        cout<< i << " ";
        i++;
    } while (i <=n);
    cout<<endl;

    //PRIME NUMBER

    int n=14;
    bool isPrime = true;
    for (int i=2; i<=n-1; i++){
        if (n % i==0){
            isPrime = false;
        }
    }
    if (isPrime == true){
        cout<<"Prime Number";
    } else {
        cout << "Non Prime";
    }

    //NESTED LOOP

    int n = 10;
    for(int i=1; i<=n;i++){
        int m = 10;
        for (int j = 0; j<=m; j++)
        {
            cout<<"*";
        }
        cout<<endl;
    }
    return 0;
}