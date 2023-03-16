//
// Created by MooSnow on 2023/2/27.
//

#ifndef EASYC___INLINE_H
#define EASYC___INLINE_H


//内联
inline int add(int x,int y){int a = x+y;std::cout << "内联：" << a;return a;}


//重载
int overload(int x, int y);

int overload(int x, double y);



#endif //EASYC___INLINE_H


