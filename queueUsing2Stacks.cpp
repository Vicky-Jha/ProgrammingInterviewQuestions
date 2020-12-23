#include <bits/stdc++.h>
#define lli long long int
using namespace std;

class Queue
{
	public:
	stack<int> s1,s2;
	void enqueue(int x)
	{
		if(s1.empty()){
		s1.push(x);
		return;
		}
		
		while(!s1.empty())
		{
		s2.push(s1.top());
		s1.pop();	
		}
		s1.push(x);
		while(!s2.empty())
		{
		s1.push(s2.top());
		s2.pop();
		}
	
	}
	
	int dequeue()
	{
		int item = s1.top();
		s1.pop();
		return item;
	}
	
};

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    
	Queue q;
	q.enqueue(1);
	q.enqueue(2);
	q.enqueue(3);
	
	cout<<q.dequeue()<<"\n";
	cout<<q.dequeue()<<"\n";
	cout<<q.dequeue()<<"\n";

    return 0;
}
