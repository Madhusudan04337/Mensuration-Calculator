# Mensuration Calculator

A command-line calculator program that computes area and perimeter/circumference for basic geometric shapes (circle, rectangle, and triangle).

## Features

- Calculate area and circumference of a circle
- Calculate area and perimeter of a rectangle
- Calculate area and perimeter of a triangle (with validation)
- Input validation for all measurements
- User-friendly interface with clear instructions

## Requirements

- C compiler (GCC recommended)
- Standard C libraries

## How to Compile

You can compile the program using GCC with the following command:

```
gcc -o mensuration_calculator mensuration_calculator.c -lm
```

The `-lm` flag is necessary to link the math library for the `sqrt()` and other math functions.

## How to Run

After compilation, run the program using:

```
./mensuration_calculator
```

## Usage Instructions

1. When prompted, select a shape by entering the corresponding number (1-4)
2. Enter the required measurements when prompted
3. View the calculated results
4. Continue with another calculation or exit by selecting option 4

## Example Usage

```
===== MENSURATION CALCULATOR =====

Select a shape:
1. Circle
2. Rectangle
3. Triangle
4. Exit

Enter your choice (1-4): 1

------ CIRCLE ------
Enter radius: 5

Results for Circle (radius = 5.00):
Area: 78.54 square units
Circumference: 31.42 units
```

## Input Validation

The program validates all inputs to ensure:
- All measurements are positive numbers
- Triangle sides can form a valid triangle (sum of any two sides > third side)

## Code Structure

- Main function with menu-driven interface
- Separate functions for each shape's calculations
- Utility functions for input validation
```

## 2. Setting up a GitHub Repository

1. **Create a GitHub account** if you don't have one already at [github.com](https://github.com)

2. **Create a new repository**:
   - Click the "+" icon in the top right corner and select "New repository"
   - Name it "Mensuration-Calculator" or something similar
   - Add a brief description
   - Choose "Public" visibility
   - Don't initialize with README (we'll add our own)
   - Click "Create repository"

3. **Initialize Git locally and push your code**:

```bash
# Navigate to your project directory
cd path/to/your/project

# Initialize Git repository
git init

# Create your C file (if not already created)
# Save your code as mensuration_calculator.c

# Create README.md file
# Copy the README content provided above

# Add files to staging
git add mensuration_calculator.c README.md

# Commit changes
git commit -m "Initial commit: Mensuration Calculator"

# Link to your GitHub repository
git remote add origin https://github.com/YOUR_USERNAME/Mensuration-Calculator.git

# Push to GitHub
git push -u origin master
