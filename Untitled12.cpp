#include <iostream>
using namespace std;
int sum(int n){
	int add=0;
	if(n==1||n==0){

	return n;	
	}
	else{
	
	return sum(n-1)+sum(n-2);	
	}	
}
int main(){
 int k=4;
cout<<"ghfjjdfgh "<<sum(k);
return 0;
}
