#include<bits/stdc++.h>
using namespace std;
int main() {
    long long id;
    cin >> id;

    {
   ifstream in( "numberfile.txt" );
   in >> id;
}
id++;
{
   ofstream out( "numberfile.txt" );
   out << id;
}
cout << id;
return 0;
}