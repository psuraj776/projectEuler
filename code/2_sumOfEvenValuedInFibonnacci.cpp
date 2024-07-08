#include <iostream>

using namespace std;


int ans(int limit, int fib1, int fib2){

	int res = 0;
	while(fib1 < limit && fib2 < limit){
		if(fib2%2==0){
			res+=fib2;
		}

		int temp=fib1;
		fib1=fib2;
		fib2+=temp;
	}

	return res; 
}

int main(){
	int limit = 4000000;

	int fib1 = 1;
	int fib2 = 2;
	int res = 0;

	res = ans(limit, fib1, fib2);

	cout<<res<<endl;

}
