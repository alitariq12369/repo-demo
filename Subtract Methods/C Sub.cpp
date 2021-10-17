#include <iostream>
using namespace std;
int main()
{
    int Num1 = 0;
    int Num2 = 0;
    cout<<"Enter First Numer: ";
    cin>>Num1;
    cout<<"Enter Second Numer: ";
    cin>>Num2;
    cout<<"Sum is "<<" "<< Sum(Num1,Num2);
    return 0;
}
int Sum(int num1, int num2)
{
    return (num1-num2);
}