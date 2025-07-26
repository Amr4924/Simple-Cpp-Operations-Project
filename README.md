# Smart Calculator V3.0 - Advanced C++ Operations Suite

[![GitHub](https://img.shields.io/badge/GitHub-Repository-blue?logo=github)](https://github.com/Amr4924)
[![LinkedIn](https://img.shields.io/badge/LinkedIn-Profile-blue?logo=linkedin)](https://www.linkedin.com/in/amr-sa3dwy-53a51a343)
[![C++](https://img.shields.io/badge/C++-Programming-blue?logo=cplusplus)](https://isocpp.org/)
[![TikTok](https://img.shields.io/badge/TikTok-Follow-ff0050?logo=tiktok)](https://www.tiktok.com/@3mr675)

A comprehensive console-based calculator application written in C++ that provides essential mathematical operations, geometric calculations, and unit conversions with an intuitive user interface and smart operation history tracking.

## 🌟 Features

This Smart Calculator V3.0 offers seven comprehensive mathematical and geometric operations:

### ➕ Advanced Arithmetic Operations
- Perform multiple calculations in sequence (addition, subtraction, multiplication, division)
- Chain operations with real-time results and smart operation history tracking
- Division by zero protection with comprehensive error handling
- Operation and number history storage for future enhancements
- Enter '=' to get final results with calculation steps

### 🔢 Exponentiation Calculator
- Calculate the power of any number using efficient loop-based implementation
- Custom algorithm for power calculation without using built-in functions
- Supports any positive integer exponent
- Educational approach showing manual computation

### 🔍 Even/Odd Number Analyzer
- Analyze unlimited numbers in a single session
- Instant classification of numbers as even or odd
- Batch processing for multiple numbers with dynamic vector storage
- Enter '0' to finish input and get comprehensive results

### 📊 Dynamic Average Calculator
- Calculate the arithmetic mean of any quantity of numbers
- Supports decimal numbers with high precision
- Dynamic input system - enter as many numbers as needed
- Flexible vector-based storage system
- Enter '0' to finish input and calculate average

### 🧮 Advanced Factorial Calculator
- Compute factorial of any positive integer
- Loop-based implementation for educational purposes
- Supports large numbers with long long int precision
- Clear step-by-step calculation display with descriptive output

### 🔺 Triangle Geometry Calculator
- **Basic Area Calculation**: Using base and height formula (1/2 × base × height)
- **Heron's Formula**: Calculate area using three sides with validation
- **Perimeter Calculation**: Sum of all three sides
- **Input Validation**: Checks for valid triangle sides
- **Error Handling**: Comprehensive validation for geometric constraints

### 🔄 Unit Conversion System
- **Length Conversions**: 
  - Centimeters ↔ Meters
  - Meters ↔ Kilometers
  - Centimeters ↔ Kilometers
- **Area Conversions**:
  - Square Centimeters ↔ Square Meters
  - Square Meters ↔ Square Kilometers
  - Square Centimeters ↔ Square Kilometers
- **Bidirectional Support**: Convert in both directions for all units
- **Precision Results**: High-accuracy conversion calculations

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
2. **Select an operation** - Choose from 7 available mathematical operations:
   - Press `1` for Advanced Arithmetic Operations
   - Press `2` for Exponentiation Calculator
   - Press `3` for Even/Odd Number Analyzer
   - Press `4` for Dynamic Average Calculator
   - Press `5` for Advanced Factorial Calculator
   - Press `6` for Triangle Geometry Calculator
   - Press `7` for Unit Conversion System
3. **Follow the prompts** - Enter the required numbers based on your selection
4. **View results** - The calculator will display the computed results with formatting
5. **Continue or exit** - Choose to perform another operation or exit the program

### Example Usage

```
=====================================
     Smart Calculator Installed!     
=====================================

[1] The first operation is basic arithmetic operations.
[2] The second operation is the process of calculating the exponent.
[3] The third operation is the process of checking if the numbers are even or odd.
[4] The fourth operation is the process of calculating the average of four numbers.
[5] The fifth operation is the process of calculating the factorial of a number.
[6] The sixth operation is the process of calculating the area and perimeter of a triangle.
[7] The seventh operation is the process of converting between different units of length and area.

Enter Number (1) Or (2) Or (3) Or (4) Or (5) Or (6) Or (7): 1
*******************************
You have chosen the basic arithmetic operations.
*******************************
Enter The Number: 
15
Choose the operation: ( + | - | * | / )
Select ( = ) for results:-
*
Enter The Number: 
3
Choose the operation: ( + | - | * | / )
Select ( = ) for results:-
-
Enter The Number: 
5
Choose the operation: ( + | - | * | / )
Select ( = ) for results:-
=
******************
result: 40
******************
```

## 🏗️ Project Structure

```
Simple-Cpp-Operations-Project/
│
├── main.cpp                    # Main source code file (V3.0)
├── Simple Operations.cpp       # Legacy version
├── Simple Operations.exe       # Compiled executable (Windows)
└── README.md                  # Project documentation
```

## 🔧 Technical Details

### Functions Overview

| Function | Purpose | Parameters | Return Type |
|----------|---------|------------|-------------|
| `options()` | Display menu options | `vector<string> option` | `void` |
| `BasicOperations()` | Advanced arithmetic with history | `vector<double> nums, vector<char> printOp` | `double` |
| `exponent()` | Calculate power using loops | `int numOne, int os` | `int` |
| `even()` | Check even/odd for vector | `vector<int> nums` | `void` |
| `avg()` | Calculate average of vector | `vector<double> nums` | `double` |
| `factorial()` | Calculate factorial | `long long int fct` | `int` |
| `AreaOfTriangle()` | Basic triangle area | `double Base, double Height` | `double` |
| `Heron()` | Triangle area (Heron's formula) | `double side1, double side2, double side3` | `double` |
| `PerimeterOfTriangle()` | Triangle perimeter | `double side1, double side2, double side3` | `double` |
| `LengthConversion()` | Convert length units | `double value, int option` | `string` |
| `ConvertSpaces()` | Convert area units | `double value, int option` | `string` |

### Key Features

- **Smart Memory Management**: Uses dynamic vectors for flexible input handling
- **Operation History Tracking**: Stores numbers and operations for future enhancements
- **Comprehensive Input Validation**: Handles invalid user inputs gracefully
- **Professional User Interface**: Clear prompts, visual separators, and screen management
- **Modular Design**: Separate functions for each mathematical operation
- **Cross-Platform Compatibility**: Compatible with Windows, Linux, and macOS
- **Extended Mathematical Operations**: From basic arithmetic to advanced geometry
- **Dynamic Input System**: No fixed limits on number of inputs for most operations
- **Advanced Error Handling**: Division by zero protection, triangle validation, and input checking
- **Social Integration**: Automatic browser opening to developer's social profiles

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
- **TikTok:** [@3mr675](https://www.tiktok.com/@3mr675)

Feel free to reach out for questions, suggestions, collaboration opportunities, or just to connect!

## 🙏 Acknowledgments

- Thanks to the C++ community for inspiration and best practices
- Special thanks to everyone who contributes to open-source education
- Appreciation for geometric mathematics and unit conversion principles

---

⭐ **Star this repository if you found it helpful!** ⭐

*Built with passion for mathematics and clean code* 💻✨
