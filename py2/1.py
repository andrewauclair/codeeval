#! python2

import sys

test_cases = open(sys.argv[1], 'r')
for test in test_cases:
	strs = test.split()
	fizz = int(strs[0])
	buzz = int(strs[1])
	total = int(strs[2])
	
	for i in range(1, total + 1):
		if i % fizz == 0 and i % buzz == 0:
			print "FB",
		elif i % fizz == 0:
			print "F",
		elif i % buzz == 0:
			print "B",
		else:
			print '{}'.format(i),
	
	print ''
test_cases.close()
