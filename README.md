# Log [![Language: C](https://img.shields.io/badge/Language-C-brightgreen.svg)](https://en.wikipedia.org/wiki/C_(programming_language)) [![Builder: CMake](https://img.shields.io/badge/Builder-CMake-brightgreen.svg)](https://cmake.org/) [![License: MIT](https://img.shields.io/badge/License-MIT-brightgreen.svg)](https://opensource.org/licenses/MIT)   

## Introduction
TODO

## Program description
TODO

## Setting up
Clone the project to retrieve the sources:
```
$>git clone https://github.com/sebastienivanez/Log.git
```

Create build repository and build the project using CMake:
```
$>mkdir build
$>cd build
$>cmake ..
```

Finally, compile the sources and generate the binary:
```
$>make
```

## Usage
Include put_log.h in all the file you want to log information
```
$>add #include "put_log.h" 
```

Init the log module (set file fd). Must be called at the beginning of the program
```
$>init_log("log_file_path");
```

Call this function to log in the opened file and on stdout. Can be called anywhere in the program
```
$>put_log("DEBUG:yes:%s\n", strerror(errno));
```

Clean the log module (close file fd). Must be called at the end of the program
```
$>clean_log();
```

## Output
TODO

## Help
TODO

## More info
TODO

## License
This project is licensed under the MIT License - see the [LICENSE](LICENSE) file for details
