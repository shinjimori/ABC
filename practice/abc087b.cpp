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
  int a, b, c, x;
  cin >> a >> b >> c >> x;

  int count=0;

  for (int i = 0; i < a+1; i++) {
    for (int j = 0; j < b+1; j++) {
      for(int l = 0; l < c+1; l++){
        if(x==(500*i+100*j+50*l))
          ++count;
      }
    }
  }
  cout << count << endl;
  
  return 0;
}
