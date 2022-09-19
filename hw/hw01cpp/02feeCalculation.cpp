/*
 * @Author: Frank Chu
 * @Date: 2022-09-19 14:21:50
 * @LastEditors: Frank Chu
 * @LastEditTime: 2022-09-19 14:46:39
 * @FilePath: /Cpp/hw/hw01cpp/02feeCalculation.cpp
 * @Description: 
 * 
 * Copyright (c) 2022 by Frank Chu, All Rights Reserved. 
 */

#include <iostream>

using namespace std;

string titleString(int title);

int main(){
	char name[20];
	int totalTimeOfWork, titleOfTeacher, sumOfSalary = 0;
    cout << "Input name, title and total time of work." << endl;
    cout << "1: Professor, 2: Assistant Professor, 3: Instructor, 4: Teaching Assistant" << endl;

	cin >> name >> titleOfTeacher >> totalTimeOfWork;
    
	switch (titleOfTeacher)
	{
	case 1: sumOfSalary = 100 * totalTimeOfWork;break;
	case 2: sumOfSalary = 80 * totalTimeOfWork;break;
	case 3: sumOfSalary = 60 * totalTimeOfWork;break;
	case 4: sumOfSalary = 40 * totalTimeOfWork;break;
	default:cout << "Input Error" << endl;
	}

	cout << "Dr. "<< name <<" is the "<< titleString(titleOfTeacher) << ". Salary is " << sumOfSalary << "." << endl;
	
    return 0;
}

string titleString(int title) {
    if (title == 1) {
        return "Professor";
    } else if (title == 2) {
        return "Assistant Professor";
    } else if (title == 3) {
        return "Instructor";
    } else {
        return "Teaching Assistant";
    }
}