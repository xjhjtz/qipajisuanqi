#include<bits/stdc++.h>
using namespace std;
int main()
{
	int cnt=0; 
	double a,b;
	char c;
	cout<<"不欢迎使用本 寄 算 器！by xjhjtz0320"<<endl;
	cout<<"直接输入表达式即可,仅支持四则运算(+-*/)，例如3+2，5-2，8*8，9/3这样的式子" <<endl; 
	for(;;)
	{ 
		cin>>a>>c>>b;
		cnt++;
		if(c=='+'&&a==1&&b==1) cout<<"我寻思1+1等于3"<<endl;
			else if(c=='+') cout<<"经过一通乱算后，我得出"<<a<<c<<b<<"等于"<<a-b<<endl; 
			else if(c=='-') cout<<a<<c<<b<<"指定等于"<<(a*b)/77;//77为‘-’的ascll码 
			else if(c=='*') cout<<"这个"<<a<<c<<b<<"等于"<<(a/2+8)*5<<endl;
			else if(c=='/') {
				if(b==0) cout<<"ber这能除零吗"<<endl;
				else cout<<a<<c<<b<<"呀，我说他等于"<<((a*a)/b)+b<<"你信吗(心虚)"<<endl;
			}
		if(cnt==10) cout<<"哥们你是真闲啊,能坚持用10次"<<endl;
		if(cnt==20) cout<<"布什格门,这都能用20次，那可太有生活了"<<endl; 
	}
} 
