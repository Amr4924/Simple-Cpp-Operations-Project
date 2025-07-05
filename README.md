# Smart Calculator - Simple C++ Operations

[![GitHub](https://img.shields.io/badge/GitHub-Repository-blue?logo=github)](https://github.com/Amr4924)
[![LinkedIn](https://img.shields.io/badge/LinkedIn-Profile-blue?logo=linkedin)](https://www.linkedin.com/in/amr-sa3dwy-53a51a343)
[![C++](https://img.shields.io/badge/C++-Programming-blue?logo=cplusplus)](https://isocpp.org/)

A comprehensive console-based calculator application written in C++ that provides essential mathematical operations with an intuitive user interface.

## 🌟 Features

This Smart Calculator offers four fundamental mathematical operations:

### 🔢 Exponentiation
- Calculate the power of any number using efficient loop-based implementation
- Custom algorithm for power calculation without using built-in functions

### 🔍 Even/Odd Number Detection
- Analyze up to 4 numbers simultaneously
- Instant classification of numbers as even or odd
- Batch processing for multiple numbers

### 📊 Average Calculator
- Calculate the arithmetic mean of 4 numbers
- Supports decimal numbers with high precision
- Real-time calculation and display

### 🧮 Factorial Calculator
- Compute factorial of any positive integer
- Loop-based implementation for educational purposes
- Clear step-by-step calculation display

## 🚀 Getting Started

### Prerequisites

- C++ Compiler (GCC, Clang, or MSVC)
- Windows/Linux/macOS operating system
- Basic command line knowledge

### Installation & Compilation

1. **Clone the repository:**
   ```bash
   git clone https://github.com/Amr4924/Simple-Cpp-Operations-Project.git
   cd Simple-Cpp-Operations-Project
   ```

2. **Compile the program:**
   
   **For Windows (MinGW/MSYS2):**
   ```bash
   g++ -fdiagnostics-color=always -g "Simple Operations.cpp" -o "Simple Operations.exe"
   ```
   
   **For Linux/macOS:**
   ```bash
   g++ "Simple Operations.cpp" -o "Simple_Operations"
   ```

3. **Run the application:**
   
   **Windows:**
   ```bash
   .\Simple Operations.exe
   ```
   
   **Linux/macOS:**
   ```bash
   ./Simple_Operations
   ```

## 🎮 Usage

1. **Launch the application** - The Smart Calculator welcome screen will appear
2. **Select an operation** - Choose from 4 available mathematical operations:
   - Press `1` for Exponentiation
   - Press `2` for Even/Odd Check
   - Press `3` for Average Calculation
   - Press `4` for Factorial Calculation
3. **Follow the prompts** - Enter the required numbers based on your selection
4. **View results** - The calculator will display the computed results
5. **Continue or exit** - Choose to perform another operation or exit the program

### Example Usage

```
=====================================
     Smart Calculator Installed!     
=====================================

[1] The first operation is the process of calculating the exponent.
[2] The second operation is the process of checking if the numbers are even or odd.
[3] The third operation is the process of calculating the average of four numbers.
[4] The fourth operation is the process of calculating the factorial of a number.

Enter Number (1) Or (2) Or (3) Or (4): 1
You have chosen the exponentiation operation.
Enter the number and power.
Enter a number: 5
Enter the number of times to square it: 3
The square: 125
```

## 🏗️ Project Structure

```
Simple-Cpp-Operations-Project/
│
├── Simple Operations.cpp    # Main source code file
├── Simple Operations.exe    # Compiled executable (Windows)
└── README.md               # Project documentation
```

## 🔧 Technical Details

### Functions Overview

| Function | Purpose | Parameters | Return Type |
|----------|---------|------------|-------------|
| `square()` | Calculate power using loops | `int numOne, int os` | `int` |
| `even()` | Check even/odd for array | `int nums[4], int count` | `void` |
| `avg()` | Calculate average | `double nums[4], int count` | `double` |
| `factorial()` | Calculate factorial | `int fct` | `int` |

### Key Features

- **Memory Efficient**: Uses arrays with fixed size for optimal performance
- **Input Validation**: Handles invalid user inputs gracefully
- **User-Friendly Interface**: Clear prompts and formatted output
- **Modular Design**: Separate functions for each mathematical operation
- **Cross-Platform**: Compatible with Windows, Linux, and macOS

## 🤝 Contributing

Contributions are welcome! Here's how you can help:

1. **Fork the repository**
2. **Create a feature branch** (`git checkout -b feature/amazing-feature`)
3. **Commit your changes** (`git commit -m 'Add some amazing feature'`)
4. **Push to the branch** (`git push origin feature/amazing-feature`)
5. **Open a Pull Request**

### Contribution Guidelines

- Follow C++ best practices and coding standards
- Add comments for complex logic
- Test your changes thoroughly
- Update documentation if necessary

## 📝 License

This project is open source and available under the [MIT License](LICENSE).

## 📧 Contact & Support

**Developer:** Amr Sa3dwy

- **GitHub:** [@Amr4924](https://github.com/Amr4924)
- **LinkedIn:** [Amr Sa3dwy](https://www.linkedin.com/in/amr-sa3dwy-53a51a343)

Feel free to reach out for questions, suggestions, or collaboration opportunities!

## 🙏 Acknowledgments

- Thanks to the C++ community for inspiration and best practices
- Special thanks to everyone who contributes to open-source education

---

⭐ **Star this repository if you found it helpful!** ⭐
