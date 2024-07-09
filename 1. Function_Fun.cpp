#include <iostream>
using namespace std;

int fun(int a, int b)
{
    cout<<"bold"<<endl;
    return a+b;
}

int main() {
    int a = fun(5, 6);
    cout<<"The result is: "<<a;
    cout<<"Hi"<<endl;

    return 0;
}

/*
  Output:
  bold
  The result is: 11Hi
*/