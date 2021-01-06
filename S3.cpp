/*learn map data structure*/


#include<bits/stdc++.h>
using namespace std;
int main()
{
  string s{"geeksforgeeks"};
  map<char,int> m;
  for(int i{};i<s.size();i++)
  {
    m[s.at(i)]++;
  }
  
  for (map<char,int>::iterator it=m.begin(); it!=m.end(); ++it)
    {
    if(it->second>1)
      { 
      cout << it->first << " => " << it->second << '\n';
      }
    }
  return 0;
}
