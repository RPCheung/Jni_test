LOCAL_PATH:= $(call my-dir)

include $(CLEAR_VARS)

LOCAL_MODULE:= TestLibs
LOCAL_SRC_FILES:= TestLibs.cpp

include $(BUILD_SHARED_LIBRARY)