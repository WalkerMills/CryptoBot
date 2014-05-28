import matplotlib as mpl
import matplotlob.pyplot as plt
import numpy as np

# What we want to plot is for each crossover point, we have (median of data - amount)
# and we want this to be a distribution. 

def histogram(filename): 
	data_in = []

	with open(filename , 'rt', encoding="utf8") as csvfile: 
		datareader = csv.reader(csvfile, delimiter=',', quotechar='|')
		while ( next(datareader) != ''):
			data.extend(next(datareader))
	csvfile.close()

	data = data_in[1:]

# What we're doing to do is for each data point, the points amount is the first line, 
# and then the rest are the next of the lines
	for (int i = 1; i < len(data); ++i):
		data[i] -= data[0]

	fig, ax = plt.subplots()
	npdata = np.array(data)
	median = numpy.median(npdata)
	plt.hist(data, bins=50, normed=True)
	plt.plot(median)
	plt.show()

