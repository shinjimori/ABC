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
  string S, T;
  cin >> S;
  string alphabet = "abcdefghijklmnopqrstuvwxyz";
  int check[26]={0};

  for(int i=0; S[i] != '\0' ; ++i){
    for(int j=0; j < 26; ++j){
      if(S[i]==alphabet[j]) ++check[j];
    }
  }

  for(int i=0; i < 26; ++i){
    if(check[i]==0) T+=alphabet[i];
  }

  if(T.size()==0) cout << "None" << endl;
  else cout << T[0] << endl;
  
  return 0;
}
