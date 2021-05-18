#include<bits/stdc++.h>
using namespace std;
int set_or_not(int n,int p){
    if(n&(1<<(p-1))){
        return 1;
    }
    else{
        return 0;
    }
}
void alter_setbit(int n1,int p1){
    int res;
    if(set_or_not(n1,p1)){
        res=n1^(1<<(p1-1));
        cout<<res;
    }
    else{
        res=n1|(1<<(p1-1));
        cout<<res;
    }
}
int main(){
    int num,pos;
    cout<<"Enter num and position to alter bit\n";
    cin>>num>>pos;
    alter_setbit(num,pos);
    return 0;
}