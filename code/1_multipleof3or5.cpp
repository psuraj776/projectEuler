#include <iostream>
using namespace std;

//to find sum of all multiple of either 3 or 5 under 1000
int getSum(int n, int d, int a)
{
	int temp_ans = (2*a+(n-1)*d)*n;
	
	return temp_ans/2;

}

int main() {
	
	int range = 1000;
	int x1 = 3;
	int x2 = 5;
	int x3  = x1*x2;
	
	int n = (range-1)/x1;
	int x1_sum = getSum(n, x1, x1);
	//cout<<n<<" "<<x1_sum<<endl;
	
	n = (range-1)/x2;
	int x2_sum = getSum(n, x2, x2);
	//cout<<n<<" "<<x2_sum<<endl;
	
	n = (range-1)/x3;
	int x3_sum = getSum(n, x3, x3);
	//cout<<n<<" "<<x3_sum<<endl;
	
	cout<<(x1_sum+x2_sum-x3_sum)<<endl;
}
