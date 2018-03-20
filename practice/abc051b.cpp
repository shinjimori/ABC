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
  int K, S;
  cin >> K >> S;
  int count = 0;

  for (int x = 0; x <= K; x++) {
    for (int y = 0; y <= K; y++) {
      if(S >= x + y && K >= S - x - y) ++count;
    }
  }

  cout << count << endl;
  return 0;
}
