import csv
import numpy

startTime = 1315958400.0;
window = 3600.0;
endTime = 1400105025.0;

currTime = 1315922016.0;
currFiat = 0.0;
currSum = 0.0;
currPrices = []
currVar = 0.0;
newRows = []


with open('bitstampUSD.csv', 'rt', encoding="utf8") as csvfile: 
	datareader = csv.reader(csvfile, delimiter=',', quotechar='|')
	while (startTime + window) < endTime:
		while currTime < startTime + window:
			currRow = next(datareader)
			currTime = float(currRow[0])
			currFiat += float(currRow[1]) * float(currRow[2])
			currSum += float(currRow[2])
			currPrices.append(float(currRow[1]))
		if currSum != 0:			
			avgPrice = currFiat / currSum
			currVar = numpy.std(currPrices)
		else :
			avgPrice = 0
		newRows.append([str(int(startTime)), avgPrice, str(currSum), 
						str(currVar)])
		currSum = 0
		currFiat = 0
		currPrices = []
		currVar = 0.0
		startTime += window
	print(newRows)

with open('bitstampUSD_60min.csv', 'wt', encoding="utf8") as output:
		writer = csv.writer(output)
		writer.writerows(newRows)

