#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>> t;
	while(t-->0){
	       int x,y,z,a=1;
	    scanf("%d %d %d",&x,&y,&z);
	    if(x==y && x>=z){
	        std::cout << "YES"<< std::endl;
	        std::cout << x<<" "<<z<<" 1\n";}
        else if(y==z&&y>=x)
            std::cout << "YES\n"<<x<<" "<<y<<" 1\n";
	    else if(z==x&&z>=y)
	        std::cout << "YES\n"<<y<<" "<<x<<" 1\n" ;
	    else  std::cout << "NO" << std::endl;
	}
	return 0;
}