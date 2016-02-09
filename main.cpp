#include <iostream>

#include "genStack.h"

using namespace std;

int main()
{
    Stack<int> s;
    s.push(10);
    s.push(20);
    s.push(30);
    //s.push(5);
    //s.push(10);

    cout << s.topEl() << endl;
    cout << s.minElement();
    return 0;
}
