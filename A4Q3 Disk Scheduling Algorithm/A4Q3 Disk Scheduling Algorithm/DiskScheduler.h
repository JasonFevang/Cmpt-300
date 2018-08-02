#pragma once
#include <vector>

class DiskScheduler {
public:
	/*FCFS algorithm implementation
	returns total head travel distance in cylinders for the input cylinder order using
	first-come-first-serve disk-scheduling algorithm */
	int FCFS();

	/*SSTF algorithm implementation
	returns total head travel distance in cylinders for the input cylinder order using
	shortest-time-first disk-scheduling algorithm */
	int SSTF(std::vector<int> input);

	/*SCAN algorithm implementation
	returns total head travel distance in cylinders for the input cylinder order using
	SCAN disk-scheduling algorithm */
	int SCAN(std::vector<int> input);

	/*LOOK algorithm implementation
	returns total head travel distance in cylinders for the input cylinder order using
	LOOK disk-scheduling algorithm */
	int LOOK(std::vector<int> input);

	/*C-SCAN algorithm implementation
	returns total head travel distance in cylinders for the input cylinder order using
	C-SCAN disk-scheduling algorithm */
	int CSCAN(std::vector<int> input);

	/*C-LOOK algorithm implementation
	returns total head travel distance in cylinders for the input cylinder order using
	C-LOOK disk-scheduling algorithm */
	int CLOOK(std::vector<int> input);
};