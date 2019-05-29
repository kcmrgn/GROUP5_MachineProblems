// Create a program that will compute the grades of students and determine the first 10 students who performed best in class.
// A. Enter the student's name and his/her respective scores for each grade component.
// B. Compute the raw grades accordingly.
// C. Output the students’ final raw grades and their corresponding Grade Point Average (GPA).
// D. Determine if a student passed or failed the subject and will display the first 10 students who performed best in the class.

#include <iostream>
#include <conio.h>
#include <bits/stdc++.h> 

using namespace std;

int main()
{
	int score1st = 0, score2nd = 0, score3rd = 0, score4th = 0, score5th = 0, score6th = 0, score7th = 0, score8th = 0, score9th = 0, score10th = 0, studentScore, count=0;
	string firstname[50], lastname[50];
	float FinalRawG[50];
	int s, x = 0, xx = 0;

	
	for(s = 1; s <= 50; s++)
	{
		cout << "\nA Classroom Management Software\n" << endl;
		// Input Student's Name
		cout << "(First name and Surname of the student)" << endl;
		cout << "Enter student name ("<<s<<"): ";
		cin >> firstname[x] >> lastname[x];
		
		cout << "\nEXPERIMENTS: " << endl;
			
		int exp;
		float expt = 0, expscore;
		for (exp = 1; exp <= 4; exp++)
		{
			// Input the 4 scores in Experiment
			cout << "Experiment Score " << exp << ": ";
			cin >> expscore;
			// Formula in computing the Experiment scores
			expt = expt + (expscore*0.05);
		}
			cout << "\nExperiment Equivalent Score: " << expt << endl << endl;
		
		cout<< "SILLS TESTS: " << endl;
		
		int skills;
		float skillst = 0, skillsscore;
		for (skills = 1; skills <= 4; skills++)
		{
			// Input the 4 scores in Skills Test
			cout << "Skills Score " << skills << ": ";
			cin >> skillsscore;
			// Formula in computing the Skills Test scores
			skillst = skillst + (skillsscore*0.05);
		}
			cout << "\nSkills Equivalent Score: " << skillst << endl << endl;
		
		cout << "MACHINE PROBLEMS: " << endl;
		
		int MP;
		float MPT = 0, MPscore;
		for (MP = 1; MP <= 2; MP++)
		{
			// Input the 2 scores in Machine Problem
			cout << "Machine Problem Score " << MP << ": ";
			cin >> MPscore;
			// Formula in computing the Machine Problem scores
			MPT = MPT + (MPscore*0.10);
		}
			cout << "\nMachine Problem Equivalent Score: " << MPT << endl << endl;
		
	
		cout << "PRELIMINARY EXAMS: " << endl;
		
		float PreWr, PrePr, WrPer = 0;
		// Input the score in Written Preliminary Exam
		cout << "Preliminary Written Exam Score: ";
		cin >> PreWr;
		// Input the score in Practical Preliminary exam
		cout << "Preliminary Practical Exam Score: ";
		cin >> PrePr;
		// Formula in computing the Preliminary Exam scores
		WrPer = (PreWr+PrePr)*0.20;
		cout << "\nPreliminary Equivalent Score: " << WrPer << endl << endl;
		
		
		cout<< "FINALS: " << endl;
		
		float FinWr, FinPr, FWrPer = 0;
		// Input the score in Written Final Exam
		cout << "Final Written Exam Score: ";
		cin >> FinWr;
		// Input the score in Practical Final Exam
		cout << "Final Practical Exam Score: ";
		cin >> FinPr;
		// Formula in computing the Final Exam Scores
		FWrPer = (FinWr+FinPr)*0.20;
		cout << "Final Equivalent Score: " << FWrPer << endl << endl;
		
		
		// Formula in computing the Final Raw Grade
		FinalRawG[x] = expt + skillst + MPT + WrPer + FWrPer;
		cout << "FINAL RAW GRADE: " << FinalRawG[x] << endl;
		
		
		// Equivalent of Raw Grade according to the Transmutation Table
		// Identifies if a student Passed or Failed
		if (FinalRawG[x] >= 95.57 && FinalRawG[x] <= 100)
			cout << "Grade Point Average (GPA): 1.0 - Passed";
		else if (FinalRawG[x] >= 91.12 && FinalRawG[x] <= 95.56)
			cout << "Grade Point Average (GPA): 1.25 - Passed";
		else if (FinalRawG[x] >= 86.68 && FinalRawG[x] <= 91.11)
			cout << "Grade Point Average (GPA): 1.50 - Passed";			
		else if (FinalRawG[x] >= 82.23 && FinalRawG[x] <= 86.67)
			cout << "Grade Point Average (GPA): 1.75 - Passed";
		else if (FinalRawG[x] >= 77.79 && FinalRawG[x] <= 82.22)
			cout << "Grade Point Average (GPA): 2.0 - Passed";
		else if (FinalRawG[x] >= 73.34 && FinalRawG[x] <= 77.78)
			cout << "Grade Point Average (GPA): 2.25 - Passed";
		else if (FinalRawG[x] >= 68.90 && FinalRawG[x] <= 73.33)
			cout << "Grade Point Average (GPA): 2.50 - Passed";
		else if (FinalRawG[x] >= 64.45 && FinalRawG[x] <= 68.89)
			cout << "Grade Point Average (GPA): 2.75 - Passed";
		else if (FinalRawG[x] >= 60.00 && FinalRawG[x] <= 64.44)
			cout << "Grade Point Average (GPA): 3.00 - Passed";
		else
			cout << "Student Failed!";
	
	cout << endl <<endl;
	x++;
	
	
	}
	
	int k,c,temp;
			
	for (x = 1; x < 50; ++x)
	{
		for (c = 0; c < (50-x); ++c)
			if (FinalRawG[c] < FinalRawG[c+1])
			{
				temp = FinalRawG[c];
				FinalRawG[c] = FinalRawG[c+1];
				FinalRawG[c+1] = temp;
			}
	}
      	
    // Identifies the first 10 students who performed best in the class
	cout << "Top 10:" << endl << endl;
	for (x = 0; x < 10; ++x)
		cout << firstname[x] <<'     '<< lastname[x] <<"                         "<< FinalRawG[x] <<endl;
		
		
}

