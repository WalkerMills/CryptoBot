import csv

startTime = 1315922040.0;
window = 3600.0;
endTime = 1397080320.0;

currTime = 1315922016.0;
currFiat = 0.0;
currSum = 0.0;
newRows = []


with open('bitstampUSD.csv', 'rt', encoding="utf8") as csvfile: 
	datareader = csv.reader(csvfile, delimiter=',', quotechar='|')
	while (startTime + window) < endTime:
		while currTime < startTime + window:
			currRow = next(datareader)
			currTime = float(currRow[0])
			currFiat += float(currRow[1]) * float(currRow[2])
			currSum += float(currRow[2])
		if currSum != 0:			
			avgPrice = currFiat / currSum
		else :
			avgPrice = 0
		newRows.append([str(currTime), avgPrice, str(currSum)])
		currSum = 0
		currFiat = 0
		startTime += window
	print(newRows)

with open('bitstampUSD_volume.csv', 'wt', encoding="utf8") as output:
		writer = csv.writer(output)
		writer.writerows(newRows)

