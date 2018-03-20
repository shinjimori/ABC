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
  string s,t;
  int count = 1;
  cin >> s;

  for (auto it = s.begin(); it != s.end(); ++it) {
    if (count%2 == 1)
      t += *it;
    ++count;
  }
  cout << t << endl;
  return 0;
}
