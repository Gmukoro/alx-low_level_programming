Bit manipulation refers to the process of manipulating the individual bit
s of a binary number. It is a fundamental aspect of computer programming
, and is used extensively in fields such as software development, cryptography
, and computer graphics

Here are some of the most important things you need to know about bit manipulation:

1. Bitwise operators: The bitwise operators are a set of operator
s that can be used to manipulate individual bits in a binary number
. These operators include AND (&), OR (|), XOR (^), NOT (~), left shift (<<), and right shift (>>).

2. Bitwise AND: The bitwise AND operator (&) returns a 1 in each bit posi-
tion where both operands have a 1, and a 0 in all other positions.

3. Bitwise OR: The bitwise OR operator (|) returns a 1 in each bit posi-
tion where at least one of the operands has a 1, and a 0 in all other positions.

4. Bitwise XOR: The bitwise XOR operator (^) returns a 1 in each bit pos
ition where the operands differ (one is 1 and the other is 0), and a 0 in all other positions.

5. Bitwise NOT: The bitwise NOT operator (~) is a unary operator that flips all the bits in a binary number.

6. Left shift: The left shift operator (<<) shifts the bits of a binary nu
mber to the left by a specified number of positions. The vacant positions are filled with 0.

7. Right shift: The right shift operator (>>) shifts the bits of a binary numb
er to the right by a specified number of positions. The vacant positions are fil
led with 0 for unsigned numbers and the sign bit for signed numbers.

Tasks
0. 0
mandatory
Score: 0.0% (Checks completed: 0.0%)
Write a function that converts a binary number to an unsigned int.

Prototype: unsigned int binary_to_uint(const char *b);
where b is pointing to a string of 0 and 1 chars
Return: the converted number, or 0 if
there is one or more chars in the string b that is not 0 or 1
b is NULL

1. 1
mandatory
Score: 0.0% (Checks completed: 0.0%)
Write a function that prints the binary representation of a number.

Prototype: void print_binary(unsigned long int n);
Format: see example
You are not allowed to use arrays
You are not allowed to use malloc
You are not allowed to use the % or / operators

2. 10
mandatory
Score: 0.0% (Checks completed: 0.0%)
Write a function that returns the value of a bit at a given index.

Prototype: int get_bit(unsigned long int n, unsigned int index);
where index is the index, starting from 0 of the bit you want to get
Returns: the value of the bit at index index or -1 if an error occured

3. 11
mandatory
Score: 0.0% (Checks completed: 0.0%)
Write a function that sets the value of a bit to 1 at a given index.

Prototype: int set_bit(unsigned long int *n, unsigned int index);
where index is the index, starting from 0 of the bit you want to set
Returns: 1 if it worked, or -1 if an error occurred

4. 100
mandatory
Score: 0.0% (Checks completed: 0.0%)
Write a function that sets the value of a bit to 0 at a given index.

Prototype: int clear_bit(unsigned long int *n, unsigned int index);
where index is the index, starting from 0 of the bit you want to set
Returns: 1 if it worked, or -1 if an error occurred

5. 101
mandatory
Score: 0.0% (Checks completed: 0.0%)
Write a function that returns the number of bits you would need to flip to get from one number to another.

Prototype: unsigned int flip_bits(unsigned long int n, unsigned long int m);
You are not allowed to use the % or / operators

6. Endianness
#advanced
Score: 0.0% (Checks completed: 0.0%)
Write a function that checks the endianness.

Prototype: int get_endianness(void);
Returns: 0 if big endian, 1 if little endian

7. Crackme3
#advanced
Score: 0.0% (Checks completed: 0.0%)
Find the password for this program.

Save the password in the file 101-password
Your file should contain the exact password, no new line, no extra space
