# C XOR Encryptor

A simple command-line text encryptor and decryptor written in pure C.

## How it works

The program uses the bitwise XOR (`^`) operation to encrypt a message with a single-character key. 

Applying the same key and the same XOR operation a second time decrypts the message back to its original state. This is a classic demonstration of symmetric encryption.

## How to run

Make sure you have a C compiler installed (like `gcc`).

1. Clone the repository:
   ```bash
   git clone https://github.com/ilyashulga13/C-XOR-Encryptor.git
   ```
2. Navigate to the project folder:
   ```bash
   cd C-XOR-Encryptor
   ```
3. Compile the code:
   ```bash
   gcc main.c -o encryptor
   ```
4. Run the program:
   ```bash
   ./encryptor
   ```

## Usage Example

When you run the app, it asks for a message and shows the original, encrypted, and decrypted text.

```text
Enter a message to encrypt: Hello GitHub

Original text:  Hello GitHub
Encrypted text:  Cyyjj#C^inyq
Decrypted text: Hello GitHub
```

## Tech Stack

- **Language:** C
- **Libraries:** Standard Library (`stdio.h`, `string.h`)

## License

This project is licensed under the MIT License.
