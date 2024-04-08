#pragma once
#include <iostream>
#ifndef WINDOW_WINGOW_H_
#define WINDOW_WINGOW_H_

class GLFWwindow;

class Window {
  static GLFWwindow* window_;
 public:
  static int32_t InitWindowV(int32_t width, int32_t height, const char* title);
  static void TerminateWindowV();
  static bool IsShouldCloseV();
  static void SwapBuffersV();
};

#endif