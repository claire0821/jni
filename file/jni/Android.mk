LOCAL_PATH:=$(call my-dir)
APP_PLATFORM=android-16
include $(CLEAR_VARS)

LOCAL_MODULE:=test

LOCAL_SRC_FILES:=test.cpp test.h

LOCAL_LDLIBS :=  -lz -llog -L$(SYSROOT)/usr/lib  
include $(BUILD_SHARED_LIBRARY)