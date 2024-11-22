
# Root Finding Program

This program is designed to find the root of the function \( f(x) = 2x - \log_{10}(x) - 7 \) within a user-defined interval using the bisection method. The program identifies an interval where the function changes signs, then uses the midpoint of this interval to iteratively approximate the root.

## Features
- **Root Finding using the Bisection Method**: Finds the root of a continuous function by bisecting intervals where sign changes occur.
- **Dynamic Range Input**: Allows the user to input a range to search for sign changes.
- **Interval Logging**: Displays intermediate values during the interval checking and root-finding process.

## Requirements
- C Standard Library (stdio.h, math.h)

## Usage

1. **Compile the Program**  
   ```bash
   gcc -o root_finder root_finder.c -lm
   ```

2. **Run the Program**  
   ```bash
   ./root_finder
   ```

3. **Input Range**:  
   The program prompts the user to enter the lower and upper bounds of the range.  
   - For the log-based function `f(x) = 2x - log10(x) - 7`, make sure to choose a positive lower bound (e.g., `2`) to avoid errors due to the logarithmic function's domain.

### Example

```bash
bro set the range, be careful about the range you set for example for log shit start the range at 2 then for everything else it's fine
2
5
```

The program will:
- Check for a sign change within the range.
- Print intermediate values for `a`, `b`, and the midpoint `c` during the root-finding process.
- Display the approximate root once found.

## Code Overview

### Functions

1. **`float func(float a)`**  
   Evaluates the function \( f(a) = 2a - \log_{10}(a) - 7 \).

2. **`float mid_point(float a, float b)`**  
   Calculates the midpoint between two values.

3. **`float calculate_range(int r1, int r2)`**  
   Loops over the specified range `[r1, r2]` to find an interval where the function changes sign. Returns the start of the interval where a sign change occurs.

4. **`float find_root(float a, float b, float c)`**  
   Uses the bisection method to iteratively approximate the root by adjusting the interval `[a, b]` and updating the midpoint `c` until the difference between successive values is below a specified tolerance (0.00001).

### `main` Function
- Prompts the user to input a range.
- Calls `calculate_range` to find an interval with a sign change.
- Uses `find_root` to approximate the root within that interval.

## Sample Output

```
bro set the range, be careful about the range you set for example for log shit start the range at 2 then for everything else it's fine 
2
5
the value of y is :[value] at [index]
the value of x is :[value] at [index]
one cycle done 
here is the interval, 3.000000, 4.000000
the value of a,b,c,fx,fy,fc, [values...]
the value of root is 3.347626
```

## Note
- The program only supports functions with continuous intervals where a sign change indicates the presence of a root.
- Ensure the specified range does not cause domain errors for `log10f`.

