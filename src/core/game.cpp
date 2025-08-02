// Copyright (c) 2025 Sylar129. All rights reserved

#include "game.h"

#include "raylib.h"

namespace ghostescape {

Game::Game() {}

Game ::~Game() {}

void Game::Init() {
  constexpr int screenWidth = 1280;
  constexpr int screenHeight = 720;

  InitWindow(screenWidth, screenHeight, "raylib [core] example - basic window");

  SetTargetFPS(60);
}

void Game::Run() {
  while (!WindowShouldClose()) {
    Update();

    Render();
  }
}

void Game::Clean() { CloseWindow(); }

void Game::Update() {}

void Game::Render() {
  BeginDrawing();

  ClearBackground(RAYWHITE);

  EndDrawing();
}

}  // namespace ghostescape
