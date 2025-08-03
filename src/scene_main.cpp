// Copyright (c) 2025 Sylar129. All rights reserved

#include "scene_main.h"

#include "core/game.h"
#include "raymath.h"

namespace ghostescape {

SceneMain::SceneMain() {}

void SceneMain::Update() {
  camera_position_ = camera_position_ + Vector2(10, 20) * GetFrameTime();
}

void SceneMain::Render() { RenderBackground(); }

void SceneMain::RenderBackground() const {
  Vector2 window_size = core::Game::Get().GetWindowSize();
  Vector2 world_size = Vector2Scale(window_size, 3);
  Vector2 left_top = camera_position_ * -1;
  Vector2 right_bottom = world_size - camera_position_;

  float grid_size = 80;

  for (float i = left_top.x; i <= right_bottom.x; i += grid_size) {
    if (i < 0 || i > window_size.x) {
      continue;
    }
    DrawLineV({i, left_top.y}, {i, right_bottom.y}, RED);
  }

  for (float i = left_top.y; i <= right_bottom.y; i += grid_size) {
    if (i < 0 || i > window_size.y) {
      continue;
    }
    DrawLineV({left_top.x, i}, {right_bottom.x, i}, RED);
  }

  DrawRectangleLinesEx({0, 0, window_size.x, window_size.y}, 4, GREEN);
}

}  // namespace ghostescape
