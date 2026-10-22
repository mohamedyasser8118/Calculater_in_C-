#include<iostream>

using namespace std;

int main()
{
    float num1, num2;
    cout << "Enter first number: ";
    cin >> num1;
    cout << "Enter second number: ";
    cin >> num2;
    float sum = num1 + num2;
    cout << "Sum of num1 and num2: " << sum << endl;
    cout << "press enter to exit";
    cin.ignore();
    cin.get();
    return 0;
}