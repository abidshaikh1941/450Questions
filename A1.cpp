// reverse an array
#include<bits/stdc++.h>
using namespace std;
const int size = 5;
int main()
{
int a[5]={10,20,30,40,50};
for(int i{};i<size/2;i++)
{
  int temp = a[i];
  a[i]=a[N-i-1];
  a[N-i-1] = temp;
}
for(int x: a)
{
cout<<x;
}


return 0;
}
