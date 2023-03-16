#include <iostream>
#include <array>
#include <algorithm>
#include <cstring>
#include "inline&overload/inline.h"
#include "template/template.h"
using namespace std;





int main() {


#if 1   //����
    int test{};
    test = add(5,5);
    cout << "Answer:" << test << endl;
#endif

#if 0   //����
    int test{};
    test = overload(5, 5);
    test = overload(5, 5.0);
#endif

#if 0  // ģ�庯��
    int n = 6;
    int m = 9;
    char a = 'c';	//'c' ��Ӧ��ascll��ֵ�� 99
    cout << "��ʽ���͵��ã�" << "Max<int, char>(m, a): " << Max(m,a) << endl;	//��ʽ���͵���
    cout << "�Զ����������Ƶ���" << "Max(m, a): " << Max(m, a) << endl;	//�Զ����������Ƶ�

    Son s1(18);
	Son s2(21);


	cout << "Max(s1, s2): " << Max(s1, s2).getAge() << endl;
#endif


#if 0   // ��̬���飺array

    // �����ʼ�� �� sort����
//    int s[3] = {1,2,3}; // һά����
    array<int, 3> s = {1, 2, 3};  // һά����
//    int s2[3][4] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12}; // ��ά����
    array<array<int, 3>,4> s2 = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12}; // ��ά����

    // һά���鷶Χfor���
    cout << "һά���鷶Χfor���" << endl;
    for (auto a : s)
        cout << a << ends;

    cout << endl;

    // ��ά���鷶Χfor���
    cout << "��ά���鷶Χfor���" << endl;
    for (auto &row : s2)
    {
        for (auto a : row)  //ֻ�����ɶ���д�ĳ�for (auto &a : row)
            cout << a << ends;
        cout << endl;
    }

    // ���Զ��庯����������
    cout << "���Զ��庯����������" << endl;
    struct {
        bool operator()(const int &a, const int &b) const{
            return a > b;
        }
    } customLess;
    sort(s.begin(), s.end(), customLess);
    for(auto a:s)
        cout << a << ends;

    // ���鶯̬�ڴ�
    int number;
    cin >> number;
    float *s3 = new float[number];
#endif

#if 0   // enum ö������

    enum color_set1 {RED, BLUE, WHITE, BLACK} color1, color2;
    enum color_set2 {GREEN2, RED2, YELLOW2, WHITE2} color3, color4;

    color3 = RED2;      //��ö�ٳ���ֵ����ö�ٱ���
    color4 = color3;    //��ͬ���͵�ö�ٱ�����ֵ��color4��ֵΪRED2
    int  i = color3;    //��ö�ٱ����������ͱ�����i��ֵΪ1
    int  j = YELLOW2;   //��ö�ٳ����������ͱ�����j��ֵΪ0

#endif

#if 0   // �ṹ�����ͣ�struct

    // �ȶ���ṹ�������ٵ������б�������
    struct Student
    {
        int Code;
        char Name[20];
        char Sex;
        int Age;
    };
    Student Stu;
    Student StuArray[10];
    Student *pStu;  // Ҳ������new����̬�������ڶ��У��������ھͿ����Լ�������

    // �Ƚϰ�ȫ�Ĵ�����Ľṹ��
    struct node{
        int data;
        string str;
        char x;
        //ע�⹹�캯���������û�зֺ�Ŷ��
        node() :x(), str(), data(){} //�޲����Ĺ��캯�������ʼ��ʱ����
        node(int a, string b, char c) :data(a), str(b), x(c){}//�вι���
    };
    node N1; // �޲ι���
    node N2(10,"abc",'a'); // �вι���

    // ��ʼ���б�ֵ
    Stu = {21,"ChenYiKai",'M',23};
#endif



#if 1   // ���������ͣ�union

    union DEMO{
        char status;
        int a;
        int serial[4];
    }demo;

#endif














//    system("pause");
    return 0;
}
