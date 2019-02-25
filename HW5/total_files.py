import sys

def num_lines(file_name):
	total = 0
	f = open(file_name, "r")
	for line in f:
		total += 1
	f.close()
	return total

def num_characters(file_name):
	total = 0
	f = open(file_name, "r")
	for line in f:
		total += len(line.split())
	f.close()
	return total	

def num_words(file_name):
	total = 0
	f = open(file_name, "r")
	for line in f:
		total += len(line.split())
	f.close()
	return total
	
if __name__ == '__main__':
	total_lines = 0
	total_characters = 0
	total_words = 0
	for i in sys.argv:
		total_lines += num_lines(i)
		total_characters += num_characters(i)
		total_words += num_words(i)
	print("Total lines: " + str(total_lines))
	print("Total characters: " + str(total_characters))
	print("Total words: " + str(total_words))
