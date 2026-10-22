#include <iostream>

using namespace std;

    int main()
    {
        float num1, num2;
        cout << "Enter first number: ";
        cin >> num1;
        cout << "Enter second number: ";
        cin >> num2;
        float difference = num1 - num2;
        cout << "Difference of num1 and num2: " << difference << endl;
        cout << "press enter to exit";
        cin.ignore(); 
        cin.get();
        return 0;
    }
