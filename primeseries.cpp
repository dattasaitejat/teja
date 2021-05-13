#include<bits/stdc++.h>
using namespace std;
void print_prime(int num){
    if(num>2){
        cout<<"2 ";
    }
    for(int i=3;i<num;i=i+2){
        int flag=0,sq=sqrt(i)+1;
        for(int j=2;j<sq;j++){
            if(i%j==0){
                flag=1;
                break;
            }
        }
        if(flag==0){
            cout<<i<<" ";
        }
    }  
}
int main(){
    int n;
    cout<<"Enter num between 1 and 1000\n";
    while(1){
        cin>>n;
        if(n<=1 || n>=1000){
            cout<<"please enter number in range og 1 to 1000\n";
        }
        else{
            break;
        }
    }
    print_prime(n);
    return 0;
}