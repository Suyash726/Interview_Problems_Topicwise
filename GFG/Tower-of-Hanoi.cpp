#include <bits/stdc++.h>
using namespace std;

void solve(int n,int a ,int b,int c)
{
if(n ==1)
{
cout << "Move the disk 1 from " << a <<" to " << b <<endl;
return;}

solve(n-1,a,c,b);
cout<<"Move the disk " << n<< " from " << a<< " to " <<b<<endl; 
solve(n-1,c,b,a);

}



int main()
{
int n ;
cin>>n;
solve(n,1,3,2);
return 0;


}
