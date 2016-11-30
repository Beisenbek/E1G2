#include <iostream>
#include <algorithm>
#include <sstream>
#include <vector>

using namespace std;

int x[8],y[8];


int main(){


	freopen("input.txt","r",stdin);

	bool ok = false;


	for(int i = 0; i < 8; ++i){
		cin >> x[i] >> y[i];
	}

	for(int i = 0; i < 7; ++i){
		for(int j = i + 1; j < 8; ++j){
			if((abs(x[i]-x[j]) == abs(y[i]-y[j]))|| (x[i] == x[j] || y[i] == y[j])){
				ok = true;
				break;
			}
		}
		if(ok) break;
	}


	if(ok) cout << "YES";
	else cout << "NO";


	return 0;
}