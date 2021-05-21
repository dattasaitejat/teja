#include<iostream>
using namespace std;
int main()
{
    int num,base,res=1;
    cout<<"enter exp,base"<<endl;
    cin>>num>>base;
    while(num!=0)
    {
        if((num&1)==1)
        {
            res=res*base;
        }
        num=num>>1;
        base=base*base;
    }
    cout<<res<<endl;
    return 0;
}