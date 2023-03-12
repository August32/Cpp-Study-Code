#include <iostream>
#include <array>
#include <algorithm>

#include "inline&overload/inline.h"
#include "template/template.h"
using namespace std;





int main() {


#if 0   //内联
    int test{};
    test = add(5,5);
    cout << "Answer:" << test << endl;
#endif

#if 0   //重载
    int test{};
    test = overload(5, 5.0);
    cout << "Answer:" << test << endl;
#endif

#if 0   // 模板函数
    int n = 6;
    int m = 9;
    char a = 'c';	//'c' 对应的ascll码值是 99
    cout << "Max<int, char>(m, a): " << Max(m,a) << endl;	//显式类型调用
    cout << "Max(m, a): " << Max(m, a) << endl;	//自动数据类型推导

    Son s1(18);
	Son s2(21);

	cout << "Max(s1, s2): " << Max(s1, s2).getAge() << endl;

#endif


#if 1   // 静态数组：array

    // 数组初始化 和 sort例子
//    int s[3] = {1,2,3}; // 一维数组
    array<int, 3> s = {1, 2, 3};  // 一维数组
//    int s2[3][4] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12}; // 二维数组
    array<array<int, 3>,4> s2 = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12}; // 二维数组

    // 一维数组范围for语句
    for (auto a : s) {
        cout << a << ends;
    }

    cout << endl;

    // 二维数组范围for语句
    for (auto &row : s2)
    {
        for (auto a : row)  //只读。可读可写改成for (auto &a : row)
        {
            cout << a << ends;
        }
        cout << endl;
    }

    // 用自定义函数对象排序
    struct {
        bool operator()(int a, int b) const{
            return a > b;
        }
    } customLess;
    sort(s.begin(), s.end(), customLess);


    // 数组动态内存
    int number;
    cin >> number;
    float *s3 = new float[number];
#endif


//    system("pause");
    return 0;
}

