//switch
#include<bits/stdc++.h>
using namespace std;
int main(){
	int a,b;
	cout<<"Enter the value of  A:";
	cin>>a;
	
	cout<<"Enter thre value of B:";;
	cin>>b;
	
	char opration;
	cout<<"Enter the Opration what you Parform:";
	cin>> opration;
	switch(opration){
		
		case '+': cout<<(a+b)<<endl;
		break;
		case '-': cout<<(a-b)<<endl;
		break;
		case '*': cout<<(a*b)<<endl;
		break;
		case '/': cout<<(a/b)<<endl;
		break;
		case '%': cout<<(a%b)<<endl;
		break;
		default: cout<<"Pleace parform some opration";
	}
	return 0;
}
