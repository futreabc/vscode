// #include<iostream>
// #define Maxsize 10
// using namespace std;
// typedef struct node
// {
// char data;
// node* lchild;
// node* rchild;
// }node,* Bitree;
// typedef struct queue
// {
// node* data[Maxsize];
// int rear,front;
// }queue;
// void Init_queue(queue** q )
// {
// *q=new queue;
// (*q)->front=0;
// (*q)->rear=0;
// }
// int Empty_queue(queue* q)
// {
// if(q->front==q->rear)
// {
//     return 1;
// }
// else return 0;
// }
// void In_queue(queue* q,node* p)
// {
// if((q->rear+1)%Maxsize==q->front)
// {
//     cout<<"queue is full"<<endl;
// }
// else
// {
//     q->rear=(q->rear+1)%Maxsize;
//     q->data[q->rear]=p;
// }

// }
// void Out_queue(queue* q,node** p)
// {
// if(Empty_queue(q))
// {
//     cout<<" queue is empty"<<endl;
// }
// else 
// {
//     q->front=(q->front+1)%Maxsize;
//     *p=q->data[q->front];
// }
// }

// void Inorder(node* p)
// {
// if(p!=nullptr)
// {
//     Inorder(p->lchild);
//     cout<<"root_node is "<<p->data;
//     Inorder(p->rchild);
// }
// }
// void Creat(node** p)
// {
//     char c;
//     cin>>c;
//     if(c!='#')
//     {
//         (*p)=new node;
//         (*p)->data=c;
//         Creat(&(*p)->lchild);
//         Creat(&(*p)->rchild);
//     }
//     else *p=nullptr;
// }
// void Transleve(node* t)
// {
// queue* Q;
// node* p;
// Init_queue(&Q);
// if(t!=nullptr)
// {
//     cout<<t->data<<endl;
// }
// In_queue(Q,t);
// while(!Empty_queue(Q))
// {
//     Out_queue(Q,&p);
//     if(p->lchild!=nullptr)
//     {
//         cout<<p->lchild->data<<endl;
//         In_queue(Q,p->lchild);
//     }
//     if(p->rchild!=nullptr)
//     {
//         cout<<p->rchild->data<<endl;
//         In_queue(Q,p->rchild);
//     }
// }
// }


// int main2()
// {



//     return 0;
// }