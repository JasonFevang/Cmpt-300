#include <iostream>
#include <vector>

using namespace std;

/*FCFS algorithm implementation
returns total head travel distance in cylinders for the input cylinder order using
first-come-first-serve disk-scheduling algorithm */
int FCFS(vector<int> input) {
	//code here
	return 0;
}
/*SSTF algorithm implementation
returns total head travel distance in cylinders for the input cylinder order using
shortest-time-first disk-scheduling algorithm */
int SSTF(vector<int> input) {
	//code here
	return 0;
}
/*SCAN algorithm implementation
returns total head travel distance in cylinders for the input cylinder order using
SCAN disk-scheduling algorithm */
int SCAN(vector<int> input) {
	//code here
	return 0;
}
/*LOOK algorithm implementation
returns total head travel distance in cylinders for the input cylinder order using
LOOK disk-scheduling algorithm */
int LOOK(vector<int> input) {
	//code here
	return 0;
}
/*C-SCAN algorithm implementation
returns total head travel distance in cylinders for the input cylinder order using
C-SCAN disk-scheduling algorithm */
int CSCAN(vector<int> input) {
	//code here
	return 0;
}
/*C-LOOK algorithm implementation
returns total head travel distance in cylinders for the input cylinder order using
C-LOOK disk-scheduling algorithm */
int CLOOK(vector<int> input) {
	//code here
	return 0;
}

int main() {
	vector<int> input = { 1, 2, 3 };

	cout << "Total head travel distances\n";
	cout << "FCFS: " << FCFS(input) << "\n";
	cout << "SSTF: " << SSTF(input) << "\n";
	cout << "SCAN: " << SCAN(input) << "\n";
	cout << "LOOK: " << LOOK(input) << "\n";
	cout << "C-SCAN: " << CSCAN(input) << "\n";
	cout << "C-LOOK: " << CLOOK(input) << "\n";

	return 0;
}
