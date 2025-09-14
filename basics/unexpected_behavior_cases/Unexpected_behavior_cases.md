# situations which can cause unexpected behavior

1. using uninitialized variables

    ```cpp
    char a;
    std::cout << a;
    ```

2. invalid inputs

    ```cpp
    int x{-1};
    int y{-1};
    std::cout << "Enter two numbers: ";
    std::cin >> x >> y; // if you enter a char, you encounter unexpected behavior
    ```
