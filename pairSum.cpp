#include <iostream>
#include <vector>

using namespace std;

vector<int> pairSum(vector<int> que, int target){
    int st = 0;
    int end = que.size()-1;
    vector<int> ans;
  while(st<end){
    int currSum = que[st] + que[end];
    
      if(currSum == target){
         ans.push_back(st);
         ans.push_back(end);
         return ans;
      } else if(currSum>target){
        end--;
      }else{
        st++;
      }
      
  }
  return ans;
}



int main(){
   vector<int> que = {2,7,11,13};
   int target = 9;
   vector<int> result = pairSum(que,target);
   cout<< result[0] << " , " <<result[1] <<endl;

    return 0;
}
