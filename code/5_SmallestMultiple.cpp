#include <iostream>
#include <vector>
#include "util/prime.h"

using namespace std;

class SmallestMultiple{
	public:
		int solution(vector<int> prime, int N){
			int ans = 1;
			for(size_t i=0;i<prime.size();i++){
				int temp = prime[i];
				int prev_temp = temp;
				while(temp<=N){
					prev_temp = temp;
					temp = temp*prime[i];
				}
				ans = ans*prev_temp;
			}
			return ans;
		}
};

int main(){
	SmallestMultiple sol;
	int N=20;
	vector<int> prime;
	for(int i=2;i<=N;i++){
		if(isPrime(i)){
			prime.push_back(i);
		}
	}
	cout<<"Ans is "<<sol.solution(prime, N)<<endl;
	return 0;
}
