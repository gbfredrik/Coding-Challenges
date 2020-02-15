if __name__ == '__main__':
    n = int(input())
    student_marks = {}
    for _ in range(n):
        name, *line = input().split()
        scores = list(map(float, line))
        student_marks[name] = scores
    query_name = input()

    total = count = 0
    for score in student_marks[query_name]:
        total += score
        count += 1
    print("{0:.2f}".format(total / count))
