package com.claire.jni;

public class Tool {
    static {
        System.loadLibrary("test");
        System.loadLibrary("jni");
    }

    public static native void test();
    public static native void testString(String str);
}
