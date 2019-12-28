#include <iostream>
#include <cmath>
using namespace std;
int sum;
int helper(int n, int m,int b){
  if(!n) return 0;
    cout<<"n%m="<<(n%m)<<"n="<<n<<"b="<<b<<"\n";
  if(n%m==2) return(helper(n/m,m,b+1)+pow(2,b+1)-1);
  if(n%)
  return(helper(n/m,m,b+1)+pow(2,min(1,n%m)));
}

int main() {
  int inputCount=0,step=0,n=0,m=0;
  cin>>inputCount;
  while(step<inputCount){
    sum=0;
    cin>>n;
    step++;
    while(pow(3,m)<n) m++;
    m--;
    cout<<helper(n,3,0);
  }
  return 0;
}
