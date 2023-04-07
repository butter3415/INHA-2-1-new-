def merge_sort(a):
    n = len(a)

    if n <= 1:
        return a

    mid = n // 2    # 몫 연산 : 5

    g1 = merge_sort(a[:mid])    # 첫번째 원소부터 (mid - 1) 까지
    print('g1->', end = '')
    print(g1)

    g2 = merge_sort(a[mid:])
    print('g2->', end= '')
    print(g2)

    result = []

    while g1 and g2:

        if g1[0] < g2[0]:

            result.append(g1.pop(0))

        else:

            result.append(g2.pop(0))

    while g1:
        result.append(g1.pop(0))

    while g2:
        result.append(g2.pop(0))

    return result


d = [6, 8, 3, 9, 10, 1, 2, 4, 7, 5]

# 왼쪽 트리 먼저 정렬되고, 오른쪽 트리 정렬
# logN의 시간 복잡도를 갖는다
# 빠른 알고리즘 합병 정렬 알고리즘
# 느린 알고리즘 : 버블 정렬

print(merge_sort(d))