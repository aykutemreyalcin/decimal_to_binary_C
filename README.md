# Decimal to Binary Converter in C

## Overview
This C program converts a **decimal number** (e.g., `10`) into its **binary equivalent**.

## How It Works
1. The user inputs a decimal number.
2. The program repeatedly divides the number by `2`, storing the remainders.
3. It then prints the remainders in reverse order to get the binary representation.
4. The result is displayed.

### Requirements
- A C compiler (e.g., GCC, Clang, MSVC)

### Compiling the Program
```sh
gcc decimal_to_binary.c -o decimal_to_binary
```

### Running the Program
```sh
./decimal_to_binary
```

### Expected Output
```
Enter a decimal number: 10
Binary equivalent: 1010
```


