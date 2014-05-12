import numpy as np
import matplotlib.pyplot as plt
import matplotlib.cbook as cbook

def read_datafile(filename):
	data = np.genfromtxt(filename, delimiter=',', names=['time', 'amount'])
	return data

data = read_datafile("bitstampvolspecific2.csv")
fig = plt.figure()
ax1 = fig.add_subplot(111)
ax1.plot(data['time'], data['amount'], color='r', label='the data')

plt.show()