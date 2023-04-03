#include<iostream>
using namespace std;

int main()
{
    int n;
   cin>>n;



   for(int j = 1; j <= n; j++)
   {

   char a = 'A';
   for(int i = 1; i <= j; i++)
   {
       cout<<a;
       a++;
   }

   a--;
   for(int i = 1; i <= j; i++)
   {
       cout<<a;
       a--;
   }
   cout<<endl;
   }

    return 0;
}
