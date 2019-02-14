  LOCAL_PATH := $(call my-dir)
  include $(CLEAR_VARS)

  # 获取所有子目录中的 c 文件
  #LOCAL_SRC_FILES := $(call all-c-files-under)

  LOCAL_SRC_FILES := hello.c

  # 当前模块依赖的动态 Java 库名称
  #LOCAL_JAVA_LIBRARIES := android.test.runner

  # 当前模块的名称
  LOCAL_MODULE := aplex

  # 将当前模块编译成一个静态的 Java 库
  include $(BUILD_SHARED_LIBRARY)