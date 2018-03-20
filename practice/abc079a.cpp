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

  //同じ数字が連続して3回並んだ4桁の整数かどうか判定

  if(s[0]==s[1] && s[0]==s[2]){
    cout << "Yes" << endl;
    return 0;
  }else if(s[1]==s[2] && s[1]==s[3]){
    cout << "Yes" << endl;
    return 0;
  }else{
    cout << "No" << endl;
    return 0;
  }

  return 0;
}
