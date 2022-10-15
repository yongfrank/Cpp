/*
 * @Author: Frank Chu
 * @Date: 2022-10-12 16:43:33
 * @LastEditors: Frank Chu
 * @LastEditTime: 2022-10-15 12:29:02
 * @FilePath: /Cpp/hw/hw04cpp-week6/salary.cpp
 * @Description:
 *
 * Copyright (c) 2022 by Frank Chu, All Rights Reserved.
 */

#include <iostream>

class Salary
{
private:
    double Wage, Subsidy, Rent, WaterFee, ElecFee;

public:
    // constructor
    Salary(double wage, double subsidy, double rent, double waterFee, double elecFee);
    Salary();
    
    // set methods
    void setWage(double f) { Wage = f; }
    void setSubsidy(double f) { Subsidy = f; }
    void setRent(double f) { Rent = f; }
    void setWaterFee(double f) { WaterFee = f; }
    void setElecFee(double f) { ElecFee = f; }

    // get methods
    double getWage() { return Wage; }
    double getSubsidy() { return Subsidy; }
    double getRent() { return Rent; }
    double getWaterFee() { return WaterFee; }
    double getElecFee() { return ElecFee; }

    double RealSalary() { return Wage + Subsidy - Rent - WaterFee - ElecFee; }
    // destructor
    ~Salary();
};

Salary::Salary(double wage, double subsidy, double rent, double waterFee, double elecFee)
{
    this->Wage = wage;
    this->Subsidy = subsidy;
    this->Rent = rent;
    this->WaterFee = waterFee;
    this->ElecFee = elecFee;
}
Salary::Salary()
{
    this->Wage = 0;
    this->Subsidy = 0;
    this->Rent = 0;
    this->WaterFee = 0;
    this->ElecFee = 0;
}

Salary::~Salary()
{
}

// int main() {
//     Salary frank(15000.0, 9000.0, 4500.0, 300.0, 500.0);
//     std::cout << frank.RealSalary() << std::endl;
// }