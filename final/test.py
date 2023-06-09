'''
Author: Frank Chu
Date: 2023-02-20 18:10:15
LastEditors: Frank Chu
LastEditTime: 2023-02-20 18:10:19
FilePath: /Cpp/final/test.py
Description: 

Copyright (c) 2023 by ${git_name}, All Rights Reserved. 
'''
def longest_common_substring(s):
    n = len(s)
    sa = build_sa(s)
    lcp = build_lcp(s, sa)
    max_lcp = 0
    for i in range(1, n):
        if lcp[i] > max_lcp and (sa[i] < sa[i - 1] or sa[i] > sa[i - 1] + lcp[i - 1]):
            max_lcp = lcp[i]
            idx = i
    if max_lcp == 0:
        return ""
    substr = s[sa[idx]:sa[idx] + max_lcp]
    first_char = min(substr)
    substr = "".join(sorted(substr))
    return first_char + substr[1:]

def build_sa(s):
    n = len(s)
    sa = [i for i in range(n)]
    rank = [ord(s[i]) for i in range(n)]
    k = 1
    while k <= n:
        sa = sorted(sa, key=lambda x: (rank[x], rank[x + k] if x + k < n else -1))
        new_rank = [0] * n
        new_rank[sa[0]] = 0
        for i in range(1, n):
            if rank[sa[i]] == rank[sa[i - 1]] and (sa[i] + k < n and rank[sa[i] + k] == rank[sa[i - 1] + k]):
                new_rank[sa[i]] = new_rank[sa[i - 1]]
            else:
                new_rank[sa[i]] = new_rank[sa[i - 1]] + 1
        rank = new_rank
        k *= 2
    return sa

def build_lcp(s, sa):
    n = len(s)
    lcp = [0] * n
    inv_sa = [0] * n
    for i in range(n):
        inv_sa[sa[i]] = i
    k = 0
    for i in range(n):
        if inv_sa[i] == n - 1:
            k = 0
            continue
        j = sa[inv_sa[i] + 1]
        while i + k < n and j + k < n and s[i + k] == s[j + k]:
            k += 1
        lcp[inv_sa[i]] = k
        if k > 0:
            k -= 1
    return lcp

longest_common_substring("abcddabcc")