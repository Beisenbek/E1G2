#include <iostream>
#include <algorithm>
#include <sstream>
#include <vector>

using namespace std;

int main(){


	freopen("input.txt","r",stdin);

	stringstream ss;
	vector<int> v;
	string s;
	getline(cin,s);
	ss << s;

	int x,cnt = 0;

	while(ss >> x){

		bool f = false;
		
		for(int i = 0; i < v.size(); ++i){
			if(v[i] == x){
				f = true;
			}
		}

		if(!f){
			cnt++;
		}

		v.push_back(x);
	}

	cout << cnt << endl;


	return 0;
}