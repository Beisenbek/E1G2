#include <iostream>
#include <algorithm>
#include <sstream>
#include <set>


using namespace std;

int main(){


	freopen("input.txt","r",stdin);

	string s,t;
	getline(cin,s);
	int n = atoi(s.c_str());

	set<int> a,b;
	stringstream ss,ss2;
	int x;

	getline(cin,s);
	ss << s;
	while(ss >> x){
		a.insert(x);
	}


	getline(cin,t);
	ss2 << t;
	while(ss2 >> x){
		b.insert(x);
	}

	set<int>::iterator it;

	for(it = a.begin(); it != a.end(); ++it){
		if(b.find(*it) != b.end()){
			cout << *it << " "; 
		}
	}

	cout << endl;

	for(int i = 1; i <=n; ++i){
		if(b.find(i) == b.end() && a.find(i) == a.end()){
			cout << i << " "; 
		}
	}

	cout << endl;

	return 0;
}