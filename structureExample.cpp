// StructureIntro.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <cstring>
using namespace std;

//structure is a complex type of data where a group of different data types 
// can be called with one name

//define the structure
struct Students {
	int age;
	float fees;
	string name;
	string phone;
	string address;

	Students(int a = 0, float f = 0, string n = "", string p = "", string ad = "") {
		age = a;
		fees = f;
		name = n;
		phone = p;
		address = ad;
	}
};


//funtion prototypes

void input_data();
void output_data(struct Students bse_student[5], int n);
void total_fees(struct Students bse_stud[5], int x);



int main()
{
	
	//input
	input_data();
}

void total_fees(struct Students bse_stud[5], int x) {
	int i;
	int total = 0;
	for (i = 0; i < x; i++) {
		total += bse_stud[i].fees; // total = total + bse_stud[i].fees;
	}
	cout << "\nThe total = " << total << endl;
}

void output_data(struct Students bse_student[5], int n) {
	int i;
	for (i = 0; i < n; i++) {
		cout << "\nThe name of student" << i + 1 << " : " << bse_student[i].name;
		cout << "\nThe fees of student" << i + 1 << " : " << bse_student[i].fees;

	}
	total_fees(bse_student, n);
}


void input_data() {
	struct Students bse[5];
	int i;
	for (i = 0; i < 5; i++) {
		cout << "Enter the name of student " << i + 1 << " : ";
		cin >> bse[i].name;
		cout << "Enter the fees of student" << i + 1 << " : ";
		cin >> bse[i].fees;
	}
	cout << "\n";
	output_data(bse, 5);
}


