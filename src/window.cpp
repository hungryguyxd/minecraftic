#include <iostream>
/////
#include "../includes/raylib.h"
/////
#include "hpp_files/window.hpp"

GLFWwindow* Window::window_;

int32_t Window::InitWindowV(int32_t width, int32_t height, const char* title) {
  InitWindow(width, height, title);
}

void Window::TerminateWindowV() {
  CloseWindow();
}

bool Window::IsShouldCloseV() {
  WindowShouldClose();
}

void Window::SwapBuffersV() {
  SwapScreenBuffer();
}