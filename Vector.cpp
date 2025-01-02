#include<iostream>
#include<stdio.h>
#include <algorithm>
#include <vector>
using namespace std;

//*********************************************************************Vector******************************************//

//Member function, Iterators, Capacity//

//


/*int main()
{
    vector<char> v={'s','a'};
    vector<char>:: iterator it;
    for(it=v.begin();it !=v.end(); it++)
    {
        cout<<*it<<" ";
    }
    return 0;
}*/
/*
int main()
{
    // begin() and end()
    //vector<int> v={1,2,3,4,5};
    //vector<int>:: iterator it; // 
    //for(it=v.begin()+2 ;it !=v.end(); it++)  //+2 means loaction of vector, v.begin means begining of vector data and v.end means end of vector data//
    //{
    //    cout<<*it<<" ";
    //}

    //rbegin and rend for reverser the

    vector<char> v={'s','a','n'};
    vector<char>:: reverse_iterator rit;
    for(rit=v.rbegin() ; rit !=v.rend(); rit++)
    {
        cout<<*rit<<" ";
    }

    return 0;
}*/

/*int main()
{
    vector<char> vowels={'a','e','i','o'};
    vector<int> v={1,2,3,4,5};
    v.resize(10);
    for(int i=0; i<v.size();i++)
    {
        cout<<v.at(i)<<'\n';
    }
    cout<<"size of vector:"<<vowels.size()<<'\n';
    cout<<"Max Size of vector: "<<vowels.max_size()<<'\n';
    cout<<"capacity of vector: "<<vowels.capacity()<<'\n';
    vowels.push_back('u');  // it is used for inserting the data in vector at end
    cout<<"size of vector:"<<vowels.size()<<'\n';
    cout<<"Max Size of vector: "<<vowels.max_size()<<'\n';
    cout<<"capacity of vector: "<<vowels.capacity()<<'\n';
    vowels.resize(3); //it is means resize the vector size
    for (int i =0; i<vowels.size(); i++)
    {
        cout<<vowels.at(i)<<" ";
    }
    
 
    return 0;
}*/

//*******************************************************************************ITERATOR*************************************************************************************//

/*int main()
{
    vector<int> v={1,2,3,4,5,6,7,8,9,10};
    vector<int> :: iterator a;
    a=v.begin();

    while (a !=v.end())
    {
        cout<<*a<<" ";
        a++;
    }
    return 0;
}*/

// ood and even//
/*int main()
{
    vector<int> v={1,2,3,4,5,6,7,8,9,10};
    vector<int> :: iterator it;
    it=v.begin();
    while (it !=v.end())
    {
        if (*it % 2==0)
        {
            v.erase(it);
        }
        else
        {
            it++;
        }
    }
    for (auto n:v)
    {
        cout<<n<<" ";
    }
    
    return 0;

}*/
// swap//
/*int main()
{
    vector<int> v1={1,2,3,4,5};
    vector<int> v2={6,7,8,9,10};
    v1.swap(v2);
    cout<<"v1=v2 :"<<'\n';
    for(auto n:v1)
    {
        cout<<n<<" ";
    }
    cout<<'\n'<<"v2=v1 :"<<'\n';
    for ( auto n:v2)
    {
        cout<<n<<" ";
    }
    
return 0;
}*/

int main()
{
    vector<int> v1={1,2,3,4,5};
    sort(v1.begin(), v1.end());
    for (auto n:v1) // range base for loop
    {
        cout<<n<<" ";
    }
    return 0;
}