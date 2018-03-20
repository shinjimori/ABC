// Palindromic Number
//------------------------------------------
#include <vector>
#include <list>
#include <map>
#include <set>
#include <deque>
#include <stack>
#include <bitset>
#include <algorithm>
#include <functional>
#include <numeric>
#include <utility>
#include <sstream>
#include <iostream>
#include <iomanip>
#include <cstdio>
#include <cmath>
#include <cstdlib>
#include <cctype>
#include <string>
#include <cstring>
#include <ctime>

using namespace std;


int main()
{
  int A, B, count=0;
  cin >> A >> B;

  for(int i = A; i <= B; i++){
    string front, back;
    front = std::to_string(i);
    back = std::to_string(i);
    std::reverse(back.begin(), back.end());
  
    if(front == back){
      count++;
    }
  }

  cout << count << endl;
  
  return 0;
}
