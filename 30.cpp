#include<iostream>
using namespace std;
int main(){ 
int i=1;
while(i<=10){ 
int z=i;
while (z<=10){
	cout<<z<<" ";
	z++;
}

cout<<"\n";
int j=1;
while(j<=i){
	cout<<" ";
	j++;
}
i++;
	
}
int a=1;
while(a<=10){ 
int b=a;
while(b<=10){
	cout<<" ";
	b++;
	
}
int c=1;
while(c<=a) {
	cout<<c<<" ";
	c++;
}
cout<<"\n";
a++;
}
   return 0;
   }
