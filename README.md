# C-DSA

A collection of small C and C++ practice programs (data structures & algorithms / basic exercises), organized by day.

## Repository layout
- [day1](day1/) — basic C exercises (digit operations, bit shifts, swaps, etc.)  
  - Example: [day1/6.c](day1/6.c) (sum of digits)  
  - Example: [day1/7.c](day1/7.c) (count digits excluding a given digit)
- [day2](day2/) — array problems and sliding-window / recursion experiments  
  - Example: [day2/13.c](day2/13.c) — [`maxlength`](day2/13.c) finds max alternating parity subarray length  
  - Example: [day2/15.c](day2/15.c) — [`sub_array`](day2/15.c) finds subarray with given sum
- [day3](day3/) — introductory C++ (classes, constructors, inheritance)  
  - Example: [day3/16.cpp](day3/16.cpp) (largest of three numbers)  
  - Example: [day3/21.cpp](day3/21.cpp) — class `Student`, see [`Student::display`](day3/21.cpp)  
  - Example: [day3/24.cpp](day3/24.cpp) (multilevel inheritance: `person`, `Student`, `Teacher`)

Other files:
- VS Code config: [.vscode/launch.json](.vscode/launch.json)
- License: [LICENSE](LICENSE)

## Build & run
- Compile a C file:
  - gcc day1/6.c -o day1_6 && ./day1_6
- Compile a C++ file:
  - g++ day3/16.cpp -o day3_16 && ./day3_16

Tip: many examples read from stdin and print to stdout; adapt compile/run commands for files you want to try.

## Notes
- Each day folder contains small, self-contained programs you can compile individually.
- Refer to the source file headers for the problem statement and comments.

## Contributing
- Add new exercises under a new `dayX/` folder and update this README with a short description and link to the new file.

## License
This project is licensed under the terms in [LICENSE](LICENSE).