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
  int N, L;
  cin >> N >> L;
  vector<string> s;
  string buff, ssum;
  for (int i = 0; i < N; i++) {
    cin >> buff;
    s.push_back(buff);
  }
  sort(s.begin(), s.end());
  for (auto it = s.begin(); it != s.end(); ++it) {
    ssum+=*it;
  }
  cout << ssum << endl;
  return 0;
}
