//
// Created by MooSnow on 2023/2/27.
//

#include <iostream>
#include "inline.h"
using namespace std;
int overload(int x, int y)
{
    cout << "жиди1ЃК" << (x>y?x:y) << endl;
    return (x>y?x:y);

}

int overload(int x, double y)
{
    cout << "жиди2ЃК" << (x>y?x:y) << endl;
    return (x>y?x:y);
}