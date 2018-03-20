// Harshad Number
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
  int N, X;
  cin >> N;
  
  X = N;
  
  int sum = 0;
  while(X > 0){
      sum+=X%10;
      X/=10;
  }

  if(N%sum==0)
    cout << "Yes" << endl;
  else
    cout << "No" << endl;
  
  return 0;
}
