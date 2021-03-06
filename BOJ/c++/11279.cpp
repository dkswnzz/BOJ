﻿//  Copyright © 2021 안주형. All rights reserved.
//  
//  https://www.acmicpc.net/problem/11279
//  BOJ11279 최대 힙
#include <iostream>
#include <queue>

using namespace std;

int main() {
	ios_base::sync_with_stdio;
	cin.tie(0);
	priority_queue<int> pq;
	int T,number;
	cin >> T;
	while (T--) {
		cin >> number;
		if (number == 0) {
			if (!pq.size()) {
				cout << 0 << "\n";
			}
			else {
				cout << pq.top() << "\n";
				pq.pop();
			}
			}
		else pq.push(number);
	}
	
}
	