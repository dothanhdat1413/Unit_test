## Project layout

```
unit_test (Application project directory)
  - components (Components of the application project)
    + Component1
        * CMakeLists.txt: Register the component
        * component1.c
        * include: 
            ~ component1.h
        * test:
            ~ CMakeLists.txt: Register the component (need cmock & component1)
            ~ test_component1.c: Write test case for component1

    + Component2
    ...
  - main                       - Main source files of the application project:
    * CMakeLists.txt: Register the component
    * main.c
  - test                       — Test project directory
    * CMakeLists.txt: Register the test_project
    * main
      ~ CMakeLists.txt
      ~ test_main.c
      ~ Kconfig/Kconfig.probuild (if need)
  - CMakeLists.txt: Register the project

