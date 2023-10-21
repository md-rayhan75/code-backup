#include<bits/stdc++.h>
//#define size 3
using namespace std;
int main ()
{
    //int array[size];
   // array[0] = 34;
   // array[1] = 35;
   // array[2] = 80;
     
     vector <int> vec;
     vec.push_back(34);
     vec.push_back(35);
     vec.push_back(80);
     
     //sort(vec.begin(),vec.end());
  cout<<vec.size()<<endl;
  for(int i=0;i<vec.size();i++)
  {
    cout<<vec[i]<<endl;
  }
  return 0;
}