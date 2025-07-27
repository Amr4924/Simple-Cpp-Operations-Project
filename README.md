# 🧮 Smart Calculator V3.5

[![GitHub stars](https://img.shields.io/github/stars/Amr4924/Simple-Cpp-Operations-Project?style=social)](https://github.com/Amr4924/Simple-Cpp-Operations-Project)
[![GitHub forks](https://img.shields.io/github/forks/Amr4924/Simple-Cpp-Operations-Project?style=social)](https://github.com/Amr4924/Simple-Cpp-Operations-Project/fork)
[![GitHub issues](https://img.shields.io/github/issues/Amr4924/Simple-Cpp-Operations-Project)](https://github.com/Amr4924/Simple-Cpp-Operations-Project/issues)
[![License: Educational](https://img.shields.io/badge/License-Educational%20Only-green.svg)](LICENSE)

[![LinkedIn](https://img.shields.io/badge/LinkedIn-Profile-blue?logo=linkedin)](https://www.linkedin.com/in/amr-sa3dwy-53a51a343)
[![TikTok](https://img.shields.io/badge/TikTok-Follow-ff0050?logo=tiktok)](https://www.tiktok.com/@3mr675)
[![C++](https://img.shields.io/badge/C++-17-blue.svg?style=flat&logo=c%2B%2B)](https://isocpp.org/)
[![Platform](https://img.shields.io/badge/Platform-Windows%20%7C%20Linux%20%7C%20macOS-lightgrey)](https://github.com/Amr4924/Simple-Cpp-Operations-Project)

---

## 📋 Table of Contents

- [📖 Overview](#-overview)
- [⚡ Features](#-features)
- [🏗️ Architecture](#️-architecture)
- [🚀 Quick Start](#-quick-start)
- [💻 Installation](#-installation)
- [📚 Usage](#-usage)
- [🧪 Examples](#-examples)
- [📈 Version History](#-version-history)
- [🤝 Contributing](#-contributing)
- [📝 License](#-license)
- [📧 Contact](#-contact)

---

## 📖 Overview

**Smart Calculator V3.5** is a comprehensive, modular C++ console application designed for advanced mathematical computations. Built with educational excellence and industry-standard practices, this calculator demonstrates modern C++ programming paradigms while providing powerful computational capabilities.

### 🎯 **Project Goals**
- Demonstrate **modular C++ architecture** with header file organization
- Provide **comprehensive mathematical operations** for educational purposes
- Showcase **best practices** in C++ development and code structure
- Offer **cross-platform compatibility** for diverse learning environments

---

## ⚡ Features

### 🔢 **Core Mathematical Operations**
| Operation | Description | Input Support |
|-----------|-------------|---------------|
| **Basic Arithmetic** | Addition, Subtraction, Multiplication, Division | Dynamic vector-based input |
| **Exponentiation** | Custom power calculations with integer bases | Flexible power values |
| **Number Analysis** | Even/Odd classification | Bulk number processing |
| **Statistical Functions** | Average calculation | Multiple number support |
| **Factorial Computation** | Efficient factorial algorithms | Large number handling |

### 📐 **Advanced Geometric Calculations**
- **Triangle Area Calculation**
  - Standard base-height formula: `Area = (base × height) / 2`
  - Heron's formula: `Area = √(s(s-a)(s-b)(s-c))` where `s = (a+b+c)/2`
- **Triangle Perimeter**: Three-side perimeter computation
- **Multiple Calculation Methods**: Flexible geometric approaches

### 🔄 **Unit Conversion System**
- **Length Conversions**: 
  - cm ⟷ m ⟷ km (bidirectional)
  - Precise conversion factors
- **Area Conversions**: 
  - cm² ⟷ m² ⟷ km² (comprehensive matrix)
  - Multi-step conversion support

---

## 🏗️ Architecture

### 📁 **Project Structure**
```
Smart-Calculator-V3.5/
│
├── 📄 main.cpp           # Application entry point & user interface
├── 📄 operations.h       # Function declarations & prototypes
├── 📄 operations.cpp     # Legacy implementation (reference)
├── 📄 LICENSE           # Educational use license
├── 📄 README.md         # Project documentation
└── 📁 .git/             # Version control
```

### 🔧 **Technical Specifications**

| Component | Technology | Version | Purpose |
|-----------|------------|---------|---------|
| **Language** | C++ | 17+ | Core implementation |
| **Architecture** | Header-based | Modular | Code organization |
| **Data Structures** | STL Vectors | Dynamic | Flexible input handling |
| **Compiler Support** | GCC/Clang/MSVC | 7.0+/6.0+/2017+ | Cross-platform compilation |
| **Platform** | Multi-platform | All | Windows/Linux/macOS |

---

## 🚀 Quick Start

### ⚙️ **Prerequisites**
- **C++ Compiler**: GCC 7.0+, Clang 6.0+, or MSVC 2017+
- **Command Line Interface**: Terminal or Command Prompt
- **Git**: For repository cloning (optional)

### 📥 **Installation Steps**

```bash
# 1. Clone the repository
git clone https://github.com/Amr4924/Simple-Cpp-Operations-Project.git

# 2. Navigate to project directory
cd Simple-Cpp-Operations-Project

# 3. Compile the application
g++ -std=c++17 -o calculator main.cpp

# 4. Run the calculator
./calculator          # Linux/macOS
calculator.exe        # Windows
```

### 🔨 **Advanced Compilation Options**

```bash
# Debug build with extensive warnings
g++ -g -Wall -Wextra -Wpedantic -std=c++17 -o calculator_debug main.cpp

# Optimized release build
g++ -O3 -DNDEBUG -std=c++17 -o calculator_release main.cpp

# Cross-platform compilation with MinGW (Windows)
x86_64-w64-mingw32-g++ -std=c++17 -o calculator.exe main.cpp
```

---

## 💻 Installation

### 🖥️ **Windows**
```cmd
# Using MinGW-w64
g++ -std=c++17 -o calculator.exe main.cpp

# Using MSVC
cl /EHsc /std:c++17 main.cpp /Fe:calculator.exe
```

### 🐧 **Linux**
```bash
# Ubuntu/Debian
sudo apt install build-essential
g++ -std=c++17 -o calculator main.cpp

# CentOS/RHEL
sudo yum install gcc-c++
g++ -std=c++17 -o calculator main.cpp
```

### 🍎 **macOS**
```bash
# Install Xcode Command Line Tools
xcode-select --install

# Compile with Clang
clang++ -std=c++17 -o calculator main.cpp
```

---

## 📚 Usage

### 🎮 **Interactive Menu System**

Upon launching, users are presented with a comprehensive menu:

```
=====================================
     Smart Calculator Installed!     
=====================================

[1] Basic arithmetic operations
[2] Exponentiation calculations  
[3] Even/Odd number analysis
[4] Average calculation
[5] Factorial computation
[6] Triangle geometry (Area & Perimeter)
[7] Unit conversion (Length & Area)

Enter Number (1-7): _
```

### 🔄 **Operation Flow**
1. **Select Operation**: Choose from 7 available mathematical operations
2. **Input Data**: Enter numbers or values as prompted
3. **View Results**: See calculated output with clear formatting
4. **Continue/Exit**: Choose to perform another operation or exit

---

## 🧪 Examples

### 🔢 **Basic Arithmetic**
```cpp
Input: Enter numbers and operators
5 + 3 * 2 - 1 / 4
Output: Result: 10.75
```

### 📐 **Triangle Area (Heron's Formula)**
```cpp
Input: Enter three sides
Sides: 3, 4, 5
Calculation: s = (3+4+5)/2 = 6
Area = √(6×3×2×1) = 6
Output: Area: 6.00 square units
```

### 🔄 **Length Conversion**
```cpp
Input: Convert 1500 cm to meters
Calculation: 1500 ÷ 100 = 15
Output: 15.00 meters
```

### 🧮 **Factorial Calculation**
```cpp
Input: Calculate 5!
Calculation: 5 × 4 × 3 × 2 × 1
Output: 120
```

---

## 📈 Version History

| Version | Release Date | Key Features | Status |
|---------|--------------|--------------|--------|
| **V3.5** | Current | Enhanced modular architecture, header organization | ✅ **Active** |
| **V3.0** | Previous | Triangle geometry, unit conversion systems | 📦 Archived |
| **V2.0** | Previous | Enhanced arithmetic, operation history | 📦 Archived |
| **V1.0** | Initial | Basic calculator functionality | 📦 Archived |

### 🆕 **V3.5 Highlights**
- ✅ **Modular Architecture**: Separated header files for better organization
- ✅ **Enhanced Documentation**: Comprehensive README with examples
- ✅ **Cross-Platform Support**: Improved compatibility across systems
- ✅ **Educational License**: Clear terms for academic use

---

## 🛠️ Development Features

### 🏗️ **Code Architecture**
- **Header File Organization**: Clean separation of declarations and implementations
- **STL Integration**: Modern C++ with vector containers and algorithms
- **Error Handling**: Comprehensive input validation and error messages
- **Memory Management**: Efficient dynamic memory usage with RAII principles

### 🎨 **User Experience**
- **Intuitive Interface**: Clear menu system with numbered options
- **Visual Feedback**: Formatted output with clear result presentation
- **Continuous Operation**: Loop-based design for multiple calculations
- **Social Integration**: Automatic browser links to developer profiles

### ⚡ **Performance Features**
- **Optimized Algorithms**: Efficient mathematical computations
- **Dynamic Input**: Vector-based data structures for flexible input sizes
- **Cross-Platform**: Compatible with major operating systems and compilers

---

## 🤝 Contributing

We welcome contributions from the educational community! Here's how you can help:

### 🔄 **Contribution Workflow**

1. **🍴 Fork** the repository
2. **🌿 Create** a feature branch (`git checkout -b feature/amazing-feature`)
3. **💾 Commit** your changes (`git commit -m 'Add some amazing feature'`)
4. **🚀 Push** to the branch (`git push origin feature/amazing-feature`)
5. **📬 Open** a Pull Request

### 📋 **Contribution Guidelines**

#### ✅ **Code Standards**
- Follow **C++17** standards and best practices
- Use **consistent naming conventions** (camelCase for variables, PascalCase for functions)
- Include **comprehensive comments** for complex algorithms
- Maintain **header file organization** for new features

#### 🧪 **Testing Requirements**
- Test changes across **multiple platforms** (Windows/Linux/macOS)
- Verify **compilation** with different compilers (GCC/Clang/MSVC)
- Ensure **no regression** in existing functionality
- Add **example usage** for new features

#### 📚 **Documentation**
- Update **README.md** for new features
- Include **code comments** for complex logic
- Provide **usage examples** for new operations
- Maintain **architectural documentation**

---

## 📝 License

This project is licensed under the **MIT License - Educational Use Only**.

### ⚖️ **License Terms**

| Usage Type | Status | Description |
|------------|--------|-------------|
| 🎓 **Educational** | ✅ **Permitted** | Learning, academic projects, skill development |
| 🏫 **Academic** | ✅ **Permitted** | University assignments, research projects |
| 👨‍💻 **Personal Learning** | ✅ **Permitted** | Individual skill building, portfolio projects |
| 🌐 **Open Source** | ✅ **Permitted** | Contributing to educational repositories |
| 💼 **Commercial** | ❌ **Prohibited** | Selling, profit generation, commercial integration |
| 🏭 **Enterprise** | ❌ **Prohibited** | Corporate use without explicit permission |

### 📋 **Full License Information**

For complete license terms and conditions, please see the [LICENSE](LICENSE) file.

### 💬 **Commercial Licensing**

For commercial licensing inquiries, please contact the author through [LinkedIn](https://www.linkedin.com/in/amr-sa3dwy-53a51a343).

---

## 📧 Contact

### 👨‍💻 **Developer Information**

**Amr Sa3dwy** - *Lead Developer & Architect*

### 🌐 **Connect With Me**

| Platform | Link | Purpose |
|----------|------|---------|
| 💻 **GitHub** | [@Amr4924](https://github.com/Amr4924) | Code repositories & projects |
| 💼 **LinkedIn** | [Amr Sa3dwy](https://www.linkedin.com/in/amr-sa3dwy-53a51a343) | Professional networking |
| 🎥 **TikTok** | [@3mr675](https://www.tiktok.com/@3mr675) | Programming content & tutorials |

### 💌 **Get In Touch**

Feel free to reach out for:
- ❓ **Questions** about the project
- 💡 **Suggestions** for improvements  
- 🤝 **Collaboration** opportunities
- 🎓 **Educational** discussions
- 🐛 **Bug reports** or issues

---

## 🙏 Acknowledgments

### 🏆 **Special Thanks**

- **C++ Community**: For inspiration and best practices in modern C++ development
- **Educational Contributors**: Everyone who supports open-source education initiatives
- **Mathematics Community**: For geometric principles and computational algorithms
- **Open Source Advocates**: For promoting knowledge sharing and collaborative learning

### 🎯 **Educational Impact**

This project aims to demonstrate:
- **Modern C++ Programming**: Best practices and industry standards
- **Modular Architecture**: Professional code organization techniques
- **Mathematical Computing**: Practical applications of algorithms
- **Cross-Platform Development**: Writing portable and maintainable code

---

<div align="center">

## ⭐ **Star this repository if you found it helpful!** ⭐

**Made with ❤️ for the programming education community**

[![GitHub stars](https://img.shields.io/github/stars/Amr4924/Simple-Cpp-Operations-Project?style=social)](https://github.com/Amr4924/Simple-Cpp-Operations-Project)

---

*© 2025 Amr Sa3dwy. Licensed for Educational Use Only.*

</div>
