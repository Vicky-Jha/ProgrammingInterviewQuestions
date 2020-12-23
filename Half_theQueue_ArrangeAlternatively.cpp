//Q Given a queue of Integers, 
//rearrange the elements by interleaving the fisrt half of the list with the second half of the list





#include <bits/stdc++.h>
#define lli long long int
using namespace std;

void half(queue<int> &q)
{
	if(q.empty())
	return;
	int x,y;
	if(q.size() <= 5)
	{
		y = q.front();
		q.pop();
		half(q);
	}
	else
	{
		x = q.front();
		q.pop();
		half(q);
	}
	q.push(y);
	q.push(x);
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
	queue<int> q;
	int ele;
	for(int i=1; i<=10 ; ++i){
	cin>>ele;
	q.push(ele);
	}
	half(q);
	for(int i=1; i<=10 ; ++i)
	{
		cout<<q.front()<<" ";
		q.pop();
	}
	

    return 0;
}
