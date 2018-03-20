//include
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
  string s;
  cin >> s;
  int duplication;
  int length = s.length();
  for (int i = 0; i < length; i++) {
    duplication = 0;
    for (int j = 0; j < length; j++) {
      if(s[i]==s[j]) ++duplication;
    }
    if(duplication>=2){
      cout << "no" << endl;
      return 0;
    }
  }
  cout << "yes" << endl; 
  
  return 0;
}
