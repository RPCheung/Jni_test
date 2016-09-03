package com.rp.jni_test;

/**
 * Created by cheungrp on 9/3/16.
 */
public class JniClass {

    static {
        System.loadLibrary("TestLibs");
    }

    public static native String getString();
}
