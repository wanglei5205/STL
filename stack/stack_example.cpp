#include<iostream>
#include<stack>
using namespace std;

int main()
{
    // 创建栈
    stack<int> stk;

    // 向栈添加元素
    stk.push(100);
    stk.push(200);
    stk.push(300);

    // 删除栈顶元素
    stk.pop();

    // 返回栈顶元素
    cout<<stk.top()<<endl;

    // 返回栈的大小
    cout<<stk.size()<<endl;

    // 判断栈是否空
    cout<<stk.empty()<<endl;

    return 0;
}
/*
100、200、300依次入栈
300出栈
栈顶元素200
栈大小2
*/
