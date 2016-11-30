#include <iostream>
#include <algorithm>
using namespace std;

int main(){


	freopen("input.txt","r",stdin);

	int size;
	cin >> size;

	int n;
	cin >> n;
	int a[n];

	for(int i = 0; i < n ;++i){
		cin >> a[i];
	}

	sort(a,a+n);
	
	int cnt = 0;
	int last = -1;

	for(int i = 0; i < n; ++i){
		if(last == -1){
			if(size <= a[i]){
				last = a[i];
				cnt++;
			}
		}else if(last + 3<= a[i]){
			last = a[i];
			cnt++;
		}
	}


	cout << cnt << endl;



	return 0;
}