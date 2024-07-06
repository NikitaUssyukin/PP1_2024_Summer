#include <iostream>
#include <map>

using namespace std;

int main() {
    map<string, double> student_applications;

    int totalNumberOfStudents = 0;

    int n;
    cin >> n;

    

    for(int i = 0; i < n; ++i) {
        int m;
        cin >> m;
        for(int j = 0; j < m; ++j) {
            string city;
            int students;
            cin >> city >> students;

            student_applications[city] += students;

            totalNumberOfStudents += students;
        }
    }

    // cout << "\n--------\n";

    // cout << "Total students: " << totalNumberOfStudents << endl;

    map<string, double>::iterator it;
    for(it = student_applications.begin(); it != student_applications.end(); ++it) {
        cout << it->first << " " << it->second / totalNumberOfStudents * 100 << endl;
    }

    return 0;
}