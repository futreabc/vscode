#pragma once//它的主要作用是防止头文件被多次包含（多重包含）在同一个源文件中
#include<iostream>
#include<string>
using namespace std;
typedef struct Mydata
{
    Mydata(string a,string BookName,int price):ISBN(a),BookName(BookName),price(price){}
 string ISBN;
 string BookName;
 int price;
}Mydata;
typedef struct Node
{
    NOde(string b,string c,int d):a(b,c,d),
Mydata a;
Node* next;
}Node,*List;