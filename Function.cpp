#include<iostream>
#include<stdio.h>
#include <algorithm>
#include <vector>
#include<string>
using namespace std; 


// void display(string); // declaration the function
// int main()
// {
//     string name ="soorya";
//     display(name);  // call the function
//     return 0;
// }

// void display(string name) // definition the function
// {
//     cout<<"HI "<<name; 
//     return;
// }

////////////////////////////////////////////////////////////////////////////////////////addision////////////////////////////////////////////////////////////////////

// void add(int x, int y); //x, y is a prameter

// int main()
// {
//     add(10,10); // 10,10 is argument

//     return 0;
// }

// void add(int x, int y)
// {
//     cout<<x+y<<'\n';
// }

//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// int add(int a, int  b) // parameter
// {
//     return a+b;
// }

// int main()
// {
//     int x,y,sum=0;
//     cout<<"Enter X and Y values :"<<'\n';
//     cin>>x>>y;
//     sum=add(x,y); // argument  
//     cout<<"the sum is :"<<sum<<'\n';
//     return 0;

// }

//////////////////////////////////////////////////////// modify values ////////////////////////////////////////////////////// call by value///////
// int mody(int);

// int main()
// {
//     int a = 5;
//     cout<<"before modfiy the value :"<<a<<'\n';
//     mody(a);
//     cout<<"after modify the value :"<<a<<'\n';

// }

// int mody(int n)
// {
//     n=50;
//     cout<<"the modify value is :"<<n<<'\n';

// }

// before modfiy the value :5
// the modify value is :50
// after modify the value :5

////////////////////////////////////////////////////// call by reference //////////////////////////////////////////////

// int mody(int&);

// int main()
// {
//     int a = 5;
//     cout<<"before modfiy the value a :"<<a<<'\n';
//     mody(a);
//     cout<<"after modify the value a:"<<a<<'\n';

// }

// int mody(int &n)
// {
//     n=50;
//     cout<<"the modify value is :"<<n<<'\n';

// }

// before modfiy the value a :5
// the modify value is :50
// after modify the value a:50

///////////////////////////////////////////////pointer in call by reference ////////////////////////////////////

// int mody(int*);

// int main()
// {
//     int a = 5;
//     cout<<"before modfiy the value a :"<<a<<'\n';
//     mody(&a); // here & is address of operator
//     cout<<"after modify the value a:"<<a<<'\n';

// }

// int mody(int* n)
// {
//     *n=50;
//     cout<<"the modify value is n :"<<*n<<'\n'; // if not use * can print the address of varibale a in main 

// }

// before modfiy the value a :5
// the modify value is n :50
// after modify the value a:50

//////////////////////////////////////////////////////////////////////////////////////////////ardument//////////////////////////////////////////////////////////////////////////////

// void greet(string name, string prefix = "Mr.", string suffix=" ");
// int main()
// {
//     greet("san");
//     greet("kir");
//     greet("kiru", "Ms.","san");




// }

// void greet(string name, string prefix, string suffix)
// {
//     cout<<"Hi "<<prefix +" "+name +" "+suffix<<endl;


// // }
// int add(int, int, int=2);
// int main()
// {
//   cout<<add(1,2,3)<<endl;
//   cout<<add(1,5)<<endl;
//   cout<<add(3,4)<<endl;

// }

// int add(int a, int b, int c)
// {
//     return a+b+c;
// }
/////////////////////////////////////////////////////////////////////////////////Function Overloading ////////////////////////////////////////////////////////////////////////////////////////////////////

// void add(int a, double b);

// int main()
// {
//   add(1,2.3);
//   add(2.5,1);
// }

// void add(int a, double b)
// {
//   cout<<a+b<<'\n';
// }

// void print(int);
// void print(double); // if use fload data type its will show error bocz its overloading the function print for both int and float data types
// void print(string);

// int main()
// {
//   string str = "String";
//   print(10);
//   print(99.9);
//   print(str);
//   return 0;
// }

// void print(int a)
// {
//   cout<<"Print int:"<<a<<endl;
// }

// void print(double b)
// {
//   cout<<"Print float:"<<b<<endl;
// }

// void print(string c)
// {
//   cout<<"print string:"<<c<<endl;
// }


// int main() {
//     float f = 3.14159265358979323846; 
//     double d = 3.14159265358979323846;

//     std::cout << "float: " << f << std::endl; 
//     std::cout << "double: " << d << std::endl; 
//     cout<<sizeof(float)<<'\n';
//     cout<<sizeof(double)<<'\n';



//     return 0;
// }

//////////////////////////////////////////////////////////////////Practices Factorial//////////////////////////////////////////////////////////////////////////////////////////////////
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

// int fact(int);
// int main()
// {
//   int n;
//   cout<<"Enter the number :";
//   cin>>n;
//   cout<<fact(n);
//   return 0;
// }

// int fact(int a)
// {
//   int factorial=1;
//   if(a==0 || a==1)
//   return 1;
//   for(int i=2; i<=a; i++)
//   {
//     factorial = factorial *i;
//   }
//   return factorial;
// }


//////////////////////////////////////////////FInd area of circle

// float findArea(float r) 
// {
//     return (3.14 * r * r);
// }

// int main() 
// {
//     float r, area;
//     cout<<"Enter the Radius of circle :"<<endl;
//     cin>>r;
//     area = findArea(r);
//     cout<< area;
//     return 0;
// }

/////////////////////////////////////////////////////////////Return type Function////////////////////////////////////////////////

// int add(int x1, int y1);
// float devision(int x2, int y2);
// string getname();

// int main()
// {
//     int a = add(10,10);
//     float b = devision(10,3);
//     string c = getname();

//     cout<<"The value of add function is :"<<a<<endl;
//     cout<<"The value of division funciotn is :"<<b<<endl;
//     cout<<"The value of string function is :"<<c<<endl;

//     return 0;
// }

// int add(int x1, int y1)
// {
//     int answer1=x1+y1;
//     cout<<answer1<<endl;

//     return answer1;
// }

// float devision(int x2, int y2)
// {
//     float answer2= (float) x2 /y2;
//     cout<<answer2<<endl;
//     return answer2;
// }

// string getname()
// {
//     string answer3 = "This is string";
//     cout<<answer3<<endl;
//     return answer3;
// }

//////////////////////////////////////////////////////// fibonacci serises////////////////////////////////////////////
//01123456789


// void fib(int a);

// int main()
// {
//     int n;
//     cout<<"Enter the value :"<<endl;
//     cin>>n;
//     fib(n);

// }

// void fib(int a)
// {
//     int x=0;
//     int y=1;
//     int next;
//     for (int i = 1; i <=a; i++)
//     {
//         cout<<x<<" ";
//         next =x+y;
//         x=y;
//         y =next;

//     }
//      //cout<<next<<endl;
    
// }

///////////////////////////////////////////////////////////////// function overloading ////////////////////////////////////////////////////////////////////////////////////////
// int area(int);
// double area(double, double);
// double area(double c);


// int main()
// {
//     int a, area_of_square; 
//     cout<<"Enter the Side of square :";
//     cin>>a;
//     area_of_square=area(a);
//     cout<<"The area of square is :"<<area_of_square<<endl;

//     double b, d, area_of_rect;
//     cout<<"enter the L and B :";
//     cin>>b>>d;
//     area_of_rect=area(b,d);
//     cout<<"The area of rect is :"<<area_of_rect<<endl;

//     double c, area_of_circle;
//     cout<<"enter the radius of circle :";
//     cin>>c;
//     area_of_rect=area(c);
//     cout<<"The area of circle is :"<<area_of_circle<<endl;

// }

// int area(int a)
// {
//     return a*a;
// }

// double area(double b,double d)
// {
//     return b*d;
// }
// double area(double c)
// {
//     double pi=3.14;
//     return pi*c*c;
// }

  /////////////////////////////////////////////////////////////////////////////////////Array of Funcition //////////////////////////////////////////////////////////////////////

//   void print_array(const int[], int); // const means use this to avoid modifying array arr[1] = 20
//   void set_array(int[], int);

//   int main()
//   {
//     int arr[]={1,2,3,4,5};
//     int size = sizeof(arr)/sizeof(int);
//     print_array(arr, size);
//     set_array(arr,size);
//     cout<<endl<<"size of arr :"<<sizeof(arr)<<endl<<"size of int :"<<sizeof(int)<<endl<<"Size :"<<size<<endl;

//     return 0;
//   }

//   void print_array(const int a[], int size)
//   {
//     for (int i = 0; i<size; i++)
//     {
//         cout<<a[i]<<" ";
//     }
    
//   }

//   void set_array(int a[], int size)
//   {
//     for (int i = 0; i <size; i++)
//     {
//         a[i]=a[i]+5;
//         cout<<a[i]<<" ";
//     }
    
//   }

/////////////////////////////////////////////////////////////////////MAx and min array///////////////////////////////////////////////////////////////////

// void min(int a[], int size);
// void max(int a[], int size);

// int main()
// {
//     int arr[]={1,2,3,4,-5,6,7,8,9,10};
//     int size = sizeof(arr)/sizeof(int);
//     min(arr,size);
//      max(arr,size);
//     cout<<"Size of arr :"<<size<<endl;


// }

// void min (int a[], int size)
// {
//     int small = a[0];
//         for (int i=0; i<size; i++)
//     {
//         cout<<a[i]<<" ";
//         if (a[i]<small)
//         {
//             small=a[i];
//         }
//     }
//     cout<<endl<<"min value of array :"<<small<<endl;
    
// }

// void max (int a[], int size)
// {
//     int small = a[0];
//         for (int i=0; i<size; i++)
//     {
//         //cout<<a[i]<<" ";
//         if (a[i]>small)
//         {
//             small=a[i];
//         }
//     }
//     cout<<"max vale of Array: "<<small<<endl;
    
// }

/////////////////////////////////////////////////Recursion and Recursive Function ////////////////////////////////////////////////////////////////////////////////

//function  is calling its self
//***********************1. Factorial
// int fact(int num)
// {
//   if(num==1)
//   {
//     return 1;
//   }
//   return num*fact(num-1);
// }

// int main()
// {
//   cout<<fact(5)<<endl;

//   return 0;
// }

//************************2. fibonaci******************************************************************// 

// int fib(int n)
// {
//   cout<<" fib value :"<<n<<endl;
//   if (n<=1)
//   {
//     return 1;
//   }
//   return fib(n-1)+fib(n-2);
// }

// int main()
// {
//   cout<<fib(5);

//   return 0;
// }

// int sumofdigit(int num)
// {
//   if(num==0)
//   {
//     return 0;
//   }
//   return (num%10+sumofdigit(num/10));
// }

// int main()
// {
//   cout<<sumofdigit(4321);
//   return 0;

// }

// int add(int num)
// {
//   if(num==1)
//   {
//     return 1;
//   }
//   return 2*add(num-1);
// }

// int main()
// {
//   int a=0;
//   int n;
//   cout<<"enter numer of days :";
//   cin>>n;
//   a=add(n);
//   cout<<a<<endl;
//   return 0;
// }


