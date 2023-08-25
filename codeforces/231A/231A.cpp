#include<bits/stdc++.h>
using namespace std;

int main(){
	int T;
	cin>>T;
	int total = 0;
	for(int i = 0; i<T; i++)
	{
		int a, b, c;
		cin>>a>>b>>c;
		if(a+b+c>=2)
		{
			total+=1;
		}
	}
	cout<<total;
}