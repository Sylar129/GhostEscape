// Copyright (c) 2025 Sylar129. All rights reserved

#include "core/game.h"

#include <cassert>

#include "raylib.h"
#include "scene_main.h"

namespace ghostescape::core {

namespace {
constexpr int screenWidth = 1280;
constexpr int screenHeight = 720;
}  // namespace

Game* Game::s_instance = nullptr;

Game& Game::Get() { return *s_instance; }

Game::Game() {
  assert(s_instance == nullptr);

  InitWindow(screenWidth, screenHeight, "raylib [core] example - basic window");

  SetTargetFPS(60);

  current_scene_ = new SceneMain();

  s_instance = this;
}

Game ::~Game() {
  if (current_scene_) {
    delete current_scene_;
  }

  CloseWindow();
}

void Game::Run() {
  while (!WindowShouldClose()) {
    Update();

    Render();
  }
}

Vector2 Game::GetWindowSize() const { return {screenWidth, screenHeight}; }

void Game::Update() { current_scene_->Update(); }

void Game::Render() {
  BeginDrawing();

  ClearBackground(RAYWHITE);

  current_scene_->Render();

  EndDrawing();
}

}  // namespace ghostescape::core
