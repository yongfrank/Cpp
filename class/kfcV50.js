/*
 * @Author: Frank Chu
 * @Date: 2022-11-10 14:39:55
 * @LastEditors: Frank Chu
 * @LastEditTime: 2022-11-10 14:39:58
 * @FilePath: /Cpp/class/kfcV50.js
 * @Description: 
 * 
 * Copyright (c) 2022 by Frank Chu, All Rights Reserved. 
 */
let arr = [
    [1, 9, 12, 13, 14, 15, 16, 18, 19, 20, 21, 22],
    [2, 8, 12, 18, 22],
    [3, 7, 12, 13, 14, 15, 16, 18, 22],
    [4, 6, 16, 18, 22],
    [5, 5, 12, 13, 14, 15, 16, 18, 19, 20, 21, 22],
];

function demo(arr) {
    let str = "";
    for (let i = 0; i < arr.length; i++) {
        for (j = 0; j < 30; j++) {
            if (arr[i].indexOf(j) > -1) {
                str += "█";
            } else {
                str += " ";
            }
        }
        str += "\n";
    }
    return str;
}
console.log(demo(arr));