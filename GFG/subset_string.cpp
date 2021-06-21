#include <iostream>
#include<bits/stdc++.h>
using namespace std;
 
void get_subset(string ip,string op)
{
    if(ip.size()==0)
    {
        cout<<op<<endl;
        return;
    }
    
    get_subset(ip.substr(1),op);
    
    op=op+ip[0];
    get_subset(ip.substr(1),op);
}
 


int main() {
	string str;
	cin>>str;
	string op="";
	get_subset(str,op);
	
	return 0;
}
