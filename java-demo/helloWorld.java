/*
 * @Author: Frank Chu
 * @Date: 2022-09-16 13:39:30
 * @LastEditors: Frank Chu
 * @LastEditTime: 2022-09-16 13:51:24
 * @FilePath: /Cpp/java-demo/helloWorld.java
 * @Description: 
 * 
 * Copyright (c) 2022 by Frank Chu, All Rights Reserved. 
 */

public class helloWorld {
    static int max(int x, int y) {
        if (x > y) { 
            return x; 
        }
        return y;
    }
    public static void main(String[] args) {
        String greeting = "Hello World";
        System.out.println(greeting);
        System.out.println(max(3, 5));
        for(int i = 0; i < 5; i++) {
            for(int j = 0; j <= i; j++) {
                System.out.print("*");
            }
            System.out.println();
        }

        
    }
}

