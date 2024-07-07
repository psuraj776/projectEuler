#include <iostream>

using namespace std;

class LargestPalindromeProduct{
	public:
		int solu(int data){
			if(isPalin(data)){
				for(int i=100;i<=999;i++){
					if(data%i == 0 && (data/i >=100 && data/i <= 999)){
						return i;
					}
				}
			}
			return 0;
		}
		int isPalin(int val){
			int val1 = val;
			int res = 0;
			while(val1 != 0){
				int mod = val1%10;
				res = res*10+mod;
				val1 = val1/10;
			}
			return res == val;
		}
};

int main(){
	LargestPalindromeProduct LPP;
	
	for(int i=998001;i>=10000;i--){
		int ans = LPP.solu(i);
		if(ans){
			cout<<ans<<" "<<i/ans<<" "<<i<<endl;
			break;
		}
	}
}
