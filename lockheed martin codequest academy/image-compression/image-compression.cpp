#include <iostream>
#include <string>
#include <cmath>
#include <cstdlib>
#include<vector>
#include<algorithm>
using namespace std;

int main(){
	int testCases;
	cin >> testCases;
	string dummy;
	getline(cin, dummy);
	for (int testcase = 0; testcase < testCases; testcase++) {
		int nums;
		float min, max;
		cin >> nums;
		//cout << "\n";
		vector<float> vals;
		for (int i = 0; i < nums; i++) {
			float philly;
			cin >> philly;
			vals.push_back(philly);
			
		}
		std::sort(vals.begin(), vals.end());
		min = vals[0];
		max = vals[vals.size()-1];
		for (int i = 0; i < vals.size(); i++) {
			vals[i] = (vals[i] - min)/(max-min)*255;
			cout << int(floor(vals[i]+0.5)) << "\n";
			//cout << int(floor(vals.at(i)+0.5)) << endl;
		}
	}
}