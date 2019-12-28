#include <iostream>
#include <queue>
#include <cmath>
using namespace std;
int main(int argc, char const *argv[]) {
  int j,k,l,res=0,tmp;
  cin>>j>>k>>l;
  vector<int> a,b,c;
  for (int i = 0; i < j; i++) {
    cin>>tmp;
    a.push_back(tmp);
  }
  for (int i = 0; i < k; i++) {
    cin>>tmp;
    b.push_back(tmp);
  }
  for (int i = 0; i < l; i++) {
    cin>>tmp;
    c.push_back(tmp)
  }
  sort(a.begin(),a.end());
  sort(b.begin(),b.end());
  sort(c.begin(),c.end());
  for(auto t:c){
    for(auto j:b){
      std::vector<int>::iterator j;
      j=find(a.begin(),v.end(),v[i]);
      if(j!=v.end()){
        int dist=distance(v.begin()+i,j);
    }
  }
  cout<<res;
  return 0;
}
