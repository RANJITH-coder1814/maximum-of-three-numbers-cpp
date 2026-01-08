# maximum-of-three-numbers-cpp
# Maximum of Three Numbers in C++

This repository contains a simple C++ program to find the maximum value among three integers using `if-else` statements.

## 📌 Features
- Uses basic conditional logic
- Demonstrates function usage in C++
- Beginner-friendly example

## 🧠 How It Works
The program compares three integer values and determines the largest one.

## 💻 Source Code
```cpp
#include<iostream>
using namespace std;

int maximum(int x, int y, int z){
    if(x > y && x > z){
        return x;
    }
    else if(y > z){
        return y;
    }
    else{
        return z;
    }
}

int main(){
    int a = 10, b = 6, c = 7, r;
    r = maximum(a, b, c);
    cout << "Maximum value: " << r;
    return 0;
}

