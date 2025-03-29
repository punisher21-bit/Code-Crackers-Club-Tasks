# Task 1: Reading and Splitting Text

**Description**:  
Your first step is to read text from a file and break it down into individual words. 

**What You'll Do**:
1. To begin, make sure you have a sample text file to work with. You can create one yourself or use a short story, article, or any text of your choice. Save it as `sample_text.txt` in the same directory as your Python scripts.
2. Write a Python function that opens this file, reads its content, and splits the text into a list of words using spaces as delimiters.
3. Print the list of words to verify your work.

**Input**:  
A text file named `sample_text.txt` with the following content:
```
Hello world. This is a test. Python is fun.
```

**Expected Output**:  
A list of words:
```
['Hello', 'world.', 'This', 'is', 'a', 'test.', 'Python', 'is', 'fun.']
```

**Explanation**:  
The function reads the text file and splits it into words based on spaces. Punctuation remains attached to the words (e.g., "world.", "test.", "fun.").

# Task 2: Counting Word Frequencies

**Objective**: Use dictionaries to count how often each word appears in the text.

**Description**:  
Now that you have a list of words, let’s analyze how frequently each word appears. This introduces you to dictionaries, which are essential for storing and accessing data efficiently.

**What You'll Do**:
1. Use the list of words from Task 1.
2. Create a dictionary where each key is a unique word, and its value is the number of times that word appears in the list.
3. Print the dictionary to see the frequency of each word.

**Input**:  
The list of words from Task 1:
```
['Hello', 'world.', 'This', 'is', 'a', 'test.', 'Python', 'is', 'fun.']
```

**Expected Output**:  
A dictionary showing the frequency of each word:
```
{'Hello': 1, 'world.': 1, 'This': 1, 'is': 2, 'a': 1, 'test.': 1, 'Python': 1, 'fun.': 1}
```

**Explanation**:  
The dictionary counts how many times each word appears in the list. For example, "is" appears twice, while all other words appear once.


# Task 3: Generating Random Words

**Objective**: Learn to select random words using the `random` module.

**Description**:  
In this task, you’ll practice selecting random words from your list, which will later help you generate text.

**What You'll Do**:
1. Import the `random` module.
2. Write a function that takes the list of words and generates a sequence of  random words (e.g., 5 words).
3. Print the sequence.
**Input**:  
The list of words from Task 1:
```
['Hello', 'world.', 'This', 'is', 'a', 'test.', 'Python', 'is', 'fun.']
```

**Expected Output**:  
A string of 5 random words (output will vary due to randomness):
```
'This is a fun. world.'
```

**Explanation**:  
The function selects 5 random words from the list and joins them into a single string. Each run may produce a different sequence due to randomness.

 Note: The generated text won’t make much sense yet, that’s expected! We’ll improve it with Markov Chains.

 
