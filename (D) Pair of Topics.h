#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>> t;
	long long int a[t],b[t],c[t],ans=0;
    for(int i=0;i<t;i++)
        cin>>a[i];
    for(int i=0;i<t;i++)
        cin>>b[i];
    for(int i=0;i<t;i++)
        c[i]=b[i]-a[i];
    sort(c,c+t);    
    for(int i=0;i<t;i++){
        auto it=lower_bound(c+i+1,c+t,-c[i]);
       long long int id=it-c;
        ans+=id-(i+1);
    }
    cout<<ans<<"\n";
	return 0;
}
