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
  int n;
  cin >> n;

  int l[n];
  int r[n];
  int sum = 0;
  for (int i = 0; i < n; i++) {
    cin >> l[i] >> r[i];
  }


  for (int i = 0; i < n; i++) {
    sum += r[i] - l[i] + 1;
  }

  cout << sum << endl;
  return 0;
}
