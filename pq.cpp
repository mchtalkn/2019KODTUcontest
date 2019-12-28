#include <iostream>
#include <queue>
using namespace std;
#include <sstream>
#include <vector>


  int main() {
  int res=0,sum=0;
  int size=0;
  int money=0;
  std::string tmp;
  std::cin >> size>> money;
  getline(cin,tmp);
  priority_queue<int> pqueue;

  std::string str;
  std::getline(std::cin, str);
  std::istringstream sstr(str);
  int n;
while(sstr >> n){
  pqueue.push(-1*n);
}
  while(!pqueue.empty()){
    if(sum-pqueue.top()<=money){
      sum-=pqueue.top();
      res++;
      pqueue.pop();
    }else{
      break;
    }
  }
  cout<<res;
  return 0;
}
