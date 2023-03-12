//
// Created by MooSnow on 2023/3/5.
//

#ifndef EASYC___TEMPLATE_H
#define EASYC___TEMPLATE_H

//template 关键字告诉C++编译器 要开始泛型编程了
//T - 参数化数据类型
template <typename T, typename T2>
T Max(T a, T2 b) {
    return a > b ? a : b;
}


//定义一个类
class Son {
public:
    Son(int age) { m_age = age; }
    ~Son(){}

    int getAge() { return m_age; }

    //重载 > 运算符
    bool operator>(Son& res) const{
        if (this->m_age > res.m_age)
            return true;
        return false;
    }

private:
    int m_age;

};


#endif //EASYC___TEMPLATE_H
