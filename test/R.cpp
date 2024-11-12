#include<iostream>
#include<string>
#include<cmath>
using namespace std;
int set(int a)
{
   
    return pow(2,a);
}


void slove()
{
    int N,M;
    cin>>N;
    double d,y;
    cin>>d;
   M=set(N);
   y=M*d;
   string a=to_string(y);
   int idx=a.find('.');
   if(a[idx+1]>='5')
   {
    while (a.back()!='.')//返回最后一个字符
    {
        a.pop_back();
    }
    a.pop_back();
    int ans=stoi(a);
    cout<<ans+1<<endl;
   }
   else{
    while (a.back()!='.')
    {
        a.pop_back();
    }
    a.pop_back();
    int ans=stoi(a);
    cout<<ans<<endl;
   }
   
    
}
int main()
{
    slove();
    
    
    
    return 0;
}