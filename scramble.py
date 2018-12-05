def scramble(word, stop):
	'''
	scramble(word, stop)
	word -> the text to be scrambled
	stop -> The last index it can extract word from
	returns a scrambled version of the word.

	This function takes a word as input and returns a scrambled version of it.
	However, the letters in the beginning and ending do not change.
	'''
	import random
	pre, suf = word[0], word[stop:]
	word = list(word)
	mid_word = word[1:stop]
	random.shuffle(mid_word)
	word = pre + ''.join(mid_word) + suf
	return word
	
def unpack_and_scramble(words):
	'''
	unpack_and_scramble(words)
	words -> a list of words to be scrambled.
	returns a list of scrambled strings

	This function unpacks all the words and checks if len(word) < 3
	If true then it scrambles the word
	Now, it will be appended to a new list
	'''
	words = words.split()
	scrambled_words = []
	for word in words:
		if len(word) <3:
			scrambled_words.append(word)
			continue

		if word.endswith((',', '?', '.', ';', '!')):
			stop = -2
		else:
			stop = -3

		scrambled_word = scramble(word, stop)
		scrambled_words.append(scrambled_word)

	return ' '.join(scrambled_words) 


file_name = input('Enter file name:')
try:
	file = open(file_name, 'r')
	new_file = file.name + 'Scrambled'
	words = file.read()
	file.close()
	scrambed_words = unpack_and_scramble(words)
	file_name = open(new_file, 'w')
	file_name.write(scrambed_words)
	file_name.close()
except OSError as ose:
	print('Please enter file name properly')
