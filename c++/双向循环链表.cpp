// #include<iostream>
// using namespace std;
// typedef struct Node//双向循环链表
// {
// Node(int x=0):data(x),prior(nullptr),next(nullptr){}
// int data;
// Node* prior;//指针域，指向前一个结点
// Node* next;
// }Node,*List;
// class BoubleList
// {
// BoubleList()
// {
//     header=new Node();
//     header->next = header; // Initially points to itself
//     header->prior = header; // Initially points to itself
// }
// ~BoubleList()
// {
// }
// void InitBoubleList(int val)//初始化双向链表
// {

//  Node* p = new Node(val);
// Node* q = header->prior; // Start from the last node before header最后一个元素，重点

//         // Link the new node to the end of the list
// q->next = p;
//  p->prior = q;
//  p->next = header; // Circular link to header
//  header->prior = p; // Update header's prior to the new node

// }


// Node* FindDoubleList(int val)//val 为下标,类似于数组下标，从零开始
// {
// Node* p=header->next;
// int j=0;
// while(p!=header&&j<val)
// {
//     j++;
// p=p->next;
// }//当 j 达到 val 时，p 会指向下一个节点

//     return  (j == val) ? p : nullptr;
// }
//  void InsertDoubleList(int val,int x)
//  {

//   Node* q=new Node(x);
// Node* p=FindDoubleList(val);
// if(p)
// {
//  p->prior->next=q;
// q->prior=p->prior;
// p->prior=q;
// q->next=p;   
// }
// else 
// {
//     Node* a=header->prior;
//     a->next=q;
//     q->prior=a;
//     q->next=header;
//     header->prior=q;
// }

//  }






// private:
// List header;
// };
// void show()
// {
    
// }
// int main2()
// {





//     return 0;
// }