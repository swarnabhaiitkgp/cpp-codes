#ifndef _GLIBCXX_NO_ASSERT
#include <cassert>
#endif
#include <cctype>
#include <cerrno>
#include <cfloat>
#include <ciso646>
#include <climits>
#include <clocale>
#include <cmath>
#include <csetjmp>
#include <csignal>
#include <cstdarg>
#include <cstddef>
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <ctime>
 
#if __cplusplus >= 201103L
#include <ccomplex>
#include <cfenv>
#include <cinttypes>
#include <cstdalign>
#include <cstdbool>
#include <cstdint>
#include <ctgmath>
#include <cwchar>
#include <cwctype>
#endif
 
// C++
#include <algorithm>
#include <bitset>
#include <complex>
#include <deque>
#include <exception>
#include <fstream>
#include <functional>
#include <iomanip>
#include <ios>
#include <iosfwd>
#include <iostream>
#include <istream>
#include <iterator>
#include <limits>
#include <list>
#include <locale>
#include <map>
#include <memory>
#include <new>
#include <numeric>
#include <ostream>
#include <queue>
#include <set>
#include <sstream>
#include <stack>
#include <stdexcept>
#include <streambuf>
#include <string>
#include <typeinfo>
#include <utility>
#include <valarray>
#include <vector>
 
#if __cplusplus >= 201103L
#include <array>
#include <atomic>
#include <chrono>
#include <condition_variable>
#include <forward_list>
#include <future>
#include <initializer_list>
#include <mutex>
#include <random>
#include <ratio>
#include <regex>
#include <scoped_allocator>
#include <system_error>
#include <thread>
#include <tuple>
#include <typeindex>
#include <type_traits>
#include <unordered_map>
#include <unordered_set>
#endif
 
using namespace std;
 
 
#define boost ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0)
#define pb push_back
#define MP make_pair
#define F first
#define S second
#define min(a,b) (((a)<(b))?(a):(b))
#define max(a,b) (((a)>(b))?(a):(b))
#define PII pair<ll,ll> 


 
typedef long long ll;

ll MOD = 1e9+7;
#define boost ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0)
using namespace std;
typedef long long ll; 

using namespace std;

ll dp[5001][5001];


int main(){
	boost;
	ll T,N,M,i,j,k,L,l,m,n;
	string A,B;
	cin >> T;
	while(T--){
		memset(dp,1e18,sizeof(dp));
		cin >> N >> M;
		cin >> A >> B;
		dp[0][0] = 0;
		dp[1][0] = 1;
		dp[0][1] = 1;
		for(i = 2 ; i <= A.length() ; i++){
			dp[i][0] = (A[i-1]==A[i-2])?dp[i-1][0]: (1+dp[i-1][0]);
		}

		for(i = 2 ; i <= B.length() ; i++){
			dp[0][i] = (B[i-1]==B[i-2])?dp[0][i-1]:(1+dp[0][i-1]);
		}


		dp[1][1] = (A[i-1] == B[i-1]) ? 1 : 2;
		for(i = 2 ; i <= B.length() ; i++){
			dp[1][i] = min((A[0]==B[i-1]?dp[1][i-1]:(1+dp[1][i-1])),(B[i-1]==B[i-2]?dp[1][i-1]:(1+dp[1][i-1])));
		}

		for(i = 2 ; i <= A.length() ; i++){
			dp[i][1] = min((A[i-1]==B[0]?dp[i-1][1]:(1+dp[i-1][1])),(A[i-1]==A[i-2]?dp[i-1][1]:(1+dp[i-1][1])));
		}

		for(i = 2 ; i <= A.length() ; i++){
			for(j = 2 ; j <= B.length() ; j++){
				dp[i][j] = min((A[i-1]==A[i-2]?dp[i-1][j]:(1+dp[i-1][j])),(A[i-1]==B[i-1]?dp[i-1][j]:(1+dp[i-1][j])));
				dp[i][j] = min((B[i-1]==B[i-2]?dp[i][j-1]:(1+dp[i][j-1])),(B[i-1]==A[i-1]?dp[i][j-1]:(1+dp[i][j-1])));
			}
		}

		cout << dp[A.length()][B.length()] << endl;
	}
}