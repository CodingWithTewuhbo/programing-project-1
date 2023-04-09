#include<iostream>
using namespace std; 
int main(){
	for(int i=8;i>=1;i--){
	for(int j=1;j<=i;j++)	{
		if(i==8&&i==7&&i==6){
		for(int k=1;k<=8;k++)
			cout<<'*'<<" ";
		}
		else
		cout<<'*'<<" ";
	}
	if(i==7){
		for(int m=1;m<=1;m++)
		cout<<"  ";
	} else if(i==8)
	goto b;
	else
	{
	for(int n=8;n>=i;n--)
	cout<<"    ";}
	b:
	for(int p=1;p<=i+1;p++)
	cout<<"*"<<" ";
	cout<<endl;
		
	}
	for(int ii=1;ii<=9;ii++){
		if(ii==7&&ii==8&&ii==9){
			for(int p1=1;p1<=8;p1++)
			cout<<"*"<<" ";
		}else
		for(int jj=1;jj<=ii+1;jj++){
			cout<<"*"<<" ";
		}
		for(int kk=1;kk<=9-ii;kk++)
		cout<<"    ";
		for(int mm=1;mm<=ii+1;mm++)
		cout<<"*"<<" ";
		cout<<endl;
	}
	return 0;
}

