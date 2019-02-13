#include <iostream>
using std::cout;
using std::cin;
using std::endl;
using std::istream;
using std::ostream;

const int MAX=3;

void ReadMatrix(double[][MAX], istream&);
void WriteMatrix(double[][MAX], ostream&);
double SumAll(double[][MAX]);

int main(int argc, char* argv[]){
	double matrix[MAX][MAX];
	ReadMatrix(matrix, cin);
	cout << endl;
	WriteMatrix(matrix, cout);
	cout << SumAll(matrix) << endl;
	return 0;
}
void ReadMatrix(double data[][MAX], istream& input){
	for (int i=0; i<MAX; i++)
		for (int j=0; j<MAX; j++)
			input >> data[i][j];
}
void WriteMatrix(double data[][MAX], ostream& output){
	for (int i=0; i<MAX; i++){
		for (int j=0; j<MAX; j++)
			cout << data[i][j] << "\t";
		cout << endl;
	}
}

double SumAll(double data[][MAX]){
	double sum = 0;
	for (int i=0; i<MAX; i++)
		for (int j=0; j<MAX; j++)
			sum += data[i][j];
	return sum;
}
