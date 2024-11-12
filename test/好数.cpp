/*#include<iostream>
using namespace std;
bool test(int k)
{
    bool j=1;
while (k)
{
    int p=k%10;
    if((p%2)!=j) return 0;
    
        j^=1;
        k=k/10;
}
return 1;
}
void slove()
{
long long int N;
int count=0;
cin>>N;
for(int i=1;i<=N;i++)
{
count+=test(i);
}
cout<<count<<endl;
}



int main()
{
 slove();


    return 0;
}

*/

