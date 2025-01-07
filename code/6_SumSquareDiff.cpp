#include <iostream>


int solution(int n){
	/*
	 *sum of first n natural number is
	 *(n*(n+1)/2)
	 *
	 *sum of square of first n natural number
	 *(n*(n+1)*(2n+1))/6
	 *
	 */
	int sumOfN = (n * (n+1))/2;
	std::cout<<"sum of N "<<sumOfN<<std::endl;
	int sqrOfSumOfN = sumOfN*sumOfN;
	std::cout<<"square of sum of N "<<sqrOfSumOfN<<std::endl;
	int sumOfSqrOfN = (n*(n+1)*(2*n+1))/6;
	std::cout<<"sum of sqr of N "<<sumOfSqrOfN<<std::endl;
	return sqrOfSumOfN-sumOfSqrOfN;
}


int main(){
	int n = 100;
	int ans = solution(n);

	std::cout<<ans;
}
