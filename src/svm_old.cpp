#include <iostream>
#include <fstream>
#include <cstdlib>

using namespace std;

const int m = 100;
const int n = 2;
const int test_data = 20;

class data
{
public:
	double x[2];
	int y;
	
	data(double a = 0, double b = 0, int c = 0): x[0](a), x[1](b), y(c) {}
};

data d[m];
data t[test_data];

void trainint_svm() {
	
}

int main() {
	freopen("training_data.txt", "r", stdin);
	for (int i = 0; i < m; ++i) {
		cin >> d[i].x[0] >> d[i].x[1] >> d[i].y;
	}
	
	training_svm();
	fclose(stdin);
	freopen("test_data.txt", "r", stdin);
	for (int i = 0; i < test_data; ++i) {
		cin >> t[i].x[0] >> t[i].x[1];
	}
	
	test_svm();
	
	return 0;
}
