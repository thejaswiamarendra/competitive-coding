#include<bits/stdc++.h>
using namespace std;

bool watermelon(int weight)
{
	return weight<=2?false:weight%2==0;
}

int main(){
	int n;
	cin>>n;
	bool result = watermelon(n);
	if(result) cout<<"YES";
	else cout<<"NO";
}