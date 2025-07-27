# Smart Calculator V3.5 - Enhanced Modular C++ Suite

[![GitHub](https://img.shields.io/badge/GitHub-Repository-blue?logo=github)](https://github.com/Amr4924)
[![LinkedIn](https://img.shields.io/badge/LinkedIn-Profile-blue?logo=linkedin)](https://www.lin## - Maintain the mod## 📝 License

This project is licensed under the **MIT License - Educational Use Only**.

**⚠️ IMPORTANT LICENSING TERMS:**
- ✅ **Educational Use**: Free for learning, academic projects, and skill development
- ❌ **Commercial Use**: Prohibited - No selling, distributing for profit, or commercial integration
- 📚 **Purpose**: Designed specifically for educational and learning purposes

For full license terms and conditions, see the [LICENSE](LICENSE) file.

For commercial licensing inquiries, please contact the author through LinkedIn.r architecture when adding new functions

## 📈 Version History

- **V3.5** - Enhanced modular architecture with header file organization
- **V3.0** - Added triangle geometry and unit conversion systems
- **V2.0** - Enhanced arithmetic operations with operation history
- **V1.0** - Basic calculator with fundamental operations

## 📝 License History

- **V3.5** - Enhanced modular architecture with header file organization
- **V3.0** - Added triangle geometry and unit conversion systems
- **V2.0** - Enhanced arithmetic operations with operation history
- **V1.0** - Basic calculator with fundamental operationscom/in/amr-sa3dwy-53a51a343)
[![C++](https://img.shields.io/badge/C++-Programming-blue?logo=cplusplus)](https://isocpp.org/)
[![TikTok](https://img.shields.io/badge/TikTok-Follow-ff0050?logo=tiktok)](https://www.tiktok.com/@3mr675)

A comprehensive console-based calculator application written in C++ featuring enhanced modular architecture, header file organization, and advanced mathematical operations with intuitive user interface and smart operation history tracking.

## 🌟 Features

This Smart Calculator V3.5 features **enhanced modular architecture** with seven comprehensive mathematical and geometric operations:

### 🏗️ **ENHANCED: Improved Code Organization**
- **Modular File Structure** - Separated main logic from operations
- **Header File Organization** - Clean `operations.h` interface
- **Better Maintainability** - Easier to extend and modify
- **Cleaner Code Structure** - Improved project organization
- **Enhanced Readability** - Better code navigation and understanding

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

2. **Compile the modular project:**
   
   **For Windows (MinGW/MSYS2):**
   ```bash
   g++ -fdiagnostics-color=always -g "main.cpp" -o "SmartCalculator.exe"
   ```
   
   **For Linux/macOS:**
   ```bash
   g++ "main.cpp" -o "SmartCalculator"
   ```

3. **Run the application:**
   
   **Windows:**
   ```bash
   .\SmartCalculator.exe
   ```
   
   **Linux/macOS:**
   ```bash
   ./SmartCalculator
   ```

**Note:** The project uses header file `operations.h` which contains all function declarations. Make sure both `main.cpp` and `operations.h` are in the same directory during compilation.

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

## 🏗️ Project Architecture

```
Simple-Cpp-Operations-Project/
│
├── main.cpp                    # Main application entry point
├── operations.h                # Header file with function declarations  
├── Simple Operations.cpp       # Legacy monolithic version
├── Simple Operations.exe       # Legacy compiled executable
├── SmartCalculator.exe         # New modular compiled executable
└── README.md                  # Project documentation
```

### 🔧 Modular Design Benefits

- **Separation of Concerns**: Main logic separated from operation implementations
- **Header File Organization**: Clean interface definitions in `operations.h`
- **Improved Readability**: Easier to navigate and understand code structure
- **Enhanced Maintainability**: Simpler to add new features or modify existing ones
- **Better Code Organization**: Follows good practices for C++ projects
- **Future-Ready**: Prepared for potential expansion into multiple source files

## 🔧 Technical Implementation

### Header File Structure (`operations.h`)
```cpp
// Function declarations for all mathematical operations
void options(vector<string> option);
double BasicOperations(vector<double> nums, vector<char> printOp);
int exponent(int numOne, int os);
void even(vector<int> nums);
double avg(vector<double> nums);
int factorial(long long int fct);
double AreaOfTriangle(double Base, double Height);
double Heron(double HeightOne, double HeightTwo, double HeightThree);
double PerimeterOfTriangle(double HeightOne, double HeightTwo, double HeightThree);
string LengthConversion(double value, int option);
string ConvertSpaces(double value, int option);
```

### Functions Overview

| Function | Purpose | Parameters | Return Type | Location |
|----------|---------|------------|-------------|----------|
| `options()` | Display menu options | `vector<string> option` | `void` | operations.h |
| `BasicOperations()` | Advanced arithmetic with history | `vector<double> nums, vector<char> printOp` | `double` | operations.h |
| `exponent()` | Calculate power using loops | `int numOne, int os` | `int` | operations.h |
| `even()` | Check even/odd for vector | `vector<int> nums` | `void` | operations.h |
| `avg()` | Calculate average of vector | `vector<double> nums` | `double` | operations.h |
| `factorial()` | Calculate factorial | `long long int fct` | `int` | operations.h |
| `AreaOfTriangle()` | Basic triangle area | `double Base, double Height` | `double` | operations.h |
| `Heron()` | Triangle area (Heron's formula) | `double side1, side2, side3` | `double` | operations.h |
| `PerimeterOfTriangle()` | Triangle perimeter | `double side1, side2, side3` | `double` | operations.h |
| `LengthConversion()` | Convert length units | `double value, int option` | `string` | operations.h |
| `ConvertSpaces()` | Convert area units | `double value, int option` | `string` | operations.h |

### Key Technical Features

- **Enhanced Modular Architecture**: Clean separation between interface and implementation
- **Header File Management**: Proper use of header guards and function declarations
- **Smart Memory Management**: Uses dynamic vectors for flexible input handling
- **Operation History Tracking**: Stores numbers and operations for future enhancements
- **Comprehensive Input Validation**: Handles invalid user inputs gracefully
- **Professional User Interface**: Clear prompts, visual separators, and screen management
- **Cross-Platform Compatibility**: Compatible with Windows, Linux, and macOS
- **Extended Mathematical Operations**: From basic arithmetic to advanced geometry
- **Dynamic Input System**: No fixed limits on number of inputs for most operations
- **Advanced Error Handling**: Division by zero protection, triangle validation, and input checking
- **Social Integration**: Automatic browser opening to developer's social profiles
- **Good Coding Practices**: Follows C++ best practices and coding conventions

## 🤝 Contributing

Contributions are welcome! Here's how you can help:

1. **Fork the repository**
2. **Create a feature branch** (`git checkout -b feature/amazing-feature`)
3. **Commit your changes** (`git commit -m 'Add some amazing feature'`)
4. **Push to the branch** (`git push origin feature/amazing-feature`)
5. **Open a Pull Request**

### Contribution Guidelines

- Follow C++ best practices and coding standards
- Use proper header file organization for new features
- Add comprehensive comments for complex logic
- Test your changes thoroughly across different platforms
- Update documentation if necessary
- Maintain the modular architecture when adding new functions

## � Version History

- **V3.5** - Professional modular architecture with header file organization
- **V3.0** - Added triangle geometry and unit conversion systems
- **V2.0** - Enhanced arithmetic operations with operation history
- **V1.0** - Basic calculator with fundamental operations

## �📝 License

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
- Recognition of modular programming principles and enhanced software architecture

---

⭐ **Star this repository if you found it helpful!** ⭐

*Built with passion for mathematics, clean code, and enhanced software architecture* 💻✨
