#include <iostream>
#include <chrono>
using namespace std;

// Forward declarations
int LinearSearch(const int list[], int length, int value);
int BinarySearch(const int list[], int length, int value);


// Timer class
class Timer
{
public:
	Timer() : m_start (clock::now()) {}
	void reset() { m_start = clock::now(); }
	double elapsed() const {
		return chrono::duration_cast<second>
			(clock::now() - m_start).count();
	}

private:
	typedef chrono::high_resolution_clock clock;
	typedef chrono::duration<double, ratio<1> > second;
	chrono::time_point<clock> m_start;
};


// Declared global because it is so huge
const int NELEM = 20000000;
int list[NELEM];

int main()
{
	int found;
	int N;
	double linear;
	double binary;
	Timer timer;

	// Enter N
	cout << "Length of list: ";
	cin >> N;
	if (N > NELEM || N <= 0)
	{
		cerr << "Enter number from 1 to " << NELEM << endl;
		exit(1);
	}

	// Initialize
	for (int i = 0; i < N; i++)
		list[i] = i;


	// Linear search
	timer.reset();
	found = LinearSearch(list, N, N);
	linear = timer.elapsed();

	// Binary search
	timer.reset();
	found = BinarySearch(list, N, N);
	binary = timer.elapsed();

	// Ratio
	cout << "Linear Search: " << fixed << 1000*linear << " ms" << endl;
	cout << "Binary Search: " << fixed << 1000*binary << " ms" << endl;
	cout << "Linear Search time/Binary Search time = " << fixed << linear/binary << endl;

	return 0;
}


// Linear Search for "value" in "list", an array of "length" ints
// Params:
//    list - array of ints
//    length - number of elements in list
//    value - value to search for
// Returns: index where value is stored, or -1 of not found
int LinearSearch(const int list[], int length, int value)
{
	for (int i = 0; i < length; i++)
	{
		if (value == list[i])
			return i;
	}
	return -1;
}

// Binary Search for "value" in "list", an array of "length" ints
// Params:
//    list - SORTED array of ints
//    length - number of elements in list
//    value - value to search for
// Returns: index where value is stored, or -1 of not found
int BinarySearch(const int list[], int length, int value)
{
	int first = 0;
	int last = length - 1;

	while (first <= last)
	{
		int mid = (first + last) / 2;

		if (value < list[mid])
			last = mid - 1;
		else if (value > list[mid])
			first = mid + 1;
		else
			return mid;
	}
	return -1;
}
