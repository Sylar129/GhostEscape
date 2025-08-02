// Copyright (c) 2025 Sylar129. All rights reserved

#include "core/game.h"

#include "raylib.h"
#include "scene_main.h"

namespace ghostescape {

Game::Game() {}

Game ::~Game() {}

void Game::Init() {
  constexpr int screenWidth = 1280;
  constexpr int screenHeight = 720;

  InitWindow(screenWidth, screenHeight, "raylib [core] example - basic window");

  SetTargetFPS(60);

  current_scene_ = new SceneMain();
  current_scene_->Init();
}

void Game::Run() {
  while (!WindowShouldClose()) {
    Update();

    Render();
  }
}

void Game::Clean() {
  if (current_scene_) {
    current_scene_->Clean();
    delete current_scene_;
  }

  CloseWindow();
}

void Game::Update() { current_scene_->Update(); }

void Game::Render() {
  BeginDrawing();

  ClearBackground(RAYWHITE);

  current_scene_->Render();

  EndDrawing();
}

}  // namespace ghostescape
