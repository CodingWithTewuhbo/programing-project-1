#include <iostream>
using namespace std;
int main() {
char x,y;
for(char i='H';i>='A';i--){
for(char j='A';j<=i;j++){
cout<<j<<" ";
 x=j;}

for(char k=x-1;k>='A';k--){
cout<<k<<" ";}
cout<<endl;
for(char l='H';l>=i;l--)
cout<<"  ";
}//second code
cout<<"\b\b\b\b";

for(char i='A';i<='G';i++){
for(char j='A';j<=i+1;j++){
cout<<j<<" ";
  y=j;}
for(char k=y-1;k>='A';k--)
cout<<k<<" ";
cout<<endl;
for(char m='E';m>=i;m--)
cout<<"  ";

}
    
    return 0;}
