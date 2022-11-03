/*
 * @Author: Frank Chu
 * @Date: 2022-10-30 19:09:29
 * @LastEditors: Frank Chu
 * @LastEditTime: 2022-10-30 19:38:32
 * @FilePath: /Cpp/hw/hw05cpp-week8/stringlink/main.cpp
 * @Description: 
 * 
 * Copyright (c) 2022 by Frank Chu, All Rights Reserved. 
 */
////main.cpp
// Online IDE - Code Editor, Compiler, Interpreter

#include <iostream>
#include "stringlink.h"
#include "stringlink.cpp"
using namespace std;

int main()
{
    ILink* plink=new ILink();
    string cmd;
    int data;
    while(true)
    {
        cout<<"link:>";
        cin>>cmd;
        if(cmd=="exit")
        {
            break;
        }
        if(cmd=="push")//push John
        {
            cin>>data;
            plink->push(data);
            continue;
        }
        if(cmd=="pop")
        {
            data=plink->pop();
            cout<<data<<endl;
            continue;
        }
        if(cmd=="print")
        {
            plink->print();
            continue;
        }
        if(cmd=="sort")
        {
            plink->sort();
            cout<<"The link is sorted accendingly!"<<endl;
            continue;
        }
    }
    delete plink;
    return 0;
}