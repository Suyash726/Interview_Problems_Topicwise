#include <iostream>
#include<bits/stdc++.h>
using namespace std;
 
void solve(stack<char> &stk,int k){
    
    if (stk.empty())
     return;
    
    // Base condition 
    if(k ==1)
    {
        stk.pop();
    }
    // Recursive step
    int temp = stk.top();
    stk.pop();
    solve(stk,k-1);
    stk.push(temp);
    return;
}


int main() {
	
	stack<char> stk;
	
	stk.push('5');
    stk.push('6');
    stk.push('7');
    int k = (stk.size()/2)+1;
    solve(stk, k);
	
	while(stk.size()!=0)
	{
	    cout<<stk.top()<<endl;
	    stk.pop();
	}
	return 0;
}
