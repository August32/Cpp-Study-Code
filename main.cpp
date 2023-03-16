#include <iostream>
#include <array>
#include <algorithm>
#include <cstring>
#include "inline&overload/inline.h"
#include "template/template.h"
using namespace std;





int main() {


#if 1   //内联
    int test{};
    test = add(5,5);
    cout << "Answer:" << test << endl;
#endif

#if 0   //重载
    int test{};
    test = overload(5, 5);
    test = overload(5, 5.0);
#endif

#if 0  // 模板函数
    int n = 6;
    int m = 9;
    char a = 'c';	//'c' 对应的ascll码值是 99
    cout << "显式类型调用：" << "Max<int, char>(m, a): " << Max(m,a) << endl;	//显式类型调用
    cout << "自动数据类型推导：" << "Max(m, a): " << Max(m, a) << endl;	//自动数据类型推导

    Son s1(18);
	Son s2(21);


	cout << "Max(s1, s2): " << Max(s1, s2).getAge() << endl;
#endif


#if 0   // 静态数组：array

    // 数组初始化 和 sort例子
//    int s[3] = {1,2,3}; // 一维数组
    array<int, 3> s = {1, 2, 3};  // 一维数组
//    int s2[3][4] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12}; // 二维数组
    array<array<int, 3>,4> s2 = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12}; // 二维数组

    // 一维数组范围for语句
    cout << "一维数组范围for语句" << endl;
    for (auto a : s)
        cout << a << ends;

    cout << endl;

    // 二维数组范围for语句
    cout << "二维数组范围for语句" << endl;
    for (auto &row : s2)
    {
        for (auto a : row)  //只读。可读可写改成for (auto &a : row)
            cout << a << ends;
        cout << endl;
    }

    // 用自定义函数对象排序
    cout << "用自定义函数对象排序" << endl;
    struct {
        bool operator()(const int &a, const int &b) const{
            return a > b;
        }
    } customLess;
    sort(s.begin(), s.end(), customLess);
    for(auto a:s)
        cout << a << ends;

    // 数组动态内存
    int number;
    cin >> number;
    float *s3 = new float[number];
#endif

#if 0   // enum 枚举类型

    enum color_set1 {RED, BLUE, WHITE, BLACK} color1, color2;
    enum color_set2 {GREEN2, RED2, YELLOW2, WHITE2} color3, color4;

    color3 = RED2;      //将枚举常量值赋给枚举变量
    color4 = color3;    //相同类型的枚举变量赋值，color4的值为RED2
    int  i = color3;    //将枚举变量赋给整型变量，i的值为1
    int  j = YELLOW2;   //将枚举常量赋给整型变量，j的值为0

#endif

#if 0   // 结构体类型：struct

    // 先定义结构体类型再单独进行变量定义
    struct Student
    {
        int Code;
        char Name[20];
        char Sex;
        int Age;
    };
    Student Stu;
    Student StuArray[10];
    Student *pStu;  // 也可以用new来动态创建（在堆中，生存周期就可以自己决定）

    // 比较安全的带构造的结构体
    struct node{
        int data;
        string str;
        char x;
        //注意构造函数最后这里没有分号哦！
        node() :x(), str(), data(){} //无参数的构造函数数组初始化时调用
        node(int a, string b, char c) :data(a), str(b), x(c){}//有参构造
    };
    node N1; // 无参构造
    node N2(10,"abc",'a'); // 有参构造

    // 初始化列表赋值
    Stu = {21,"ChenYiKai",'M',23};
#endif



#if 1   // 共用体类型：union

    union DEMO{
        char status;
        int a;
        int serial[4];
    }demo;

#endif














//    system("pause");
    return 0;
}
