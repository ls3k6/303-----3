#include <iostream>
#include "function.h"
using namespace std;

int main() {
  
  //1:
  cout << endl;
  queue<int> q;
  q.push(1);
  q.push(2);
  q.push(3);
  q.push(4);

  queuePrint(q);
  queueChange(q);
  queuePrint(q);

  //2:  
  string s = "\nracecar";
  if(palindromeCheck(s, 0, s.length()-1)){
    cout << s << " is a palindrome" << endl;
  }else{
    cout << s << " is NOT a palindrome" << endl;
  }

  s = "Tattarrattat";
  if(palindromeCheck(s, 0, s.length()-1)){
    cout << s << " is a palindrome" << endl;
  }else{
    cout << s << " is NOT a palindrome" << endl;
  }

  s = "surfeit";
  if(palindromeCheck(s, 0, s.length()-1)){
    cout << s << " is a palindrome" << endl;
  }else{
    cout << s << " is NOT a palindrome\n" << endl;
  }
  
  //5:
  map<string, string> stateMapData;
  map<string, string>::iterator iterate;

  stateMapData.insert(pair<string, string>("Nebraska", "Lincoln"));
  stateMapData.insert(pair<string, string>("New York", "Albany"));
  stateMapData.insert(pair<string, string>("Ohio", "Columbus"));
  stateMapData.insert(pair<string, string>("California", "Sacramento"));
  stateMapData.insert(pair<string, string>("Massachusetts", "Boston"));
  stateMapData.insert(pair<string, string>("Texas", "Austin"));

  outputMap(stateMapData);
  
  iterate = stateMapData.find("California");
  iterate->second = "Los Angeles";

  string name;
  cout << "\nEnter the name of a state: ";
  cin >> name;

  checkMap(stateMapData, name);

  cout << "\nEnter the name of a state: ";
  cin >> name;

  checkMap(stateMapData, name);
}
