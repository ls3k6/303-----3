#include "function.h"

void queuePrint(queue<int> q){
  queue<int> qq = q;
  int num = qq.size();
  if(qq.size() != 0){
    for(int i = 0; i < num; i++){
      cout << qq.front() << " ";
      qq.pop();
    }    
    cout << endl;
  }
}

void queueChange(queue<int>& q){
  if(q.size() != 0){
    int temp = q.front();
    q.pop();
    q.push(temp);
  }
}  

bool palindromeCheck(string b, int start, int end){
  if(start == end){
    return true;
  }

  if(b[start] != b[end]){
    return false;
  }

  if(start < end +1){
    return palindromeCheck(b, start+1, end-1);
  }
  return true;
}

void outputMap(map<string, string> m){
  map<string, string>::iterator iterate;
  for(iterate = m.begin(); iterate != m.end(); iterate++){
    cout << iterate->first << ", " << iterate->second << endl;
  }
}

void checkMap(map<string, string> m, string target){
  map<string, string>::iterator iterate;
  bool found = false;
  for(iterate = m.begin(); iterate != m.end(); iterate++){
    if(iterate->first == target){
      found = true;
      cout << iterate->first << ", " << iterate->second << endl;
    }
  }
  if(!found){
    cout << "That state is not part of our database." << endl;
  }
}
