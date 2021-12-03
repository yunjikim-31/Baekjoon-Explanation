#include <iostream>
const int APPLE_PRIZE = 7; 
const int PEAR_PRIZE = 13; 
using namespace std;

int main() 
{ 
	ios_base::sync_with_stdio(0); 
	cin.tie(0); 
	
	int A, P; cin >> A >> P; 
	
	int apple = A * APPLE_PRIZE; 
	int pear = P * PEAR_PRIZE;
	
	if (apple > pear)
	{ 
		cout << "Axel\n"; 
	} 
	
	else if (apple == pear)
	{
		cout << "lika\n";
	} 
	else 
	{ 
		cout << "Petra\n";
	} 
	return 0;
}

