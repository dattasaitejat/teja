#include<bits/stdc++.h>
using namespace std;
void prime_check(int num){
    int i=1,sq,composites=0;
    sq=sqrt(num)+1;
    while(i<sq){
        i++;
        if(num%i==0){
             composites++;
        }
        if(composites>0){
            cout<<num<<" is not prime "<<endl;
            break;
        }    
    }
    if(composites==0){
        cout<<num<<" is prime number";
    } 
}
int main(){
      int n;
      cout<<"enter number"<<endl;
      cin>>n;
      if(n==2){
          cout<<"2 is prime\n";
      }
      else{
          prime_check(n);
      }
      return 0;
}