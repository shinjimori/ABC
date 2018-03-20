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
  std::vector<int> var, copyvar;
  std::vector<int> count(n, 0);

  for (int i = 1; i < n+1; i++) {
    var.push_back(i);
  }
  copyvar = var;
  for (int i = 0; i < n; i++) {
    int j = 0;
    while(true){
      if(var[i]%2 == 1)
        break;
      else {
        var[i]/=2;
        ++j;
      }
      count[i] = j;
    }
  }

  std::vector<int>::iterator maxitr = std::max_element(count.begin(), count.end());
  int maxindex = std::distance(count.begin(), maxitr);

  cout << copyvar[maxindex] << endl;

  return 0;
}
