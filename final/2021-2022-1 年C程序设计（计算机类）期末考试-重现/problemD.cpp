/*
 * @Author: Frank Chu
 * @Date: 2023-02-19 12:35:19
 * @LastEditors: Frank Chu
 * @LastEditTime: 2023-02-19 19:27:10
 * @FilePath: /Cpp/final/2021-2022-1 年C程序设计（计算机类）期末考试-重现/problemD.cpp
 * @Description: 
问题 D: 镂空三角形
[命题人 : root]
时间限制 : 1.000 sec  内存限制 : 128 MB

题目描述
把一个字符三角形掏空，就能节省材料成本，减轻重量，但关键是为了追求另一种视觉效果。在设计的过程中，需要给出各种花纹的材料和大小尺寸的三角形样板，通过电脑临时做出来，以便看看效果。
输入
每行包含一个字符和一个整数n(0<n<41)，不同的字符表示不同的花纹，整数n表示等腰三角形的高。显然其底边长为2n-1。如果遇到@字符，则表示所做出来的样板三角形已经够了。
输出
每个样板三角形之间应空上一行，三角形的中间为空。显然行末没有多余的空格。
样例输入 Copy
X 2
A 7
@
样例输出 Copy
 X
XXX

      A6
     A A5
    A   A4
   A     A3
  A       A2
 A         A1
AAAAAAAAAAAAA0
提示
建议输入采用下面方式进行：
char a[5];
while(scanf("%s",a)!=EOF)
{
      if(a[0]=='@')
     {  
             break;
     }
}
 * 
 * Copyright (c) 2023 by ${git_name}, All Rights Reserved. 
 */


#include <iostream>
#include <vector>
#include <string>

std::vector<std::string> get_triangle(char triangleComponent, int lineCount) {
    std::vector<std::string> triangle(lineCount);
    for(auto i = 0; i < lineCount - 1; i++) {
        std::string line = "";
        for(int j = i; j < lineCount - 1; j++) {
            line += " ";
        }
        line += triangleComponent;
        triangle[i] = line;
    }
    for (auto i = 1; i < lineCount - 1; i++) {
        for(int j = 0; j < i * 2 - 1; j++) {
            triangle[i] += " ";
        }
        triangle[i] += triangleComponent;
    }
    for (int i = 0; i < lineCount * 2 - 1; i++) {
        triangle[lineCount - 1] += triangleComponent;
    } 
    for (int i = 0; i < lineCount; i++) {
        std::cout << triangle[i] << std::endl;
    }
    return triangle;
}

int main() {
    char triangle_component = ' ';
    int lineCount = 0;
    char a[1];
    while(scanf("%c",a)!=EOF) {
        if(a[0]=='@')
        {  
            break;
        }
        triangle_component = a[0];
        scanf("%d", &lineCount);
        std::vector<std::string> triangle = get_triangle(triangle_component, lineCount);
        std::cout << std::endl;
    }

}