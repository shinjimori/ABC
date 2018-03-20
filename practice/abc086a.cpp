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
int main(int argc, char *argv[])
{
  int a, b;

  cin >> a >> b;

  if((a*b)%2 == 0)
    cout << "Even" << endl;
  else
    cout << "Odd" << endl;
  
  return 0;
}
