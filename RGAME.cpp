#include <stdio.h>
 
typedef long long ll;
 
const ll MOD = 1E9 + 7;
 
int main(){
	int cas;
	scanf("%d", &cas);
	for (int casi = 1; casi <= cas; ++casi){
		int n;
		ll sum = 0, e = 1, ans = 0;
		scanf("%d%lld", &n, &sum);
		for (int t, i = 1; i <= n; ++i){
			scanf("%d", &t);
			ans = (ans * 2 + t * sum) % MOD;
			
			sum = (sum + t * e) % MOD;
			e = e * 2 % MOD;
		}
		printf("%lld\n", ans * 2 % MOD);
	}
	return 0;
}
 
