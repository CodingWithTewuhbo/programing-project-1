#include <iostream>
using namespace std;
int main() {
int i,j,k,b;
for(i=1;i<=10;i++)
{


  if((i==1)||(i==2)||(i==3)){
k=1;
do{
cout<<"*"<<" ";
k++;}while(k<=8);
}
else
for(j=1;j<=10-i+1;j++){
cout<<"*"<<" ";
}
if(i==2)
cout<<"  ";
for(int n=1;n<=2*(i-2);n++){
cout<<"  ";
b=n;}
for(int m=1;m<=11-i;m++){
cout<<"*"<<" ";
}
cout<<endl;


}
for(int z=1;z<=9;z++){
	if((z==8)||(z==9)){
	int a=1;
	do{
		cout<<"*"<<" ";
		a++;
	}while(a<=8);}
	 else
	for(int x=1;x<=z+1;x++){
		cout<<"*"<<" ";
	}
	for(int c=2*(9-(z+1));c>=1;c--){
		cout<<"  ";
	
	}
		if(z==8)
		cout<<"  ";
	for(int d=1;d<=z+1;d++){
		cout<<"*"<<" ";
		
	}
cout<<endl;	
}

    
   return 0;}
