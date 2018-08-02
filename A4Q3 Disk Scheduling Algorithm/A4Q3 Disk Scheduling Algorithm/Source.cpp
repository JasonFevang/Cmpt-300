#include <iostream>
#include <vector>
#include "DiskScheduler.h"
using namespace std;

int main() {
	vector<int> input = { 1, 2, 3 };

	DiskScheduler DS;
	cout << "Total head travel distances\n";
	cout << "FCFS: " << DS.FCFS() << "\n";
	cout << "SSTF: " << DS.SSTF(input) << "\n";
	cout << "SCAN: " << DS.SCAN(input) << "\n";
	cout << "LOOK: " << DS.LOOK(input) << "\n";
	cout << "C-SCAN: " << DS.CSCAN(input) << "\n";
	cout << "C-LOOK: " << DS.CLOOK(input) << "\n";

	return 0;
}
