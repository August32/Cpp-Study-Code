//
// Created by MooSnow on 2023/2/27.
//

#include <iostream>
#include "inline.h"
using namespace std;
int overload(int x, int y)
{
    cout << "����1��" << (x>y?x:y) << endl;
    return (x>y?x:y);

}

int overload(int x, double y)
{
    cout << "����2��" << (x>y?x:y) << endl;
    return (x>y?x:y);
}