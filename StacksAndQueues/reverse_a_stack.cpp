#include <iostream>
#include<bits/stdc++.h>
using namespace std;
 
void insert(stack<int> &stk,int temp)
{
    if(stk.size()==0)
    {
        stk.push(temp);
        return;
    }
    int t = stk.top();
    stk.pop();
    insert(stk,temp);
    stk.push(t);
    return;
}
 
void reverse(stack<int> &stk){
    if(stk.size()==1)
    {
        return;
    }
    
    int temp = stk.top();
    stk.pop();
    reverse(stk);
    insert(stk,temp);
    
    return;
        
}


int main() {
	
	stack<int> stk;
	
	
	stk.push(5);
    stk.push(6);
    stk.push(7);
    reverse(stk);
	
	while(stk.size()!=0)
	{
	    cout<<stk.top()<<endl;
	    stk.pop();
	}
	
	return 0;
}
