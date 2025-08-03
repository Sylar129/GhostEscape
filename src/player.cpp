// Copyright (c) 2025 Sylar129. All rights reserved

#include "player.h"

#include "raymath.h"

namespace ghostescape {

Player::Player() {}

Player::~Player() {}

void Player::Update() {
  KeyboardControl();
  Move();
}

void Player::Render() { DrawRectangleV(GetRenderPosition(), {10, 10}, BLUE); }

void Player::KeyboardControl() {
  velocity_ *= 0.9;
  if (IsKeyDown(KEY_A)) {
    velocity_.x = -max_spedd_;
  }
  if (IsKeyDown(KEY_D)) {
    velocity_.x = max_spedd_;
  }
  if (IsKeyDown(KEY_W)) {
    velocity_.y = -max_spedd_;
  }
  if (IsKeyDown(KEY_S)) {
    velocity_.y = max_spedd_;
  }
}

void Player::Move() {
  auto delta = velocity_ * GetFrameTime();

  SetWorldPosition(GetWorldPosition() + delta);
}

}  // namespace ghostescape
