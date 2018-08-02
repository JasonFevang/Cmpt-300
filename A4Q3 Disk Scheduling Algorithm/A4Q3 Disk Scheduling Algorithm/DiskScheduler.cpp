#include "DiskScheduler.h"
#include <algorithm> //sort

int DiskScheduler::FCFS(std::vector<int> input) {
	int totalDistance = 0;
	for (auto it = input.begin()+1; it < input.end(); it++) {
		totalDistance += abs(*it - *(it - 1));
	}
	
	return totalDistance;
}

int DiskScheduler::SSTF(std::vector<int> input) {
	int startCylinder = input.front();
	int totalDistance = 0;
	int downSize, upSize;//distance to next closest cylinder above and below

	//sort input numbers from smallest to largest
	std::sort(input.begin(), input.end());

	//set iterator to the starting number
	int i = 0;
	while (startCylinder != input.at(i))
		++i;

	while (input.size() > 1) {
		if (i == 0)
			downSize = INT_MAX;
		else
			downSize = abs(input.at(i-1) - input.at(i));

		if (i == input.size()-1)
			upSize = INT_MAX;
		else
			upSize = abs(input.at(i + 1) - input.at(i));


		if (downSize < upSize) {
			totalDistance += downSize;
			i--;
			input.erase(input.begin() + i + 1);//remove the recently accessed cylinder
		}
		else {
			totalDistance += upSize;
			input.erase(input.begin() + i);//remove the recently accessed cylinder
		}
	}

	return totalDistance;
}

int DiskScheduler::SCAN(std::vector<int> input) {
	//code here
	return 0;
}

int DiskScheduler::LOOK(std::vector<int> input) {
	//code here
	return 0;
}

int DiskScheduler::CSCAN(std::vector<int> input) {
	//code here
	return 0;
}

int DiskScheduler::CLOOK(std::vector<int> input) {
	//code here
	return 0;
}