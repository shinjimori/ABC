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
  double a, b;
  vector<pair<double, double>> p;
  double distance;
  vector<double> l;
  for (int i = 0; i < n; i++) {
    cin >> a >> b;
    p.push_back(make_pair(a, b));
  }

  for (int i = 0; i < n; i++) {
    for (int j = 0; j < n; j++) {
      distance = sqrt(pow((p[i].first-p[j].first), 2)+pow(p[i].second-p[j].second, 2));
      l.push_back(distance);
    }
  }
  double max = *max_element(l.begin(), l.end());

  cout << max << endl;
  return 0;
}
