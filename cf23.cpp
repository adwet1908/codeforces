#include<iostream>
using namespace std;

int main()
{
   int n , h ,a ; 
   int ctr1 = 0 , ctr2 = 0 ; 
   cin >> n >> h ;
   while (n--)
   {
       cin>> a; 
       if (a>h)
       {
           ctr1++; 
       }
       else{
           ctr2++; 
       }
   }

   cout<< 2*ctr1 + ctr2<<endl; 
   
   
   
    return 0;
}
