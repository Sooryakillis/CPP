#include<iostream>
#include<stdio.h>
#include <algorithm>
#include <vector>
using namespace std;

/*int main()
{
    float x = 3456.123f;
    double a=9.123456789;
    long double aa=999.12345678l;
    cout<<"double a="<<a<<endl;

    cout<<"long double aa="<<a<<endl;
    cout<<"float x="<<x<<endl;

    return 0;
}*/

/*int main()
{
    char ch= 'a';
    cout<<(int)ch<<"\n";

    return 0;
}*/

/*int main ()
{
    wchar_t ch=L'A';
    std::wcout<<(int)ch<<'\n';
    std::cout<<sizeof(wchar_t)<<'\n';
    return 0;
}*/

//bool//

/*int main()
{
    bool b=fales;
    std::cout<<b<<'\n';
    
    return 0;
}*/

/*int main ()
{
    int x=10;
    float y=12.5;
    float z=true+x+false+y;
    std::cout<<z<<'\n';
    std::cout<<sizeof(bool);

    if((x<y)==true)
    {
       std::cout<<"x is lesser"<<'\n';
     
    }
    else{
        std::cout<<"y is lesser"<<'\n';
    }

    return 0;
}*/

// Example for get input and output//

/*int main()
{
    char Name[50]; // 50 is the size of the string 
    int age;
    std::cout<<"Enter the name:"<<'\n';
    std::cin>>Name;
    std::cout<<"Enter the age"<<'\n';
    std::cin>>age;

    std::cout<<"The Name is "<<Name<< " and age is "<<age<<'\n';


}*/

// Arithmatic operators

/*int main (){
    int x=10;
    int y;
    y=++x; //pre increment operator
    std::cout<<x<<'\n'<<y<<'\n';
    y=x++; // post increment operator
    std::cout<<x<<'\n'<<y<<'\n';

    return 0;
}*/

//relational Operators 

/*int main () {
    int x=3, y=6;
    std::cout<<"x<y"<<(x<y)<<'\n';
    std::cout<<"x>y"<<(x>y)<<'\n';
    std::cout<<"x<=y"<<(x<=y)<<'\n';
    std::cout<<"x>=y"<<(x>=y)<<'\n';
    std::cout<<"x==y"<<(x==y)<<'\n';
    std::cout<<"x!=y"<<(x!=y)<<'\n';

    return 0;
}*/

// Logical Operator 

/*int main (){
    int x=5,y=10;
    if ((x>5)&&(y<15))
    {
        std::cout<<"x+y:"<<(x+y)<<'\n';
    }
    else if((x<=5)||(y>15))
    {
        std::cout<<"x-y"<<(x-y)<<'\n';
    }
    else{
        std::cout<<"!x"<<!x<<'\n';
    }
}*/

//Bitwise Operator

/*int main ()

{
    int x=26,y=9;
std::cout<<"x&y:"<<(x&y)<<'\n';
std::cout<<"x|y:"<<(x|y)<<'\n';
std::cout<<"x^y:"<<(x^y)<<'\n';
std::cout<<"x<<y:"<<(x<<1)<<'\n';
std::cout<<"x>>y:"<<(x>>1)<<'\n';
std::cout<<"~x:"<<(~x)<<'\n';

return 0;
}*/

// Type cast 

/*int main ()
{
float a= 22.3;
std::cout<<(int)a<<'\n';
std::cout<<a<<'\n'; 

return 0;
}*/

//****************************************************************************Conditional operator********************************************************************//

/*int main ()
{
    int a=20,b=10;
    std::cout<<"maximum no:"<<((a&&b)?a:b)<<'\n'; // if else conditon cd

    return 0;
}*/

//****************************************************************************Precedence Operator**********************************************************************//
/*int main (){

    int x=3, y;
    y=x++ + ++x;
    std::cout<<"X:"<<x<<'\n'<<"Y:"<<y<<'\n';

    return 0;
}*/

/*int main (){

    int x=3, y;
    y=(x--)+(x=10);
    std::cout<<y<<'\n';

    return 0;
}*/

//******************************************************************************If Esle********************************************************************************//

/*int main (){
    int money;
    cout<<"How much money i have in my hand: "<<'\n';
    cin>>money;
    if(money>=1000)
    {
    cout<<"Money i have: "<<money<<'\n';
    cout<<"Let Take a Cup of Coffee"<<'\n';
    }
    else{
    cout<<"Money i have: "<<money<<'\n'; 
     cout<<"Let Take a Cup of tea"<<'\n';
    }
    cout<<"Lets go to home"<<'\n';
    return 0;
}*/

 //*******************************************************************************else if ladder*****************************************************************************//
/*int main (){
    int money;
    cout<<"how much money i have: "<<'\n';
    cin>>money;
    if(money>=1000)
    {
    cout<<"I having: "<<money<<'\n';
    cout<<"Let buy a Tomato"<<'\n';
    }
    else if(money>500)
    {
    cout<<"I having : "<<money<<'\n'; 
     cout<<"Let Buy a Potato"<<'\n';
    }
    else
    {
     cout<<"I having : "<<money<<'\n'; 
     cout<<"Dont buy any things"<<'\n';   
    }
    cout<<"Lets go to home"<<'\n';
    return 0;
}*/

//***************************************************************************************nested if*************************************************************************//

/*int main()
{
    int money, age;
    cout<<"enter money"<<'\n';
    cin>>money;

    if(money>1000)
    {
        cout<<"enter age"<<'\n';
        cin>>age;
        if(age>21)
        {
            cout<<"lets take wine"<<'\n';
        }
        else
        {
            cout<<"lets have coffe"<<'\n';
        }
    }
    else{
        if(money>500)
        {
            cout<<"lets take coffe in ccd"<<'\n';
        
        }
        else
        {
            cout<<"coffe in normal shop"<<'\n';
        }
    }
     cout<<"then go to home"<<'\n';
    return 0;
}*/

//switch case//

/*int main()
{
    char oper;
    cout<<"Enter Operator"<<'\n';
    cin>>oper;
    float num1, num2;
    cout<<"Enter two number"<<'\n';
    cin>>num1>>num2;

    switch(oper)
    {
        case '+':
        cout<<num1<<"+"<<num2<<"="<<num1+num2<<'\n';
        break;
        case '-':
        cout<<num1<<"-"<<num2<<"="<<num1-num2<<'\n';
        break;
        case '*':
        cout<<num1<<"*"<<num2<<"="<<num1*num2<<'\n';
        break;
        case '/':
        cout<<num1<<"/"<<num2<<"="<<num1/num2<<'\n';
        break;
        default:
        cout<<"Operator error:_:"<<'\n';
        break;
    }
    return 0;
  
}*/

/*********************************************************************for loop*************************************************************************************************/

/*int main(){
    for(int i=1; i<=10; i++){

        cout<<i<<'\n';
    }
    return 0;
}*/

//************************************************while loop*******************************************************//

/*int main ()
{
    int n;
    std::cout<<"Enter the number B/W 0 to 10:"<<'\n';
    std::cin>>n;

    while(n<=0 || n>=10)
    {
    std::cout<<"enter vaild number";
    cin>>n;
    }
std::cout<<"vaild number";
return 0;
}*/


/*int main ()
{
    int n;
     cout<<"enter a positive number: countdown";
     cin>>n;
    while(n>0)
    {
        cout<<n<<'\n';
        n--;
    }
    cout<<"lets bang";
return 0;
}*/

/*int main(){
    int n;
    bool flag=false;
    while(!flag)
    {
        cout<<"enter number B/W 0 to 10:";
        cin>>n;
        if(n<=0 || n>=10)
        {
        cout<<"not a vaild number"<<'\n';
        }
        else
        {
        cout<<n<<":is vaild number"<<'\n';
        flag=true;
        }
    }
    cout<<"thanks";
    return 0;
}*/


/*int main(){
    int i;
    cout<<"enter the number:";
    cin>>i;
    while(i)
    {
        cout<<i<<'\n';
        i--;
    }
    return 0;
}*/

//**********************************************************************Reverse String***************************************************************//

/*int main() 
{ 
    string str; 
    cout<<"Enter the Name:"<<'\n';
    cin>>str;
    reverse(str.begin(), str.end()); 
	cout<<str<<"\n"; 
    return 0;
}*/

//***********************************************************************Do while********************************************************************//

// find area of rectangle//

/*int main()
{
     char choice; 
    do
    {
    float l,b,area;
    cout<<"Enter the L and B:"<<'\n';
    cout<<"Lenght:"<<'\n';
    cin>>l;
    cout<<"b:"<<'\n';
    cin>>b;
    area=l*b;
    cout<<"The area is:"<<area<<'\n';
    cout<<"calculate another: (Y/N)"<<'\n';
    cin>>choice;
    } while (choice == 'Y' || choice == 'y');
    cout<<"end the Loop";
    
    return 0;
}*/

/*int main()
{
    int number = 0, sum=0;
    do
    {
    sum += number;
    cout<<"Enter the number:"<<'\n';
    cin>>number;
    } while (number>0);
    cout<<"sum the numbers:"<<sum<<'\n';
    return 0;
    
}*/

/*int main ()
{
    char choice;
    do
    {
        int a,b,sum=0,sub=0,mul=0,d=0;
        cout<<"1.Addition"<<'\n';
        cout<<"2.Subtraction"<<'\n';
        cout<<"3.Multiplication"<<'\n';
        cout<<"4.Division"<<'\n';
        cout<<"Quit [Q/q]"<<'\n';
        cout<<"Enter your choice:"<<'\n';
        cin>>choice;
        if(choice == '1')
        {
            cout<<"your choice is 1.Addition:"<<'\n';
            cout<<"Enter two number"<<'\n';
            cout<<"a=";
            cin>>a;
            cout<<"b=";
            cin>>b;
            sum=a+b;
            cout<<"Addition a + b:"<<sum<<'\n';
        }
        else if(choice == '2')
        {
            cout<<"your choice is 2.Subtraction:"<<'\n';
            cout<<"Enter two number"<<'\n';
            cin>>a>>b;
            sub=a-b;
            cout<<"subtraction a - b:"<<sub<<'\n';
        }
         else if(choice == '3')
        {
            cout<<"your choice is 3.Multiplication:"<<'\n';
            cout<<"Enter two number"<<'\n';
            cin>>a>>b;
            mul=a*b;
            cout<<"Multiplication a * b:"<<mul<<'\n';
        }
        else if(choice == '4')
        {
            cout<<"your choice is 4.Division:"<<'\n';
            cout<<"Enter two number"<<'\n';
            cin>>a>>b;
            d=a/b;
            cout<<"Division a / b:"<<d<<'\n';
        }
        else if (choice == 'Q' || choice == 'q')
        {
         cout<<"Finished"<<'\n';
        }
        else
        {
            cout<<"your choice is worng"<<'\n';
        }
    } while (choice != 'q' && choice != 'Q');
    return 0;
}*/

//*****************************************************************************Range for loop**************************************************************//

/*int main ()
{
  int a[]={1,2,3,};
  for(auto b:a)
  {
    cout<<b<<'\n';
  }
  return 0;
}*/

/*int main ()
{
    vector <int> a={1,2,3};
    for(auto b:a)
    {
        cout<<b<<'\n';
    }
    return 0;
}*/

/*int main ()
{
    for(char a : "asdfg")
    {
        cout<<a<<'\n';
    }
    return 0;
}*/

//*****************************************************************************************break*********************************************************&*****************//

/*int main()
{
   int num, total=0;
   while(1)
   {
    cout<<"enter number"<<'\n';
    cin>>num;
     if(num<0)
     {
        break;
     }
    total += num;
    cout<<"sum of number"<<'\n';
    cout<<total<<'\n';
     //cout<<total<<'\n';
   }
   return 0;
}*/

//********************************************************************************************break nested loop****************************************************************//

/*int main()
{
   for (int i = 0; i <3; i++)
   {
    for (int j = 0; j < 5; j++)
    {
        if (j==3)
        {
            break;
        }
        cout<<"i:"<<i<<'\t'<<"j:"<<j<<'\n';
    }
    return 0;
   }
   
    
}*/

//***************************************************Continue statement*************************************//
/*int main()
{
   for (int i=1; i<10; i++)
   {
        if (i==3)
        {
            continue;;
        }
        cout<<"i:"<<i<<'\n';
    }
    return 0;
   }*/

  /*int main ()
  {
    int num,i=1, total=0;
    while (i<=10)
    {
        cout<<"Enter the Number:";
        cin>>num;
        if (num<0)
        {
            continue;
        }
        total += num;
        i++;
    }
    cout<<total<<'\n';
    return 0;
  }*/
//******************************************range based break and continue**************************************************/

 /*int main()
 {
    int data[]={1,2,3,4,-5,5,6,-6,7,8,99,10};
    for(auto n : data)
    {
        if (n==-5 || n==-6)
        {
            continue;
        }
        else if (n==99)
        {
            break;
        }
        cout<<n<<'\n';
    }
    return 0;
 }*/

//****************************************************************************Nested LOOP***********************************//

/*int main()
{
    for (int i = 1; i <=2 ; i++)
    {
        for (int j = 0; j < 5; j++)
        {
        cout<<"*";
        }
        cout<<'\n';
    }
    cout<<"exit from loop";
    return 0; 
}*/
   
/*int main()
{
    int j=1;
    while (j<=2)
    {
        int i=1;
        while (i<=5)
        {
        cout<<"*";
        i++;
        }
    j++;
    cout<<'\n';
    }
   return 0; 
}*/

/*int main()
{
    int data [] = {1,2,3,4,5,6};
    int total=0;
    for (int i = 0; i <=6; i++)
    {
        for (int j = i+1; j<=6; j++)
        {
            total += data[i]*data[j];
        }
    }
    cout<<"total is:"<<total;
    return 0;
}*/

 /*int main() 
 {
 int roll_no[5];
 for (int i = 0; i <5; i++)
 {
    cout<<"Enter the roll_no:";
    cin>>roll_no[i];
 }
 //cout<<&roll_no;  // & is the address of operator
 return 0;
 }*/

/*int main()
{
    int a[15]={0};
    a[0]=1;
    a[14]=150;
    for (int i = 0; i <15; i++)
    {
        cout<<a[i]<<'\n';
    }
    return 0;
}*/

/*int main()
{
    int i=0;
    int a[3],b[3],c[3];
    for (int i = 0; i<3; i++)
    {
        cout<<"a array values:"<<'\n';
        cin>>a[i];
    }
    
    for (int i = 0; i<3; i++)
    {
        cout<<"b array values:"<<'\n';
        cin>>b[i];
    }

    for (int i = 0; i<3; i++)
    {
        c[i]=a[i]+b[i];
        cout<<"the c values;"<<c[i]<<'\n';
    }
    return 0;
}*/

/*int main()
{
    int nums[4]={2,7,11,15};
    for (int i = 0; i <4; i++)
    {
        for (int j = i+1; j < 4; j++)
        {
            int c = nums[i]+nums[j];
            //cout<<c<<'\n';
            if (c == 22)
            {
                cout<<i<<' '<<j<<'\n'; 
            }
            
        } 
    }
    return 0;
}*/

// Given a non-empty arrays of integer nums, every element appares twice expext for one. Find the single one.
/*int main()
{
    int nums[5]={4,4,2,1,2};
    int ans=0;
    for (int i = 0; i <5; i++)
    {
        ans= ans ^ nums[i];
    }
    cout<<ans<<'\n';
    return 0;
}*/


//Find douple arrays.
/*int main()
{
    int num[10]={5,6,2,1,3,5,6,7,8,9};
    bool Duplicate = false;
    for (int i = 0; i<10; i++)
    {
        for (int j = i+1; j<10; j++)
        {
            if (num[i] == num[j])
            {
                cout<<"duplicate found: "<<num[i]<<'\n';
                Duplicate = true;
                break;
            }
        }
    }
    for (int i = 0; i<10; i++)
    {
        for (int j = i+1; j <10; j++)
        {
            if (num[i] == num[j])
            {
                
            }
        cout<<"num"<<num[i]<<'\n';  
        }
        
    }
    if (!Duplicate  )
    {
        cout<<"Not Duplicated";
    }
    return 0;
}*/

//***********************************************************2D ARRAY******************************************//

/*int main()
{
    float arr1[2][3];
    int arr2[3][4];
    char arr3[15];
    cout<<"size of array 1: "<<sizeof(arr1)<<"bytes"<<'\n';
    cout<<"size of array 2: "<<sizeof(arr2)<<"bytes"<<'\n';
    cout<<"size of array 3: "<<sizeof(arr3)<<"bytes"<<'\n';

    return 0;
}*/

