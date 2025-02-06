#include<iostream>
#include<stdio.h>
#include <algorithm>
#include <vector>
#include<string>
using namespace std;
////////////////////////////////////////////////////////////////C string/////////////////////////////////////////////
// int main()
// {
//     // char ch[7] ={"soorya"};
//     // cout<<ch;
//     // return 0;
//     char f_name[20];
//     char l_name[20];
//     char full_name[50];
    
//     cout<<"enter your first name: ";
//     cin>>f_name;
//     cout<<"enter your last name: ";
//     cin>>l_name;
//     cout<<f_name<<"your first name: "<<strlen(f_name)<<'\n'<<l_name<<"your last name:"<<strlen(l_name)<<'\n';//strlen its used to find the string size
//     // strcpy(full_name,f_name); //strcpy string copy means it copy the 1st name 
//     // strcat(full_name," "); //strcat string concordination means its use to give the space 
//     // strcat(full_name,l_name); 

//     if ((strcmp(f_name,l_name))==0)
//     {
//         cout<<"both sstring are equal";
//     }
//     else{
//         cout<<"not equal";
//     }

//     // cout<<full_name;
//     return 0;
// }
// int main()
// {
//     // string str1;
//     // cout<<"Enter your name: ";
//     // //cin>>str1;
//     // //getline(cin,str1);


//     string str1 = {"soorya"};
//     cout<<str1[0];// at fun its means to access the paticural string

//     return 0;
// }  
/////////////////////////////////////////////////////////////////////STRING OPERATION//////////////////////////////////////////////////////////////

// int main()
// {
//      string str = {"soorya kumar"};
//      string :: iterator it;
//      for(it=str.begin(); it!=str.end();it++)
//      {
//         cout<<*it;
//      }
//      cout<<'\n';

//      cout<<"size of str :"<<str.size()<<'\n';
//      cout<<"lenght of str :"<<str.length()<<'\n';
//      cout<<"Max_size of str :"<<str.max_size()<<'\n';
//      cout<<"capacity of str :"<<str.capacity()<<'\n';

// return 0;
// }

///////////////////////////////////////////////////////////encryt and decryt////////////////////////////////////////////////////////////////////////
// int main()
// {
//     string alphabets {"abcdefghijklmnopqrstuvwxyzABCDEFGCHIJKLMNOPQRSTUVWXYZ"};
//     string key {" ZYXWVUTSRQPONMLKJIHGFEDCBAabcdefghijklmnopqrstuvwxyz"};
//     string msg {};
//     cout<<"Enter your message:"; 
//     getline(cin,msg);

//     cout<<'\n'<<"Encypting message..."<<'\n';

//     for(char c : msg)
//     {
//         size_t position = alphabets.find(c);
//         if(position != string::npos)
//         {
//             char new_c=key.at(position);
//             encrypted_msg += new_c;
//         }
//         else{
//             encrypted_msg += c;
//         }
//     }
//     cout<<'\n'<<"Encrypted message is:"<<encrypted_msg<<'\n';
//     return 0;
// }

// int main()
// {
//     vector<string> a;
//     a.push_back("Hi");
//     a.push_back("Welcome");
//     a.push_back("To the world");
//     reverse(a.begin(), a.end());

//     for (auto c: a)
//     {
//         cout<<c<<'\n';
        
//     }
    
// return 0;
// }

///////////////////////////////////////////////////////////////////////////Pyramid Pattern//////////////////////////////////////////////////////////////////////////////////

// int main()
// {
//     string letter; 
//     cout<<"Enter the String :"<<'\n';
//     getline(cin,letter);
//     int len =letter.length();
//     int position = 0;
//     for (char c:letter)
//     {
//         int space=len-(position+1);

//         while (space>0)
//         {
//             cout<<" "; 
//             --space;
//         }
//         for(int i=0; i<position; i++)
//         {
//             cout<<letter.at(i);
//         }
//         cout<<c;
//         for(int i=position-1; i>=0; i--)
//         {
//             cout<<letter.at(i);
//         }
//         cout<<'\n';
//         position++;
    
//     }
//     return 0;

// }

// int main()
// {
//     string str;
//     cout<<"Enter the string :"<<'\n';
//     getline(cin,str);
//     reverse(str.begin(),str.end());
//     cout<<str;

//     // for(auto c: str)
//     // {

//     // }
//     return 0;
// }

