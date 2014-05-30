import numpy as np
from numpy import *
from numpy.random import normal
import matplotlib.pyplot as plt
import matplotlib.cbook as cbook

def read_datafile(filename):
	data = np.genfromtxt(filename, delimiter=',', names=['pvalues'])
	return data

data = np.loadtxt("medians.txt")
binlist = np.linspace(-4000, 4000, 41)
plt.hist(data)
plt.title("Volume Difference Distribution")
plt.xlabel("Dataset Median - Prediction") 
plt.ylabel("Number of points")


plt.show()