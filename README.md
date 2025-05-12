# Paillier Encryption Project

This project implements the **Paillier Cryptosystem**, a probabilistic asymmetric encryption algorithm, using modular arithmetic in C++. It was developed as part of an academic project under the guidance of **Professor Arpita Korwar**.

## 📌 Project Structure

- `sender.cpp`: Handles user input and initiates the encryption process.
- `encryption.cpp`: Performs encryption using the Paillier cryptosystem.
- `decryption.cpp`: Decrypts ciphertext using the private key.
- `receiver.cpp`: Simulates message reception and decryption.
- `common.h`: Contains shared constants, data structures, and function declarations.
- `Makefile`: Automates compilation of the complete project.

## 🔐 Paillier Cryptosystem Overview

The Paillier cryptosystem is based on the decisional composite residuosity assumption and supports **homomorphic addition**, making it suitable for privacy-preserving computations such as secure voting, private data aggregation, etc.

### Key Features:
- Public-key encryption
- Additive homomorphism:  
  If \( E(m_1) \) and \( E(m_2) \) are ciphertexts, then  
  \( E(m_1) \cdot E(m_2) \mod n^2 = E(m_1 + m_2) \)

▶️ How to use

To build the project, ensure you have `g++` and `make` installed. Then run:
```
  make
 ./program
 Enter your message

```
📚 Applications

    Secure e-voting systems
    Privacy-preserving data mining
    Confidential data aggregation
👥 Team Members
   <br>
    Govind Singh Rajput
    <br>Somashekar

👩‍🏫 Acknowledgements

We would like to express our sincere gratitude to Dr. Arpita Korwar for her invaluable guidance, support, and encouragement throughout the development of this project. Her expertise in cryptography and constant mentorship played a crucial role in helping us understand the theoretical foundations and successfully implement the Paillier cryptosystem.

📖 References

    Jonathan Katz and Yehuda Lindell, Introduction to Modern Cryptography by Jonathan Katz and Yehuda Lindell.

