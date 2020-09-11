#include <iostream>

using namespace std;

int main()
{
    int num1 , num2, num3;
    cin>> num1>>num2>>num3;
    bool a= num1<num2<num3;
    bool b= num2<num1<num3;
    bool c=num3<num1<num2;
    bool d=num1<num3<num2;
    bool e=num2<num3<num1;
    bool f=num3<num2<num1;

    if (a)
        cout << num1<<num2<<num3;
        else if (b)
            cout << num2<<num1<<num3;
        else if (c)
            cout <<num3<<num1<<num2;
        else if (d)
            cout << num1<<num3<<num2;
        else if (e)
            cout <<num2<<num3<<num1;
        else if (f)
           cout<< num3<<num2<<num1;
    return 0;
}
