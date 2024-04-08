#pragma once
#include <iostream>
////
#include "includes/raylib.h"
////
#include "src/hpp_files/window.hpp"
#include "src/values.cpp"

int main() {
  Window::InitWindowV(WindowParametrsV::kWidth, WindowParametrsV::kHeight, WindowParametrsV::kTitle);
  while (!Window::IsShouldCloseV()) {
    PollInputEvents();
    Window::SwapBuffersV();
  }
  Window::TerminateWindowV();
  return 0;
}