#include<iostream>
#include<stdio.h>
#include <algorithm>
#include <vector>
using namespace std;

//*************************************************odd are even***************************************************//
// int main()
// {
//     int a;
//     cout<<"enter the value :"<<'\n';
//     cin>>a;
//     if (a % 2==0)
//     {
//         cout<<"The value is even";
//     }
//     else
//     {
//         cout<<"The value is odd";
//     }
    
//     return 0;
// }

int main()
{
  // int a;
  vector<int> v[3];
  // vector<int> v[a];
  // cout<<"Enter the vector :";
  // cin>>a;
  for (int i=0; i<3; i++)
  {
    int n;
    cout<<"Enter size of Vector :"<<i+1;
    cin>>n;
    for (int j=0; j<n; j++)
    {
        int a;
        cout<<"enter the values of v:"<<j+1;
        cin>>a;
        v[i].push_back(a);
    }
    
  }
  return 0;
}