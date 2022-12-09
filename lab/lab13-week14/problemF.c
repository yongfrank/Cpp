/*
 * @Author: Frank Chu
 * @Date: 2022-12-04 21:10:03
 * @LastEditors: Frank Chu
 * @LastEditTime: 2022-12-04 21:19:31
 * @FilePath: /Cpp/lab/lab13-week14/problemF.c
 * @Description: 问题 F: 校友捐款
 * 120年华诞，很多有成就的校友为学校捐款，希望学校能培养出更优秀的学生。学校把这些捐款登记在册，现在需要你帮忙处理这几件事，
 * 1 算出总捐款数 2 单人捐款最大金额 3 把捐款按从高到低排个序
3 1 2 3
4 1 2 3 4

6 3 3 2 1
10 4 4 3 2 1
 * 
 * Copyright (c) 2022 by Frank Chu, All Rights Reserved. 
 */

#include <stdio.h>
#include <stdlib.h>

// qsort compare function in descending order
int compare(const void* lhs, const void* rhs) {
    return *(int*) rhs - *(int*) lhs; 
}

int main() {
    int amountOfDonationPeople;
    while(scanf("%d", &amountOfDonationPeople) != EOF) {
        int totalDonation = 0;
        int maxDonation = 0;
        int donations[amountOfDonationPeople];
        for (int i = 0; i < amountOfDonationPeople; i++) {
            scanf("%d", &donations[i]);
            totalDonation += donations[i];
            if (donations[i] > maxDonation) {
                maxDonation = donations[i];
            }
        }
        qsort(donations, sizeof(donations) / sizeof(*donations), sizeof(*donations), compare);
        // qsort(donations, amountOfDonationPeople, sizeof(int), compare);
        printf("%d %d", totalDonation, maxDonation);
        for (int i = 0; i < amountOfDonationPeople; i++) {
            printf(" %d", donations[i]);
        }
        printf("\n");
    }
}