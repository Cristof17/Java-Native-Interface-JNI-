# Java

## Generate C Header

generate the C header file for the C compiler
```bash
javac -h . unu/doi/trei/Main.java
```

## Compilation 

you can pass `javac` command arguments from files if the files start with @. `javac` reads the files starting with @ and puts their contents as command line arguments.
`-d` option specifies the classes directory
`-verbose` option prints class fils searched and created

```bash
javac @javac_options @javac_types
```

## Run

`-cp` option specifies the folder to look for types and classes
`-Djava.library.path` option specifies where to look for the C dynamic library

```bash
java -cp $(pwd)/target -Djava.library.path=$(pwd) unu.doi.trei.Main
```

# C library

## Create implementation file

```bash
vim unu_doi_trei_Main.c
```

## Module object
compile the C source in an object file
```bash
gcc -fpic -c -I /usr/lib/jvm/java-11-openjdk-amd64/include/ -I /usr/lib/jvm/java-11-openjdk-amd64/include/linux unu_doi_trei_Main.c
```

## Dynamic library
link the object file in a dynamic library 
```bash
gcc -shared -fpic -o libprint.so unu_doi_trei_Main.o
```


