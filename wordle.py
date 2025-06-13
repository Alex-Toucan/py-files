import requests
import json

# Get word from NYT
date = input("Enter a date (YYYY-MM-DD): ")
r = requests.get(f"https://www.nytimes.com/svc/wordle/v2/{date}.json").json()
word = r['solution']

# Guessing game
done = False
tries = 0

while not done:
	guess = input("Enter a guess: ").lower()

	# Is the guess valid?
	if len(guess) != 5:
		print("Invaild length of the word inputted")
		continue

	tries+= 1

	# Is the guess correct?
	if guess == word:
		print("Correct! You guessed today's word correctly!")
		done = True

	# If no
	else:
		result = ""
		#Check each letter
		for i in range(len(guess)):
			#Correct letter
			if guess[i] == word[i]:
				result += 'G'
			#Wrong spot; correct letter
			elif guess[i] in word:
				result += 'Y'
			#Wrong letter
			else:
				result += '?'
		print(result)

	if tries == 6:
		print("Game over!")
		done = True
