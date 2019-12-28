#include <iostream>
#include <list>
#include <iterator>
#include <vector>
#include <algorithm>
using namespace std;
int main() {
  int m,res=0,min,from=0;
  std::vector<int>::iterator j;
  int n=0;
  cin>>n;
  vector<int> v;
  for (int i = 0; i < n; i++) {
    cin>>m;
    v.push_back(m);
  }

  while (v.size()>1) {
    for (size_t i = 0; i < v.size()-1; i++) {
      if(v[i]==v[i+1]){
        v.erase(v.begin()+i);
        i--;
      }
    }
    min=5000000;
    for (size_t i = 0; i < v.size(); i++) {
      j=find(v.begin()+i+1,v.end(),v[i]);
      if(j!=v.end()){
        int dist=distance(v.begin()+i,j);
        if(dist<min){
          min=dist;
          from=i;
        }
      }

    }
    if(min>6000){
      res+=v.size()-1;
      break;
    }else{
      v.erase(v.begin()+from,v.begin()+from+min);
      res+=min-1;
    }
  }
  cout<<res;
  return 0;
}
