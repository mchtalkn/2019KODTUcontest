#include <iostream>
#include <queue>
#include <cmath>
using namespace std;
int helper(long i,long k,long *a){
  int tmp;
  if(i==k) return 0;
  cin>>tmp;
  a[i]=helper(i+1,k,a)+tmp;
  return a[i];
}
int main() {
  long n=0,k=0,j=0;
  long long res=1;
  cin>>n>>k;
  long *a=new long[1000000]();
  priority_queue<int> pq;
  long m=0;
  for (int i = 0; i < n; i++) {
    cin>>m;
    pq.push(m);
  }
  m=0;
  helper(0,k,a);
  while(!pq.empty()&&res){
    m=pq.top();
    pq.pop();
    res*=a[m-1]-j;
    j++;
  }
  cout<<res%(long long)(pow(10,9)+7);
  return 0;
}
