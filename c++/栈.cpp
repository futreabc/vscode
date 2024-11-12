// #include<iostream>
// #include<stdio.h>
// #include<stdlib.h>
// using namespace std;
// typedef struct Node
// {
//     Node(char x='0'):data(x),next(nullptr){}
// char data;
// struct Node* next;
// }StackNode;
// void Init_LinkStack(StackNode**s)//初始化,不用设置头指针,类似于构造函数
// {
// *s=nullptr;
// }
// bool Empty_LinkStack(StackNode* s)
// {
// if(s==nullptr)
// {
//     return true;
// }
// else return false;
// }
// void  Push_LinkStack(StackNode** top,char x)
// {
// StackNode* p=new StackNode(x);
// p->next=*top;
// *top=p;//栈顶指针指向新的元素
// }  //入栈
// void Pop_LinkStack(StackNode** top,char *x)//出栈
//  {
// StackNode* p;
// if(*top==nullptr) cout<<"Stack is empty"<<endl;
// else
// {
// *x=(*top)->data;//返回值：*x = (*top)->data; 这行代码将栈顶节点的数据赋值给 x 指向的内存地址。这样，调用者在调用该函数后可以直接获取栈顶的数据，而无需额外的返回值。
// p=*top;//p 和 *top 指向同一个节点
// *top=(*top)->next;
// delete p;
// }
// }

// void Print_LinkStack(StackNode* s)
// {
//     while (s!=nullptr)
//     {
//         cout<<s->data<<" ";
//         s=s->next;
//     }
//     cout<<endl;
// }

// int main2()
// {



//     return 0;
// }