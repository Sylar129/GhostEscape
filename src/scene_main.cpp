// Copyright (c) 2025 Sylar129. All rights reserved

#include "scene_main.h"

#include "core/game.h"
#include "player.h"
#include "raylib.h"
#include "raymath.h"

namespace ghostescape {

SceneMain::SceneMain() { player = new Player(); }

SceneMain::~SceneMain() { delete player; }

void SceneMain::Update() {
  camera_.target += Vector2(10, 20) * GetFrameTime();
  player->Update();
}

void SceneMain::Render() {
  RenderBackground();
  player->Render();
}

void SceneMain::RenderBackground() const {
  const Vector2 window_size = core::Game::Get().GetWindowSize();
  const float grid = 80.0f;

  BeginMode2D(camera_);

  const float view_width = window_size.x / camera_.zoom;
  const float view_height = window_size.y / camera_.zoom;

  const float world_left = camera_.target.x;
  const float world_top = camera_.target.y;
  const float world_right = world_left + view_width;
  const float world_bottom = world_top + view_height;

  float start_x = floorf(world_left / grid) * grid;
  float start_y = floorf(world_top / grid) * grid;

  for (float x = start_x; x <= world_right; x += grid) {
    DrawLineV({x, world_top}, {x, world_bottom}, RED);
  }

  for (float y = start_y; y <= world_bottom; y += grid) {
    DrawLineV({world_left, y}, {world_right, y}, RED);
  }

  EndMode2D();

  DrawRectangleLinesEx({0, 0, window_size.x, window_size.y}, 4, GREEN);
}

}  // namespace ghostescape
