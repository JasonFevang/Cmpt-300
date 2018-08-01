#include <iostream>
#include <vector>

using namespace std;

enum replacementAlg { LRU, FIFO, Optimal };

/*Set all frame values to -1
	Precondition: Memory initialized for *frames */
void initializeFrames(int *frames, int numFrames);

/*Prints frames to console
	Precondition: Memory initialized for *frames */
void printFrames(int *frames, int numFrames);

int LRUSwapping(vector<int> pageNumbers, int numFrames);

int FIFOSwapping(vector<int> pageNumbers, int numFrames);

int OptimalSwapping(vector<int> pageNumbers, int numFrames);

int main() {
	vector<int> pageNumbers = { 1, 2, 3 };
	int numFrames = 3;
	replacementAlg alg = FIFO;//LRU, FIFO, Optimal

	int pageHits = 0;
	switch (alg) {
	case LRU:
		pageHits = LRUSwapping(pageNumbers, numFrames);
		break;
	case FIFO:
		pageHits = FIFOSwapping(pageNumbers, numFrames);
		break;
	case Optimal:
		pageHits = OptimalSwapping(pageNumbers, numFrames);
		break;
	}

	cout << "Page Hits: " << pageHits;


	//initializeFrames(frames, numFrames);
	//printFrames(frames, numFrames);

	//for (int i = 0; i < numStringLen; i++) {
	//	for (int f = 0; f < numFrames; f++) {
	//		if (frames[f] == numString[i])//page hit, page is already here
	//			break;
	//		else if (frames[f] == -1) {//frame is empty, fill it with a page
	//			frames[f] = numString[i];
	//			break;
	//		}
	//		else {
	//			}
	//			numPageMisses++;
	//		}
	//	}
	//	printFrames(frames, numFrames);
	//}

}

/*Set all frame values to -1
	Precondition: Memory initialized for *frames */
void initializeFrames(int *frames, int numFrames) {
	for (int i = 0; i < numFrames; i++)
		frames[i] = -1;
}

/*Prints frames to console
	Precondition: Memory initialized for *frames */
void printFrames(int *frames, int numFrames){
	for (int i = 0; i < numFrames; i++) {
		cout << frames[i] << " ";
	}
	cout << "\n";
}

int LRUSwapping(vector<int> pageNumbers, int numFrames) {
	return 0;
}

int FIFOSwapping(vector<int> pageNumbers, int numFrames) {
	int lastSwappedPage = 0;
	for (auto& value : pageNumbers) {
				
	}

	
	return 0;
}

int OptimalSwapping(vector<int> pageNumbers, int numFrames) {
	return 0;
}
