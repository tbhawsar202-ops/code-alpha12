#include <iostream>
#include <iomanip>
using namespace std;


int main() {
    int n;
    float grade, credit;
    float totalCredits = 0, totalGradePoints = 0;

    cout << "Enter the number of courses: ";
    cin >> n;

    float grades[n];
    float credits[n];

    for (int i = 0; i < n; i++) {
        cout << "\nCourse " << i + 1 << endl;

        cout << "Enter Grade Point: ";
        cin >> grades[i];

        cout << "Enter Credit Hours: ";
        cin >> credits[i];

        totalCredits += credits[i];
        totalGradePoints += grades[i] * credits[i];
    }

    float cgpa = totalGradePoints / totalCredits;

    cout << "\n----- Course Details -----" << endl;
    for (int i = 0; i < n; i++) {
        cout << "Course " << i + 1
             << " -> Grade: " << grades[i]
             << ", Credit Hours: " << credits[i]<< endl;
    }

    cout << "\nTotal Credits = " << totalCredits << endl;
    cout << "Total Grade Points = " << totalGradePoints << endl;

    cout << fixed << setprecision(2) ;
    cout << "Final CGPA = " << cgpa << endl;

    return 0;
}
