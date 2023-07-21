This file describes the contents and formats of the data files. The numerical study in the paper consists of four parts:
(i) the numerical experiment for the stochastic RUFLP based on 1990 census data (corresponding to the results in Table 1 in the paper), 
(ii) the numerical experiment for the robust RUFLP based on 1990 census data (corresponding to the results in Tables 2 and 4 in the paper),
(iii) the numerical experiment for the robust RUFLP based on the randomly generated data (corresponding to the results in Table 5 in the paper), and
(iv) the data-driven simulation based on the historical typhoon data in China (corresponding to the results in Table 3 in the paper).


-- Data set for numerical experiments (i) and (ii) --

The numerical experiments (i) and (ii) are based on the same data set (from 1990 census) as used in Aboolian et al. (2013) and Lu et al. (2015). The data set is available at http://coral.ie.lehigh.edu/~larry/wp-content/datasets/RPMP/RPMP_data.zip by courtesy of Professor Larry Snyder. We also provide the data set in the file named "data100RUFLP.txt" in this online supplement for ease of reference. 

In the file named "data100RUFLP.txt", the first six columns are extracted directly from the data set by Professor Larry Snyder, which record,
  * Index: the index of the city. Each city is regarded as a potential location and a customer node in the paper.
  * Demand: the population (divided by 1E+4) of the city according to 1990 census, which corresponds to d_i in the paper.
  * EmergCost: the unit penalty cost when the customer in the city is not served, which corresponds to c_{i0} in the paper.
  * FixedCost: the fixed location cost of the city, which corresponds to f_j in the paper.
  * Lat, Lon: the latitude and longitude of the city, which are used to calculate the great-circle distance (cf., http://en.m.wikipedia.org/wiki/Great-circle_distance for the formula to calculate great-circle distance). The unit transportation cost between two cities (i.e., c_{ij} in the paper) is proportional to the great-circle distance.

The remaining three columns record the parameters calculated based on the first six columns:
  * DistanceFromSource: the great-circle distance between the city and New Orleans, Louisiana, US, the center of Hurricane Katrina. 
  * DisruptionRate (alpha=1): The disruption rate of the city for the stochastic RUFLP. It corresponds to 1 - q_j in the paper and is calculated by 1 - q_j = 0.01 + 0.1 * alpha * exp( - DistanceFromSource[j] / 400). For conciseness, we only present the disruption rate with alpha = 1. 
  * DisruptionRate (beta=0.1, theta=200): The disruption rate of the city for the robust RUFLP. It corresponds to 1 - q_j in the paper and is calculated by 1 - q_j = beta * exp( - DistanceFromSource[j] / theta ). For conciseness, we only present the disruption rate with beta = 0.1 and theta = 200.

The instances with 20, 50, 75 nodes are obtained by considering the first 20, 50, 75 cities, respectively.


-- Data set for numerical experiment (iii) --

The numerical experiment (iii) is based on the randomly generated data, which is provided in the file named "data20random.txt". The file contains the data of 100 instances. For each instance, we present the index, the demand, the unit penalty cost, the fixed location cost, the latitude, and the longitude of locations in the corresponding columns as introduced before for the file "data100RUFLP.txt". All the data are randomly generated within the same range as those in the data set by Professor Larry Snyder.


-- Data set for numerical experiment (iv) --

Numerical experiment (iv) is based on the historical typhoon data in China. The historical typhoon information is available at http://tcdata.typhoon.org.cn by Shanghai Typhoon Institute and http://tf.121.com.cn by Shenzhen Meteorology Bureau. The data set used in the paper is provided in the file named "data16typhoon.txt" in this online supplement. 

The file records the location information, including: 
  * LocationIndex: the index of the location.
  * LocationName: the name of the location.
  * Demand: the population (divided by 1E+4) of the location (corresponding to d_i in the paper).
  * EmergCost: the unit penalty cost when the demand in the location is not served (corresponding to c_{i0} in the paper), which is set the same value as the data set by Professor Larry Snyder.
  * FixedCost: the fixed location cost of the location (corresponding to f_j in the paper), which is estimated based on the housing price of the location.
  * Lat, Lon: the latitude and longitude of the location, which are used to calculate the great-circle distance. The unit transportation cost between two cities (i.e., c_{ij} in the paper) is proportional to the great-circle distance.

The file also records the typhoon information, including:
  * TyphoonIndex: the index of the typhoon.
  * TyphoonNo.: the typhoon number.
  * TyphoonName: the name of the typhoon.
  * Year: the year when the typhoon landed.
  * AffectedLocation: the index of locations affected by the typhoon.

Based on the location information and the typhoon information, we can design the instances used in the numerical experiment, e.g., the instance based on the typhoon data in 2008-2017 or 2007-2016. For ease of reference, the file also provides the cross disruption probability in the form of cross moment matrix (i.e., the 16*16 matrix) for the two instances, respectively.
