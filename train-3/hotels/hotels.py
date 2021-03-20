firstLine = input()
numberHotels, target = int(firstLine.split()[0]), int(firstLine.split()[1])

listHotels = input().split()

results = []

for i in range(int(numberHotels)):
    result = int(listHotels[i])
    for j in range(i + 1, int(numberHotels)):
        if (result + int(listHotels[j]) <= target):
            result += int(listHotels[j])
        else:
            break
    results.append(result)

print(max(results))