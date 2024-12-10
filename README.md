# Encdec
A simple C++ program to encrypt and decrypt image files using XOR encryption. This program can process any binary file, making it useful for basic encryption tasks.

  Note: XOR encryption is not secure for sensitive or production use. It is suitable for learning and simple applications.

## Features

- Encrypts and decrypts images or any binary file.
- Easy-to-use command-line interface.
- Lightweight and minimal dependencies.

## How it works
The program uses the XOR operation for encryption and decryption. It applies the XOR operation byte-by-byte using a user-provided key. Since XOR is symmetric, applying the same key twice restores the original file.

## Usage
### 1. Compile the program
Use a c++ compiler like `g++`
```
g++ encdec.cpp -o encdec
```
### 2. Encrypt a file
Run the program in `encrypt` mode
```
./encdec encrypt <inputfile> <outputfile> <passkey>
```
### Example
```
./encdec encrypt input.jpg encrypted.jpg mysecretkey
```
### 3. Decrypt a file
Run the program in  `decrypt` mode
```
./encdec decrypt <encryptedFile> <outputFile> <passkey>
```
### Example
```
./encdec decrypt encrypted.jpg .jpg mysecretkey
```
## Arguments
| Arguments | Description |
| --------- | ----------- |
| `encrypt/decrypt` | mode of use |
| `<inputfile>` | Path of input file |
| `<outputfile>` | Path of output file |
| `<passkey>` | Passkey |

## Notes
- **Importance of key**: The same key must be used for decryption as used during encryption
- **Binary Files**: This program reads every file in binary.
- **Security**: The **XOR** encryption algorithm is vulnerable to brute force and cryptanalysis. For stronger security, use AES or another modern encrytion algorithm.
## License
This project is licensed under the MIT License.
## Contribution
Contributions are welcome! If you find issues or have ideas for improvement, feel free to open an issue or submit a pull request.
## Disclaimer
This program is for educational purposes. Do not use it for securing sensitive data. For robust encryption, consider using libraries like OpenSSL with AES encryption.
