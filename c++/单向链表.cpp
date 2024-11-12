// #include<iostream>
// using namespace std;

// typedef struct Node{
// Node(int val=0):data(val),next(nullptr){}
// int data;
// struct Node* next;
// }Node,*List;
// class MyList
// {

// public:
// MyList()
// {
//     header=new Node();//头节点
// }
// void InitList(int val)
// {
//     Node* p=header;
//     while (p->next!=nullptr)
//     {
//       p=p->next;
//     }
//     Node *node=new Node(val);
//     p->next=node;
// }
// void DeletList()//销毁链表
// {
//     while(header)
//     {
//      Node* p=header;
//     header=header->next;
//     delete p;   
//     }
// }
// void ClearList()
// {
// Node* p=header->next;

// while(p)//判断首元结点是否为空
// {
// Node* q=p->next;
// delete p;
// p=q;
// }
// header->next=nullptr;
// }
// int TotalLength()//长度
// {
//     int i=0;
// Node* p=header->next;
// while(p)
// {
// i++;
// p=p->next;
// }
// Length=i;
// return i;
// }
// int Get_List(int index)//访问元素,需要优化,第五个元素 
// {
// Node* p=header->next;
// int i=0;
// while(p)
// {
//     i++;
//     if(i==index)
//     {
//         return p->data;
//     }
//  p=p->next;

// }
// return -1;
// }
// Node* find_list(int x)//返回地址
// {
// Node* p=header->next;
// while(p&&p->data!=x)
// {
// p=p->next;
// }
// if(p)
// return p;
// else 
// return nullptr;
// }
// int find_List(int x)
// {
// Node* p=header->next;
// int i=0;
// while(p&&p->data!=x)///时间复杂O(n)
// {
//     i++;
//     p=p->next;

// }
// if(p)
// {
//     return i;
// }
// else
// return -1;
// }
// void InsertList(int dex,int x)//优化,O(n)
// {
//     Node* q=new Node(x);//创建新的数据结点
//    // if(dex<1)   
//          if (dex < 1 || dex > TotalLength() + 1) { // 检查合法性，可以尾插
//             return;
//         }                 //检查输入下标的合法性
//     Node* p=header->next;
//     int i=0;
//     while(p)
//     {
//         p=p->next;
//         i++;
//         if(i==dex-1)
//         {
//             Node* m=p->next;
//             p->next=q;
//             q->next=m;
//             break;

//         }
//     }
// }    
// void ListDelet(int dex) //删除指定元素N(O)
// {
// Node* q=header->next;
// int i=0;//计数
// while(q&&i<dex-1)
// {
//     i++;
//     q=q->next;
// }
// if(!q||i>dex-1)
// {
// return ;
// }
// Node* p=q->next;//目标元素
// q->next=p->next;
// //保存数据域
// delete p;
// p=nullptr;
// }  
//  void InsertHeader(int x)
//  {
// Node* p=new Node(x);
// if(header->next)
// {
//     p->next=header->next;
// header->next=p;
// }
//  }





// private:
// List header;
// int Length=0;

// };
// int main2()
// {



//     return 0;
// }