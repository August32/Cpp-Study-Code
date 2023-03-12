//
// Created by MooSnow on 2023/2/27.
//

#include <iostream>
#include "inline.h"
using namespace std;
int overload(int x, int y)
{
    cout << "reload1" <<endl;
    return (x>y?x:y);

}

int overload(int x, double y)
{
    cout << "reload2" <<endl;
    return (x>y?x:y);
}