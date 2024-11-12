// #include<iostream>
// using namespace std;
// typedef struct BiNode
// {
// char data;
// int Ltag;//左标志
// struct BiNode* Lchild;
// int Rtag;//右标志
// struct BiNode* Rchild;
// }BiNode,*BiTree;

// void Vist_BiNode(BiTree T)//遍历二叉树
// {
// if(T)
// {
//     cout<<T->data<<endl;//访问结点,每个结点经过三次，无论是先序，中序，后序，只是访问的时机不同
//     Vist_BiNode(T->Lchild);
//     Vist_BiNode(T->Rchild);
// }
// }
// void Init_Bitree(BiTree& T)//先序初始化二叉树，递归,不用返回值
// {
// char c;
// cin>>c;
// if(c=='#') T=nullptr;
// else
// {
//     if(!(T=new BiNode)) exit(1);//cerr<<"overflow"<<endl;
//     T->data=c;
//     Init_Bitree(T->Lchild);//递归，左子树
//     Init_Bitree(T->Rchild); //右子树
// }
// }         
// void  Copy_Bitree(BiTree T,BiTree& NewT)//拷贝二叉树,当递归函数完成其操作后，会返回到上一级调用，而这并不涉及返回值
// {
// if(!T) 
// {
//     NewT=nullptr;
//     return ;
// }
// else
// {
//     NewT=new BiNode; NewT->data=T->data;
//     Copy_Bitree(T->Lchild,NewT->Lchild);
//     Copy_Bitree(T->Rchild,NewT->Rchild);
// }
// }
// int Deep_Bitree(BiTree T)//求深度
// {
// if(!T) return 0;
// else
// {
//     int m=Deep_Bitree(T->Lchild);
//     int n=Deep_Bitree(T->Rchild);
//     if(m>n) return m+1;
//     else return n+1;

// }
// }
// int Total_BiNode(BiTree T)//结点的个数
// {
// if(!T) return 0;
// else
// {
//     return Total_BiNode(T->Lchild)+Total_BiNode(T->Rchild)+1;
// }
// }  
// int Total_LeafNode(BiTree T)//叶子结点计算
// {
// if(!T) return 0;
// else
// {
//   if(T->Lchild==nullptr&& T->Rchild==nullptr)
//   {
//     return 1;
//   }
//   return Total_LeafNode(T->Lchild)+Total_LeafNode(T->Rchild);
// }
// }
// int main2()
// {




 
//     return 0;
// }
/*
BiTree Copy_Bitree(const BiTree& T) {//拷贝可以返回Bitree类型，传参可以只有一个
    if (!T) return nullptr;
    BiNode* NewT = new BiNode;
    NewT->data = T->data;
    NewT->Lchild = Copy_Bitree(T->Lchild);
    NewT->Rchild = Copy_Bitree(T->Rchild);
    return NewT;
}

*/