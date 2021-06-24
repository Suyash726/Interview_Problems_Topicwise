#include <iostream>
#include<bits/stdc++.h>
using namespace std;
 
void per_case(string ip,string& op)
{
    if(ip.size()==0)
    {
        cout<<op<<endl;
        return;
    }
    
    string op1 = op;
    string op2 = op;
    
    op1.push_back(ip[0]);
    
    per_case(ip.substr(1),op1);
    op2.push_back(ip[0]-32);
    // op=op+putchar(toupper(ip[0]));
    per_case(ip.substr(1),op2);
}
 


int main() {
	string str;
	cin>>str;
	string op="";
	per_case(str,op);
	
	return 0;
}
