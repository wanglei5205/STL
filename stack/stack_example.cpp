#include<iostream>
#include<stack>
using namespace std;

int main()
{
    // ����ջ
    stack<int> stk;

    // ��ջ���Ԫ��
    stk.push(100);
    stk.push(200);
    stk.push(300);

    // ɾ��ջ��Ԫ��
    stk.pop();

    // ����ջ��Ԫ��
    cout<<stk.top()<<endl;

    // ����ջ�Ĵ�С
    cout<<stk.size()<<endl;

    // �ж�ջ�Ƿ��
    cout<<stk.empty()<<endl;

    return 0;
}
/*
100��200��300������ջ
300��ջ
ջ��Ԫ��200
ջ��С2
*/
