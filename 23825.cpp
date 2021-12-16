#include<iostream>
using namespace std;
int main() {
	int N = 0, M = 0;
	cin >> N >> M;

	int X = 0;
	
	X = (N < M) ? N : M;

	cout << X / 2;
}