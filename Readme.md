# LOG MODULE

## Include put_log.h in all the file you want to log information
```bash
add #include "put_log.h" 
```

## Init the log module (set file fd). Must be called at the beginning of the program
```bash
init_log("log_file_path");
```

## Call this function to log in the opened file and on stdout. Can be called anywhere in the program
```bash
put_log("DEBUG:yes:%s\n", strerror(errno));
```

## Clean the log module (close file fd). Must be called at the end of the program
```bash
clean_log();
```
