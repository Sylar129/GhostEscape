// Copyright (c) 2025 Sylar129. All rights reserved

#pragma once

#include "raylib.h"

namespace ghostescape::core {

class Scene;

class Game {
 public:
  Game();
  ~Game();

  void Run();

  Vector2 GetWindowSize() const;

  static Game& Get();

 private:
  void Update();
  void Render();

  static Game* s_instance;

  Scene* current_scene_;
};

}  // namespace ghostescape::core
