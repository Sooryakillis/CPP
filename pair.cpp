#include<iostream>
#include<stdio.h>
#include <algorithm>
#include <vector>
using namespace std;

// // int main()
// // {
// //     pair<int,float> p1(22,23.25);
// //     //pair<char,string> p2('*',"sanjay");
// //     //pair<int,string> p2;
// //     auto p2=make_pair(13,"sanjay"); // auto is used to automatically assing the data type of variabls.
// //     auto p3=(p1);
// //     cout<<p1.first<<" "<<p1.second<<'\n';
// //     cout<<p2.first<<" "<<p2.second<<'\n';
// //     cout<<p3.first<<" "<<p3.second<<'\n';

    
// //     return 0;
// // }

// /*int main()
// {
//     pair<int,string> p1(20,"sanjay");
//     pair<int,string> p2(13,"soorya");
//     p1.swap(p2);
//     cout<<p1.first<<" "<<p1.second<<'\n';
//     cout<<p2.first<<" "<<p2.second<<'\n';

//     return 0;
// }*/

// /*int main()
// {
//     vector<pair<int,string>> v1={{1, "a"},{2,"b"},{3,"c"}};
//     for(int i=0; i<v1.size();i++)
//     {
//         cout<<v1[i].first<<" "<<v1[i].second<<'\n';
//     }
//     v1.push_back(make_pair(4,"d"));
//      for(int i=0; i<v1.size();i++)
//     {
//         cout<<v1[i].first<<" "<<v1[i].second<<'\n';
//     }
//     return 0;
// }*/

// /*int main()
// {
//     vector<pair<int,int>> v={{1,2},{15,10},{5,-4}};
//     int sum=0;
//     for(auto n:v)
//     {
//         sum +=n.second;
//     }
//     // for (int i=0; i<v.size(); ++i)
//     // {
//     //     sum += v[i].second;
//     // }
//        cout<<sum;
//     return 0;
// }*/

//**********************************************************************Array of vector*****************************************************************//
// int main()
// {
//     vector<int> v[3];
//     v[0].push_back(1);
//     v[0].push_back(2);
//     v[1].push_back(3);
//     v[2].push_back(4);
//     v[2].push_back(5);
//     v[2].push_back(6);
//     for(int i=0; i<3; i++)
//     {
//         for(int j=0; j<v[i].size(); j++)
//         {
//             cout<<v[i][j]<<" ";
//         }
//         cout<<'\n';
//     }
// return 0;
// }

// int main()
// {
//     vector<int> v[3];
//       for(int i=0; i<3; i++)
//       {
//         int n;
//         cout<<"enter size of vector "<<i+1; // i+1 is to represent the vector number
//         cin>>n;
//         for(int j=0; j<n; j++)
//         {
//             int a;
//             cin>>a;
//             v[i].push_back(a);
//         }
//       }
//       return 0;
// }



