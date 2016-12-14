### Log Module

```bash
#Include put_log.h in all the file you want to log information
add #include "put_log.h" 
```

```bash
# Init the log module (set file fd). Must be called at the beginning of the program
init_log("log_file_path");
```

```bash
# Call this function to log in the opened file and on stdout. Can be called anywhere in the program
put_log("DEBUG:yes:%s\n", strerror(errno));
```

```bash
# Clean the log module (close file fd). Must be called at the end of the program
clean_log();
```
