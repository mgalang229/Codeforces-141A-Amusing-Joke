#include <bits/stdc++.h>

using namespace std;

int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);
	string g, h, p;
	cin >> g >> h >> p;
	g += h;
	sort(g.begin(), g.end());
	sort(p.begin(), p.end());
	if(g == p){
		cout << "YES";
	} else{
		cout << "NO";
	}
	cout << "\n";
	return 0;
}
