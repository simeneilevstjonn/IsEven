# IsEven
More or less silly ways to check whether an integer is even.

Currently it contains six methods.

- `isEvenModulo(int n)` checks whether the division result is 0, and hence the dividend even.
- `ìsEvenAnd(int n)` uses binary logic to AND the input with the number 1 (0b00000000000000000000000000000001). It will be 1 if the input's last bit is 1, which makes it odd.
- `isEvenBitShift(int n)` shifts the number one bit to the right, to get rid of the last bit before shifting back left and comparing to the original number. No data will have been lost if the number is even.
- `isEvenChar(int n)` gets the last digit of the number written in base 10 as a char, and compares it to the ones making an even number.
- `ìsEvenDivision(int n)` performs integer division with 2, then multiplies back with 2 and compares the result with the input.
- `ìsEvenForLoop(int n)` loops the amount of times indicated by the input, alternating between `true` and `false`.
