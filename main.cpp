#include <iostream>
#include <cstring>
using namespace std;
int main(){
    setlocale(LC_ALL,"RU");

    float num1,num2,res;
    cout << "Enter number1: " << endl;
    cin >> num1;

    cout << "Enter number2: ";
    cin >> num2;

    string math;
    cout << "Enter math symbol: ";
    cin >> math;

    if(math == "+")
    {res = num1 + num2;}

    else if(math == "-")
    {res = num1 - num2;}

    else if(math == "*")
    {res = num1 * num2;}

    else if(math == "/")
    {res = num1 / num2;}
    cout << "Result: " << res << endl;


    return 0;
}

