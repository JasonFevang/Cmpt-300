#include <iostream>
#include <vector>
#include "DiskScheduler.h"
using namespace std;

int main() {
	DiskScheduler DS;
	std::vector<int> input = { 5, 50, 45, 82, 7, 18, 1, 0, 99, 56, 92, 7 };
	int result = DS.SSTF(input);

/*
	cout << "Total head travel distances\n";
	cout << "FCFS: " << DS.FCFS(input) << "\n";
	cout << "SSTF: " << DS.SSTF(input) << "\n";
	cout << "SCAN: " << DS.SCAN(input) << "\n";
	cout << "LOOK: " << DS.LOOK(input) << "\n";
	cout << "C-SCAN: " << DS.CSCAN(input) << "\n";
	cout << "C-LOOK: " << DS.CLOOK(input) << "\n";
*/
	return 0;
}
