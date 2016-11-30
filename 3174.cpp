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

	int x;
	int k = 0;

	while(ss >> x){
		if(x == 0) v.push_back(x);
		else{
			v.insert(v.begin() + k,x);
			k++;	
		} 
	}

	for(int i = 0; i < v.size(); ++i){
		cout << v[i] <<  " ";
	}

	cout << endl;


	return 0;
}