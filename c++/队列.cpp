// #include<iostream>
// using namespace std;
// #define MaxSize 10
// typedef struct queue
// {
// int* base;//动态分配数组
// int front;
// int rear;//rear为尾指针
// }queue;
// void Init_queue(queue &s)
// {
// s.base=new int[MaxSize];
// if(!s.base) cerr<<"ovreflow"<<endl;
// s.front=0;
// s.front=s.rear;
// }
// int Length_Queue(queue s)//求长度
// {
// return ((s.rear-s.front+MaxSize)%MaxSize);
// }
// void EnQueue(queue& s,int x)//入队
// {
//     if((s.rear+1)%MaxSize==s.front) cerr<<"queue is full"<<endl;
// s.base[s.rear]=x;
// s.rear=(s.rear+1)%MaxSize;//当rear=9时，
// }
// void OuQueue(queue& s,int& x)//出队
// {
// if(s.front==s.rear) cerr<<"queue is empty"<<endl;
// x=s.base[s.front];
// s.front=(s.front+1)%MaxSize;
// }

// int main2()
// {




//     return 0;
// }
