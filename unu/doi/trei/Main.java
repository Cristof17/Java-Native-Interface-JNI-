package unu.doi.trei;

public class Main {

    static {
        System.loadLibrary("print");
    }

    public static native void print();

    public static void main(String[] args) {
        print(); 
    }
}
