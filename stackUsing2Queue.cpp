#include <bits/stdc++.h>
#define lli long long int
using namespace std;
struct Stack
{
	queue<int> q1,q2;

	void push(int x)
	{
		if(q1.empty())
		q1.push(x);
		else
		{
			q2.push(x);
			while(!q1.empty())
			{
				q2.push(q1.front());
				q1.pop();
			}
			while(!q2.empty())
			{
				q1.push(q2.front());
				q2.pop();
			}
		}
	}
	void pop()
	{
	 q1.pop();
	}
	int top()
	{
		return q1.front();
	}
	
};
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    Stack s;
    s.push(1);
    s.push(2);
    s.push(3);
    s.push(4);
    
    s.pop();
    cout<<s.top()<<"\n";
    return 0;
}
