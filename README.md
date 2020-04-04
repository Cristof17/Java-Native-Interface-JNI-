# Java
## Compilation 

you can pass `javac` command arguments from files if the files start with @. `javac` reads the files starting with @ and puts their contents as command line arguments.
`-d` option specifies the classes directory
`-verbose` option prints class fils searched and created

```bash
javac @javac_options @java_types
```

## Run

`-cp` option specifies the folder to look for types and classes
`-Djava.library.path` option specifies where to look for the C dynamic library

```bash
java -cp $(pwd)/target -Djava.library.path=$(pwd)
```

# C library

## Compile module object 

```bash
gcc -c -fpic print.c```
```

## Create a dynamic library in Linux from the module object
```bash
gcc -shared -fpic -o libprint.so print.o
```


