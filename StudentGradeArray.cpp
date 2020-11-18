#include<iostream>
#include<iomanip>
using namespace std;

const int NUMBER_OF_STUDENTS = 4;
const int NUMBER_OF_TESTS = 3;



int main() {


	int studentGrades[NUMBER_OF_STUDENTS][NUMBER_OF_TESTS];

	for (int currentStudent = 1; currentStudent <= NUMBER_OF_STUDENTS; currentStudent++) {
		cout << "Enter test grade information for student " << currentStudent << endl;
		for (int currentTest = 1; currentTest <= NUMBER_OF_TESTS; currentTest++) {
			cout << "Enter grade for test " << currentTest << " and press Return" << endl;
			cin >> studentGrades[currentStudent - 1][currentTest - 1];
		}
	}

	cout.setf(ios::fixed);
	cout.setf(ios::showpoint);
	cout.precision(2);

	cout << "Student" << setw(12) << "Grades" << setw(13) << "Average" << endl;

	for (int currentStudent = 1; currentStudent <= NUMBER_OF_STUDENTS; currentStudent++) {
		double sum = 0;
		cout << currentStudent << setw(12);
		for (int currentTest = 1; currentTest <= NUMBER_OF_TESTS; currentTest++) {
			cout << studentGrades[currentStudent-1][currentTest - 1] << " ";
			sum += studentGrades[currentStudent - 1][currentTest - 1];
		}
		cout << setw(13) << sum / NUMBER_OF_TESTS << endl;

	}

	cout << "Test Average" << setw(12);
	for (int currentTest = 1; currentTest <= NUMBER_OF_TESTS; currentTest++) {
		int testAverage = 0;
		for (int currentStudent = 1; currentStudent <= NUMBER_OF_STUDENTS; currentStudent++) {
			testAverage += studentGrades[currentStudent - 1][currentTest - 1];
		}
		cout << testAverage/NUMBER_OF_STUDENTS << " ";
	}
	return 0;
}