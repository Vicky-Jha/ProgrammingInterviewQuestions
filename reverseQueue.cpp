#include <bits/stdc++.h>
#define lli long long int
using namespace std;

void reverseQueue(queue<int>& q1)
{
	if(q1.empty())
	return;
		int x = q1.front();
		q1.pop();
		reverseQueue(q1);
		q1.push(x);
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

	queue<int> q1;
	
	cout<<"Enter number of elements\n";
	int n,ele;
	cin>>n;
	for(int i=0 ; i<n ; ++i)
	{
		cin>>ele;
		q1.push(ele);
	}
	reverseQueue(q1);
	for(int i=0 ; i<n ; ++i){
	cout<<q1.front()<<" ";
	q1.pop();
	}
    return 0;
}
